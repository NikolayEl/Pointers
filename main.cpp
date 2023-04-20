#include <iostream>
using namespace std;

void CountingEvenOdd(int arr[], int& even_counters, int& odd_counters, const int n);
void SplitEvenOdd(int arr[], int arr_even[], int arr_odd[], const int n);
void Print(int arr[], const int n);
int main()
{
	setlocale(LC_ALL, "");

	int n = 10;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 15;
	}
	Print(arr, n);

	int even_counters;
	int odd_counters;
	CountingEvenOdd(arr, even_counters, odd_counters, n); //заполняем счетчик четных и нечетных чисел в массиве
	cout << "Even = " << even_counters << "    " << "Odd = " << odd_counters << endl << endl; //проверка заполененности четных и нечетных чисел

	int* arr_even = new int[even_counters];  //создаем динамические массивы
	int* arr_odd = new int[odd_counters];

	SplitEvenOdd(arr, arr_even, arr_odd, n); //раскладываем по сответствующим массивам
	cout << "Even array: " << endl;
	Print(arr_even, even_counters);
	cout << endl << "Odd array: " << endl;
	Print(arr_odd, odd_counters);

	delete[] arr, arr_even, arr_odd;
}

void CountingEvenOdd(int arr[], int& even_counters, int& odd_counters, const int n)
{
	even_counters = 0; odd_counters = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_counters++;
		}
		else
		{
			odd_counters++;
		}
	}
}

void SplitEvenOdd(int arr[], int arr_even[], int arr_odd[], const int n)
{
	int count_even = 0, count_odd = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr_even[count_even] = arr[i];
			count_even++;
		}
		else
		{
			arr_odd[count_odd] = arr[i];
			count_odd++;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}