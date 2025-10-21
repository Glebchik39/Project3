#include "MyArray.h"



void main()
{
	srand(unsigned(time(0)));
	DynamicArray<int> obj1;
	//obj1.Input();
	//obj1.Output();

	DynamicArray<char> obj2;
	//obj2.Output();

	//DynamicArray<double>obj3;
	//obj3.Output();


	cout << obj1.GetIndex(1) << endl; //вернуть 
	cout << obj1 << endl;
	cout << obj2 << endl;
	system("pause");
}