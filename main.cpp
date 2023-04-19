#include <iostream>
using namespace std;

//#define POINTER_BASICS

int main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;

	cout << a << endl;  //вывод переменно "а" на экран
	cout << &a << endl; //взятие адреса переменной "а" прямо при выводе
	cout << pa << endl; //вывод адреса переменной "а", хранящегося в указателе "ра"
	cout << *pa << endl; //разыименование указателя "ра" и вывод на экран значение по адресу

#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3, 5, 8, 13, 21};
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;

	for (int* p_arr = arr; *p_arr != 0xCCCCCCCC; p_arr++)
	{
		cout << *p_arr << "\t";
	}
	cout << endl;
}
