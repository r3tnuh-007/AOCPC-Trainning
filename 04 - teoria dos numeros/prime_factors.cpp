#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>>	prime_factors(int n)
{
	vector<pair<int, int>>	factor;

	int na = n;
	for (int i = 2; i * i <= n; i ++)
	{

		if (na % i == 0)
		{
			int count = 0;
			while (na % i == 0) count++, na /= i;
			factor.push_back({i, count});
		}
	}
	return (factor);
}

int	main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	for (pair<int, int> t : prime_factors(12))
		cout << t.first * t.second <<"\n";
	return (0);
}
