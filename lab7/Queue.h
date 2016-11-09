#pragma once

template <typename Q> class Queue
{
public:
	static const int size = 20;//максимальный размер очереди 
	Q *queue;// указатель на очередь 
	int head, tail;// голова хвост

	Queue();
	void operator +(Q num);// добавление элемента 
	void out();//вывод элеементов 
	int operator() (int); // размер очереди 
	Q operator-- ();// извлечь элемент
	bool operator() ();// проверка пустая ли очередь 
};

template <typename Q> Queue<Q>::Queue()
{
	queue = new Q[size];
	head = 0;
	tail = 0;
}

template <typename Q> void Queue<Q>::out()
{
	
	for (int i = head ; i < tail ; i++)
	{
		cout << " " << queue[i];
	}
	cout << endl;
}

template <typename Q> void Queue<Q>::operator+(Q num)
{
	if (tail + 1 == head || tail + 1 == size && head==0) {
		cout << "очередь полна\n";
		return;
	}
	queue[tail] = num;
	tail++;
	if (tail == size) tail = 0;
	
}

template <typename Q> int Queue<Q>::operator () (int)
{
	int s = 0;
	for (int i = head; i<tail && tail>head || tail<head; i++)
	{
		s++;
		if (i>size) i = 0;
	}
	return s;
}

template <typename Q> Q Queue<Q>::operator--()
{
	if (head == -1 || head == tail) {
		cout << "очередь пуста\n";
		return *(new Q);
	}
	int num = head;
	head++;
	if (head == size) head = 0;
	return queue[num];
}

template <typename Q>bool Queue<typename Q>::operator () ()
{
	bool q;
	if (head == tail)
	{
		//cout << "Очередь пустая\n";
		q = 1;
	}
	else
	{
		//cout << "Очередь не пуста\n";
		q = 0;
	}
	return q;
}

