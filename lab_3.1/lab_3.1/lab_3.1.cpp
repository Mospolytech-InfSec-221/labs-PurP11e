﻿#include <iostream>
using namespace std;

void Task1(int* arrt, int sizet) {
	int zamena = 0;
	for (int i = 0; i < sizet; i++) {
		for (int j = i + 1; j < sizet; j++) {
			if (arrt[i] > arrt[j]) {
				zamena = arrt[i];
				arrt[i] = arrt[j];
				arrt[j] = zamena;
			}

		}
	}
}

void Task2(char* arr3, int sizet)
{
	int alp[26] = { 0 };
	const int alb = 26;
	int c[alb] = { 0 };
	for (int i = 0; i < sizet; i++) {
		alp[int(arr3[i]) - 'a']++;
	}
	int j = 0;
	for (int i = 0; i < 26; i++) {
		while (alp[i] != 0) {
			arr3[j] = char(i + 'a');
			j++;
			alp[i]--;
		}

	}
}

void mergesort(int* a, int l, int r) {
	int middle, startl, startr, i;
	int mas[1000] = { 0 };
	middle = (l + r) / 2; 
	startl = l;
	startr = middle + 1;
	cout << endl;
	for (i = l; i < r + 1; i++) {
		if ((startl < middle) && (startr < r + 1)) {
			if (a[startl] < a[startr]) {
				mas[i] = a[startl];
				startl++;
			}
			else {
				mas[i] = a[startr];
				startr++;
			}
		}
		else {
			if (startl < middle + 1) {
				mas[i] = a[startl];
				startl++;
			}
			else {
				mas[i] = a[startr];
				startr++;
			}
		}
	}
	for (i = l; i < r + 1; i++) a[i] = mas[i];
}

void Task3(int* a, int l, int r) {
	if (r - l < 1) {
		Task3(a, l, (l + r) / 2);
		Task3(a, (l + r) / 2 + 1, r);
		mergesort(a, l, r); 
	}
	else {
		if (l == r) return;
		else {
			if (a[r] < a[l]) swap(a[r], a[l]);
		}
	}
}

int main() {
	int choice = 0, size = 0;

	int arr1[1000];
	char arr2[1000];
	while (true) {
		cout << "What task do you want to do? \n1.Task \n2.Task \n3.Task \n4.Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
		{
			cout << "input size of your array ";
			cin >> size;
			cout << "Print array: ";
			for (int i = 0; i < size; i++) {
				cin >> arr1[i];
			}
			Task1(arr1, size);
			for (int i = 0; i < size; i++) {
				cout << arr1[i] << " ";
			}
			cout << endl;
			break;
		}
		case (2):
		{
			cout << "input size of your array ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				cin >> arr2[i];
			}
			cout << endl;
			Task2(arr2, size);
			for (int i = 0; i < size; i++) {
				cout << arr2[i] << " ";
			}
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "input size of your array ";
			cin >> size;
			cout << "Print array: ";
			for (int i = 0; i < size; i++) {
				cin >> arr1[i];
			}

			Task3(arr1, 0, size - 1);
			for (int i = 0; i < size; i++) {
				cout << arr1[i];
			}
			cout << endl;
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}
