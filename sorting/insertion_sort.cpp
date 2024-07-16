#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 8;
	int a[n] = {6, 5, 3, 1, 8, 7, 2, 4};

	for(int i = 0; i < n; i++)
	{
		int j = i;
		while(j > 0)
		{
			if(a[j-1] < a[j])
				break;
			swap(a[j], a[j-1]);
			j--;
		}
		for(auto array:a)
		{
			cout << array << " ";
		}
		cout << endl;
	}

	return 0;
}
