#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int v[n];

	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}


	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(v[j] > v[i])
				swap(v[j], v[i]);
		}
	}

	for(int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
