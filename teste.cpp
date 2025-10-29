#include <bits/stdc++.h>

using namespace std;

int Case()
{
	int a = 3;
	return (a, a = 1, a++, a);
}

int main(void)
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	cout << Case();
}
