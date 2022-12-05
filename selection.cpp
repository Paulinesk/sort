#include <iostream>
#include <time.h>
using namespace std;
template <typename T>
void selectionSort(T arr[], int size_arr) // сортировка массива методом selection. ‘ункци€ получает 2 параметра: size_arr - количество элементов в массиве arr[] и arr[] - массив элементов типа T.
{
	int i, j, minIndex;
	for (int i = 0; i < size_arr; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_arr - (i + 1); j++)
		{
			//цикл от начала массива до предпоследнего элемента
			for (i = 0; i < size_arr - 1; i++) 
			{
				int minIndex = i; // копи€ текущего индекса
				for (int j = i + 1; j < size_arr; j++) // цикл по всем индексам, которые следуют текущему индексу
				{ 
					if (arr[j] < arr[minIndex]) // если значение индекса текущего цикла меньше, чем значение элемента в minIndex, то происходит обновление minIndex с новым индексом наименьшего значени€
					{
						minIndex = j;
					}
				}
				if (minIndex != i) // если minIndex обновилс€, то мен€ютс€ значени€ минимального и текущего индексов
				{
					int temp = arr[i];
					arr[i] = arr[minIndex];
					arr[minIndex] = temp;
				}
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
	selectionSort(arr, size_arr); // вызов шаблонной функции
	delete[] arr; // освобождение выделенной массиву пам€ти
	return 0;
}