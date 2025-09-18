#include <bits/stdc++.h>
using namespace std;

//complexidade O(2^n)*n
void	build(vector<int> used, int i, int n)
{
	if (i > n) //Caso base
	{
		for (int p:used)
			cout << p;
		cout << "\n";
	}
	else //caso recursivo
	{
		for (int j = 0; j < 2; j++)
		{
			used.push_back(j);
			build(used, i + 1, n);
			used.pop_back();
		}
	}
}

//outro algoritmo
void mask(int n)
{
	for (int i=0; i<(1<<n); i++)
	{
		for(int j=n-1; j>=0; j--)
		{
			if(i&(1<<j)) cout << 1;
			else cout << 0;
		}
		cout<<"\n";
	}

}

void	perm(int n)
{
	build({}, 1, n);
}

int	main(void)
{
	//Desativa a sincronização com o stdio -> ajuda as entradas e saidas
	//stream serem mais rapidas
	ios_base::sync_with_stdio(false);
	//Desprende a espera do cin pelo cout, ajuda as leituras a serem mais
	//rapidas
	cin.tie(NULL);
	perm(5);
	cout<<"\nOther\n";
	mask(5);

}
