#include <bits/stdc++.h>

using namespace std;

//Complexidade de Tempo: O(log(min(a,b)))
int	gcd(int a, int b)
{
	if (b == 0) return (a);
	return (gcd(b, a % b));
}

//Complexidade de Tempo: O(log(min(a,b)))
int	lcm(int a, int b)
{
	return (a * b / gcd(a, b));
}

int	main(void)
{
	//
}
