/*

A - Sum of Two Values
You are given an array of nn integers, and your task is to find two values (at distinct positions) whose sum is xx.
Input

The first input line has two integers nn and xx: the array size and the target sum.

The second line has nn integers a1,a2,…,ana1​,a2​,…,an​: the array values.
Output

Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.
Constraints

    1≤n≤2⋅1051≤n≤2⋅105
    1≤x,ai≤1091≤x,ai​≤109

Example
input					output
4 8						2 4
2 7 5 1

*/

#include <bits/stdc++.h>

using namespace std;

pair<long long, long long> bsv(vector<long long> vec, long long x)
{
	pair<long long, long long> p;
	vector<long long> clone;

	clone = vec;
	sort(clone.begin(), clone.end());
	long long l = 0;
	long long r = clone.size() - 1;
	while (l < r)
	{
		if (clone[l] + clone[r] == x)
		{
			p.first = clone[l];
			p.second = clone[r];
			return p;
		}
		else if (clone[l] + clone[r] < x)
			l++;
		else
			r--;
	}
	cout << "IMPOSSIBLE";
	exit(0);
}

int	bsp(vector<long long> vec, long long n, long long index)
{
	for (long long i = 0; i < vec.size(); i ++)
	{
		if (vec[i] == n && (i != index))
			return (i);
	}
	cout << "IMPOSSIBLE";
	exit(0);
}

int	main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long	n, x, a;
	vector<long long> vec;
	pair<long long, long long> p;
	cin >> n;
	cin >> x;
	while (n--){
		cin >> a;
		vec.push_back(a);
	}
	p = bsv(vec, x);
	a = bsp(vec, p.first, -1);
	n = bsp(vec, p.second, a);
	cout << a + 1 << " " << n + 1;
	return (0);
}
