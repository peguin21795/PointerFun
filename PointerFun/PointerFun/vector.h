#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class A_Vector
{
public:
	A_Vector();
	~A_Vector();
	void showContents();
	void remove(int);
	void add(T);
	T getData(int);
	int length();
private:
	int iterator;
	T* av;
};

template <typename T>
A_Vector <T>::A_Vector()
{
	av = NULL;
	iterator = 0;
}

template <typename T>
A_Vector <T>::~A_Vector()
{
	if (av != NULL)
	{ 
		delete[] av;
	}
}


template <typename T>
void A_Vector <T>::remove(int index)
{
	T* _cloneAv = new T[iterator];
	/* Everything before said index will remain at the same position in the vector */
	for (int i = 0; i < iterator - 1; i++)
	{
		if (i < index)
		{
			_cloneAv[i] = av[i];
		}
		else
		{
			_cloneAv[i] = av[i + 1];
		}
	}

	av = _cloneAv;
	iterator--;
}

template <typename T>
void A_Vector <T>::showContents()
{
	for (int i = 0; i < iterator; i++)
	{
		cout << "Index " << i << " holds " << av[i] << endl;
	}
}

template <typename T>
void A_Vector <T>::add(T data)
{
	T* _cloneAv = new T [iterator + 1];
	for (int i = 0; i < iterator; i++)
	{
		_cloneAv[i] = av[i];
	}
	_cloneAv[iterator] = data;
	if (av != NULL)
	{
		delete[] av;
	}
	av = _cloneAv;
	iterator++;
}

template <typename T>
T A_Vector <T>::getData(int index)
{
	return av[index];
}

template <typename T>
int A_Vector <T>::length()
{
	return iterator;
}

#endif