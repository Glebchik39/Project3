#include<iostream>
#include<time.h>
using namespace std;

template<class T >
class DynamicArray
{
	T* mas = nullptr;
	int size;
public:
	DynamicArray();
	void Output();
	~DynamicArray();
	T operator[](int index);
	int GetSize()const
	{
		return size;
	}
	T* GetPtr()const
	{
		return mas;
	}
	void SetSize(int s)
	{
		size = s;
	}
	void Input();
	void GetIndex(int number)
	
};
template<class T>DynamicArray<T>::DynamicArray()
{
	size = 10;
	mas = new T[10];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 100 * 1.2;
	}
}
template<class T>void DynamicArray<T>::Output()
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << endl << endl;
}
template<class T>DynamicArray<T>::~DynamicArray()
{

	delete[] mas;

}
template<class T> T DynamicArray<T>::operator[](int index)
{
	return mas[index];
}

template<class T>
void DynamicArray<T>::Input()
{
	for (size_t i = 0; i < size; i++)
	{
		cin >> mas[i];
	}
	cout << endl;
}

template<class T>
inline void DynamicArray<T>::GetIndex(int number)
{
	for (size_t i = 0; i < size; i++)
	{
		number = i;
		cout << mas[number];
	}
	return mas;
}

template<class T>
 ostream& operator<<(ostream& os, DynamicArray<T>& obj)
{
	for (size_t i = 0; i < obj.GetSize(); i++)
	{
		cout << obj.GetPtr()[i] << "\t";
	}
	return os;
}
