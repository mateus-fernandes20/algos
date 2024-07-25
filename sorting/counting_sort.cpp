#include<bits/stdc++.h>
using namespace std;

int SIZE = 9;
int f[7] = {0};

void counting_sort(int a[], int s[])
{
	for(int i = 0; i < SIZE; i++)
	{
		f[a[i]]++;
	}

	for(int i = 1; i <= 7; i++)
	{
		f[i] = f[i] + f[i-1];
	}

	for(int i = SIZE-1; i >= 0; i--)
	{
		s[f[a[i]]-- -1] = a[i];
	}
}

int main()
{
	int a[SIZE] = {1, 3, 5, 1, 7, 4, 1, 3, 5};
	int s[SIZE];
	counting_sort(a, s);

	for(int i = 0; i < SIZE; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
	return 0;
}
