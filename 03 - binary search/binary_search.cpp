#include <bits/stdc++.h>
using namespace std;

//pesquisar o elemento k em um array ordenado de n elementos
//Nos problemas com array se nao se sabe o que fazer, tente ordenar primeiro

//Complexidade O(log(n))
int	search(int a[], int n, int k)
{
	int	l = 0;
	int	r = n - 1;
	while (l <= r)
	{
		int	mid = (l + r) / 2;
		if (a[mid] == k)
			return (mid);
		else if (k < a[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
