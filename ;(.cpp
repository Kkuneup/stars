#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int a;
bool arr[6570][6570] = {};

void point(int N, int p1, int p2)
{
	int cnt = 0, check = N / 3;

	for (int i = p1; i < p1 + N; i++)
		for (int j = p2; j < p2 + N; j++)
			if (i / check != 1 || j / check != 1)
				arr[i][j] = 1;
			else
				arr[i][j] = 0;
}

void f(int N)
{
	int m = 3;
	//if (N / 3 == 0)
	//	return;
	//f(N / 3);
	for (int i = 0; i < a; i += m)
		for (int j = 0; j < a; j += m)
			point(m, i, j);
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	f(a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (arr[i][j])
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}

}
