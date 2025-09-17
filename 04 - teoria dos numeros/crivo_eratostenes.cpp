#include <bits/stdc++.h>

using namespace std;

//Complexidade de tempo: O(N log 𝑁)
vector<bool>prime_naive(int n)
{
	vector<bool> isPrime(n + 1, true);
	isPrime[1] = false;
	for (int i = 2; i <= n; i ++)
		if (isPrime[i])
			for(int j = 2 * i; j <= n; j += i)
				isPrime[j] = false;
	return (isPrime);
}


//Complexidade de tempo: O(N log(log 𝑁))
vector<bool>prime_smart(int n)
{
	vector<bool> isPrime(n + 1, true);
	isPrime[1] = false;
	for (int i = 2; i * i <= n; i ++)
		if (isPrime[i])
			for(int j = i * i; j <= n; j += i)
				isPrime[j] = false;
	return (isPrime);
}

int	main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i = 0;
	for (bool p:prime_smart(30))
	{
		cout << i ++ << " -> ";
		if (p)
			cout << "sim";
		else
			cout << "nao";
		cout << "\n";
	}

	return (0);
}
