#include <bits/stdc++.h>
using namespace std;

int SIZE = 8;
int tamanho = SIZE;

void heap_max(int a[], int i)
{
	int l, r, largest;
	l = 2*i + 1;
	r = 2*i + 2;

	if((l < SIZE) and (a[l] > a[i]))
		largest = l;
	else
		largest = i;
	if((r < SIZE) and (a[r] > a[largest]))
		largest = r;
	if(largest != i)
	{
		swap(a[i], a[largest]);
		heap_max(a, largest);
	}
	return;	
}

void heapify(int a[])
{
	for(int i = floor(SIZE/2); i >= 0; i--)
	{
		heap_max(a, i);
	}	
}

void heap_sort(int a[])
{
	heapify(a);
	for(int i = SIZE-1; i >= 0; i--)
	{
		swap(a[0], a[i]);
		SIZE--;
		heap_max(a, 0);
	}
}

int main()
{
	int a[tamanho] = {6, 5, 3, 1, 8, 7, 2, 4};
	//heapify(a);
	heap_sort(a);

	for(int i = 0; i < tamanho; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
