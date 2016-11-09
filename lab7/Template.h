#include "stdafx.h"
#include <iostream>
#include "Queue.h"
using namespace std;

template <typename Q> Queue<Q> thinning(Queue<Q> &q, int howMany)
{
	Queue<Q> q1, q2, q3;
	Q buf; //буферная переменная для извлечения элементов очередей по одному
	while (!q())
	{
		buf = q--;
		q1 + buf;
		q2 + buf;
	}
	while (!q1())
	{
		q + (q1--);
	}
	int num=1;
	while (!q2())
	{
		buf = q2--;
		if (num%howMany != 0) q3 + buf;
		num++;
	}
	return q3;
}

