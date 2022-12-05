#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size_arr) // сортировка массива методом bubble. ‘ункци€ получает 2 параметра: size_arr - количество элементов в массиве arr[] и arr[] - массив элементов типа T.
 
{
	for (int i = 0; i < size_arr; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_arr - (i + 1); j++)
		{
			if (arr[j] > arr[j + 1]) //сравнение 2 элементов.если j больше j + 1, то мен€ем местами.если меньше, то пропускаем этап смены значений
			{
				flag = false;
				int b = arr[j]; // создаем дополнительную переменную, чтобы мен€ть значени€ €чеек arr[j] и arr[j + 1] местами.
				arr[j] = arr[j + 1]; //мен€ем местами
				arr[j + 1] = b; // значени€ элементов
			}
		}
		if (flag)
		{
			break;
		}
	}
	cout << "ћассив в отсортированном виде: ";
	for (int i = 0; i < size_arr; i++) {
		cout << arr[i] << " "; // выводим элементы массива
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int size_arr; // объ€вление размерности массива
	cout << "¬ведите количество элементов в массиве:" << endl;
	cin >> size_arr;
	int* arr = new int[size_arr];
	srand(time(NULL)); // инициализаци€ генератора случайных чисел
	cout << "»сходный массив: ";
	for (int i = 0; i < size_arr; i++) 
	{
		arr[i] = rand() % 1000; // запись в массив случайных чисел от 0 до 999
		cout << arr[i] << " "; // вывод исходного массива
	}
	cout << endl;
	bubbleSort(arr, size_arr); // вызов шаблонной функции
	delete[] arr; // освобождение выделенной массиву пам€ти
	return 0;
}