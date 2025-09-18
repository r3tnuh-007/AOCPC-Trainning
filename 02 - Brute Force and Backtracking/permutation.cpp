#include <bits/stdc++.h>
using namespace std;

//Complexidade O(n³n!)
void	build(vector<int> used, int i, int n)
{
	if (i > n) //Caso base
	{
		for (int p:used)
			cout << p << " ";
		cout << "\n";
	}
	else //caso recursivo
	{
		for (int j = 1; j <= n; j++)
		{
			bool not_used = true;
			for (int p:used)
				if (p == j)
					not_used = false;
			if (not_used)
			{
				used.push_back(j);
				build(used, i + 1, n);
				used.pop_back();
			}
		}
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

	//gerar permutacoes usando a funcao next_permutation
	vector<int> v;
	cout << "\nNext perm\n";
	for (int i =1; i<=5; i++)
		v.push_back(i);
	do
	{
		for (int p:v)
			cout << p << " ";
		cout << "\n";
	} while (next_permutation(v.begin(), v.end()));

}
