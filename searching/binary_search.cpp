#include <bits/stdc++.h>
#define SIZE 8
using namespace std;

int l, r, m;

int search(int a[], int num)
{
	l = 0;
	r = SIZE-1;
	while(l <= r)
	{
		m = (l + r)/2;
		cout << l << " " << r << endl;
		if(a[m] == num)
			return m;
		else
		{
			if(a[m] < num)
				l = m+1;
			else
				r = m-1;
		}
	}
	return -1;
}

int main()
{
	int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
	int num; cin >> num;

	int ans = search(a, num);

	if(ans != -1)
	{
		cout << "Elemento encontrado na posicao " << ans+1 << endl;
	}
	else
		cout << "Elemento nao encontrado" << endl;
	return 0;
}
