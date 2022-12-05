#include <iostream>
#include <time.h>
using namespace std;
template <typename T>
void selectionSort(T arr[], int size_arr) // ���������� ������� ������� selection. ������� �������� 2 ���������: size_arr - ���������� ��������� � ������� arr[] � arr[] - ������ ��������� ���� T.
{
	int i, j, minIndex;
	for (int i = 0; i < size_arr; i++)
	{
		bool flag = true;
		for (int j = 0; j < size_arr - (i + 1); j++)
		{
			//���� �� ������ ������� �� �������������� ��������
			for (i = 0; i < size_arr - 1; i++) 
			{
				int minIndex = i; // ����� �������� �������
				for (int j = i + 1; j < size_arr; j++) // ���� �� ���� ��������, ������� ������� �������� �������
				{ 
					if (arr[j] < arr[minIndex]) // ���� �������� ������� �������� ����� ������, ��� �������� �������� � minIndex, �� ���������� ���������� minIndex � ����� �������� ����������� ��������
					{
						minIndex = j;
					}
				}
				if (minIndex != i) // ���� minIndex ���������, �� �������� �������� ������������ � �������� ��������
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
	selectionSort(arr, size_arr); // ����� ��������� �������
	delete[] arr; // ������������ ���������� ������� ������
	return 0;
}