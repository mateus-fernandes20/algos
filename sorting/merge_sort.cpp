#include <bits/stdc++.h>
using namespace std;

const int SIZE = 7;

void merge(int a[], int l, int mid, int r)
{
	int temp[r-l+1];
	int i = l;
	int j = mid+1;
	int k = 0;

	while(i <= mid and j <= r)
	{
		if(a[i] < a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
		}
	}

	while(i <= mid)
	{
		temp[k++] = a[i++];
	}
	while(j <= r)
	{
		temp[k++] = a[j++];
	}

	for(i = l, k = 0; k<sizeof(temp)/sizeof(temp[0]); i++, k++)
	{
		a[i] = temp[k];
	}
}

void merge_sort(int a[], int l, int r)
{
	if(l == r)
	{
		//cout << a[l] << endl;
		return;
	}
	int mid = (l+r)/2;
	merge_sort(a, l, mid);
	merge_sort(a, mid+1, r);

	merge(a, l, mid, r);
}

int main()
{
    int a[SIZE] = {5, 7, 3, 1, 2, 4, 6};
    merge_sort(a, 0, (SIZE-1));

    for(int i = 0; i < SIZE; i++)
    {
    	cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
