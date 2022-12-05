#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
void insertionSort(T arr[], int size_arr) // ���������� ������� ������� �������. ������� �������� 2 ���������: size_arr - ���������� ��������� � ������� arr[] � arr[] - ������ ��������� ���� T.
{
	int j, key;
	for (int i = 1; i < size_arr; i++)
	{
		bool flag = true;
		for (i = 1; i < size_arr; i++) // �������� ���������� �� ������� �������� (������� � �������� 0 ��� ������������)
		{
			key = arr[i];
			j = i - 1;
			while (j >= 0 && arr[j] > key) // ����������� ��������, ������� ������ ��������� �� ���� ������� ������ �������� ���������
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
	cout << "������ � ��������������� ����: ";
	for (int i = 0; i < size_arr; i++) {
		cout << arr[i] << " "; // ������� �������� �������
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int size_arr; // ���������� ����������� �������
	cout << "������� ���������� ��������� � �������:" << endl;
	cin >> size_arr;
	int* arr = new int[size_arr];
	srand(time(NULL)); // ������������� ���������� ��������� �����
	cout << "�������� ������: ";
	for (int i = 0; i < size_arr; i++)
	{
		arr[i] = rand() % 1000; // ������ � ������ ��������� ����� �� 0 �� 999
		cout << arr[i] << " "; // ����� ��������� �������
	}
	cout << endl;
	insertionSort(arr, size_arr); // ����� ��������� �������
	delete[] arr; // ������������ ���������� ������� ������
	return 0;
}