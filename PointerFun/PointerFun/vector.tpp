#include "vector.h"

template <typename T>
A_Vector <T>::A_Vector()
{
	av = NULL;
	iterator = 0;
}

template <typename T>
void A_Vector <T>::remove()
{

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
	//av = new T(iterator + 1);
	//av[iterator] = data;
	//iterator++;
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