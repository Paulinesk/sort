#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size_arr) // ���������� ������� ������� bubble. ������� �������� 2 ���������: size_arr - ���������� ��������� � ������� arr[] � arr[] - ������ ��������� ���� T.
 
{
	for (int i = 0; i < size_arr; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_arr - (i + 1); j++)
		{
			if (arr[j] > arr[j + 1]) //��������� 2 ���������.���� j ������ j + 1, �� ������ �������.���� ������, �� ���������� ���� ����� ��������
			{
				flag = false;
				int b = arr[j]; // ������� �������������� ����������, ����� ������ �������� ����� arr[j] � arr[j + 1] �������.
				arr[j] = arr[j + 1]; //������ �������
				arr[j + 1] = b; // �������� ���������
			}
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
	bubbleSort(arr, size_arr); // ����� ��������� �������
	delete[] arr; // ������������ ���������� ������� ������
	return 0;
}