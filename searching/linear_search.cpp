#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int v[n];
	int pos;
	bool found = false;

	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int e; cin >> e;

	for(int i = 0; i < n; i++)
	{
		if(e == v[i])
		{
			pos = i+1;
			found = true;
			break;
		}
	}

	if(found)
		cout << "elemento encontrado na posicao " << pos << endl;
	else
		cout << "elemento nao encontrado" << endl;
	return 0;
}
