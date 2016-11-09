#pragma once

template <typename Q> class Queue
{
public:
	static const int size = 20;//������������ ������ ������� 
	Q *queue;// ��������� �� ������� 
	int head, tail;// ������ �����

	Queue();
	void operator +(Q num);// ���������� �������� 
	void out();//����� ���������� 
	int operator() (int); // ������ ������� 
	Q operator-- ();// ������� �������
	bool operator() ();// �������� ������ �� ������� 
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
		cout << "������� �����\n";
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
		cout << "������� �����\n";
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
		//cout << "������� ������\n";
		q = 1;
	}
	else
	{
		//cout << "������� �� �����\n";
		q = 0;
	}
	return q;
}

