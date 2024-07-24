#include<bits/stdc++.h>
using namespace std;
int SIZE = 8;

void selection_sort(int a[])
{
	int cont = 0, minimo, atual;
	for(int i = 0; i < SIZE; i++)
	{
		minimo = i;
		for(int j = i; j < SIZE; j++)
		{
			atual = j;
			if(a[minimo] > a[atual])
			{
				minimo = j;
			}
		}
		swap(a[minimo], a[cont]);
		cont++;
	}
}

int main()
{
	int a[SIZE] = {6, 5, 3, 1, 8, 7, 2, 4};
	selection_sort(a);
	for(int i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
