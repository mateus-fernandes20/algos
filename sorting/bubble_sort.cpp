#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "digite a quantidade de elementos da lista: ";
	int n; cin >> n;
	int v[n];

	cout << "insira os elementos na lista:" << endl;
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

	cout << "Lista ordenada em ordem crescente: ";
	for(int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
