#include <bits/stdc++.h>

using namespace std;

//Complexidade de Tempo: O(logb)
int	b_pow(int a, int b)
{
	if (b == 0) return (1);
	int c = b_pow(a, b/2);
	c *= c;
	if (b % 2 == 1)
		c *= a;
	return (c);
}
