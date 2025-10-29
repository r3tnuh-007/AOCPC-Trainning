/*
Problem Statement

You are given three sequences A=(A1,…,AN)A=(A1​,…,AN​), B=(B1,…,BM)B=(B1​,…,BM​), and C=(C1,…,CL)C=(C1​,…,CL​).

Additionally, a sequence X=(X1,…,XQ)X=(X1​,…,XQ​) is given. For each i=1,…,Qi=1,…,Q, solve the following problem:

Problem: Is it possible to select one element from each of AA, BB, and CC so that their sum is XiXi​?
Constraints

    1≤N,M,L≤1001≤N,M,L≤100
    0≤Ai,Bi,Ci≤1080≤Ai​,Bi​,Ci​≤108
    1≤Q≤2×1051≤Q≤2×105
    0≤Xi≤3×1080≤Xi​≤3×108
    All input values are integers.

Input

The input is given from Standard Input in the following format:
N
A1 A2 … AN
M
B1 B2 … BM
L
C1 C2 … CL
Q
X1 X2 … XQ

Output

Print QQ lines. The ii-th line should contain Yes if it is possible to select one element
from each of AA, BB, and CC so that their sum is XiXi​, and No otherwise.

Input
3
1 2 3
2
2 4
6
1 2 4 8 16 32
4
1 5 10 50

Output
No
Yes
Yes
No

*/

#include <bits/stdc++.h>

using namespace std;

void	bsv(vector<long long> vec, long long x)
{
	vector<long long> clone;

	clone = vec;
	sort(clone.begin(), clone.end());
	long long l = 0;
	long long r = clone.size() - 1;
	while (l < r)
	{
		if (clone[l] + clone[r] == x)
		{
			return ;
		}
		else if (clone[l] + clone[r] < x)
			l++;
		else
			r--;
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
	cin >> n;
	cin >> x;
	while (n--){
		cin >> a;
		vec.push_back(a);
	}
	return (0);
}
