#include <bits/stdc++.h>
using namespace std;

//pesquisar o elemento k em um array ordenado de n elementos
//Nos problemas com array se nao se sabe o que fazer, tente ordenar primeiro

//Complexidade O(log(n))
double	search(int n)
{
	double	l = 0.;
	double	r = (double)n - 1;
	double	eps = 0.00001;
	double		mid;

	while (r - l >= eps)
	{
		mid = (l + r) / 2;
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			l = mid;
		else
			r = mid;
	}
	return (mid);
}

int	main(void)
{
	//Desativa a sincronização com o stdio -> ajuda as entradas e saidas
	//stream serem mais rapidas
	ios_base::sync_with_stdio(false);
	//Desprende a espera do cin pelo cout, ajuda as leituras a serem mais
	//rapidas
	cin.tie(NULL);
	cout << fixed << setprecision(3)<<search(7) << "\n";
	return (0);
}
