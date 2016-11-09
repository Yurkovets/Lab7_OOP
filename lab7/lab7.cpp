// laba7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include"Queue.h"
#include"Animals.h"
#include"Template.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	Queue<int> queue1;
	cout << "Вставляем элементы" << endl;
	queue1 + 1;
	queue1 + 4;
	queue1 + 8;
	queue1 + 7;
	queue1 + 5;
	queue1 + 3;
	queue1.out();
	system("pause");

	Queue<double> queue2;
	cout << "Вставляем элементы" << endl;
	queue2 + 1.4;
	queue2 + 4.3;
	queue2 + 8.2;
	queue2 + 7.7;
	queue2 + 5.4;
	queue2 + 3.8;
	queue2.out();

	Queue<double> queue3 = thinning(queue2, 3);
	queue3.out();

	system("pause");
	
}

