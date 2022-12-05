#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
void insertionSort(T arr[], int size_arr) // сортировка массива методом вставки. Функция получает 2 параметра: size_arr - количество элементов в массиве arr[] и arr[] - массив элементов типа T.
{
	int j, key;
	for (int i = 1; i < size_arr; i++)
	{
		bool flag = true;
		for (i = 1; i < size_arr; i++) // начинаем сортировку со второго элемента (элемент с индексом 0 уже отсортирован)
		{
			key = arr[i];
			j = i - 1;
			while (j >= 0 && arr[j] > key) // переместить элементы, которые больше ключевого на одну позицию вперед текущего положения
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
		if (flag)
		{
			break;
		}
	}
	cout << "Массив в отсортированном виде: ";
	for (int i = 0; i < size_arr; i++) {
		cout << arr[i] << " "; // выводим элементы массива
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int size_arr; // объявление размерности массива
	cout << "Введите количество элементов в массиве:" << endl;
	cin >> size_arr;
	int* arr = new int[size_arr];
	srand(time(NULL)); // инициализация генератора случайных чисел
	cout << "Исходный массив: ";
	for (int i = 0; i < size_arr; i++)
	{
		arr[i] = rand() % 1000; // запись в массив случайных чисел от 0 до 999
		cout << arr[i] << " "; // вывод исходного массива
	}
	cout << endl;
	insertionSort(arr, size_arr); // вызов шаблонной функции
	delete[] arr; // освобождение выделенной массиву памяти
	return 0;
}