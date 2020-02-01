#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, char> ic;
typedef pair<ic, ii> icii;
typedef vector<icii> vicii;

bool sortLens(icii a, icii b) {
	return a.first.first > b.first.first;
}

int main()
{
	vicii logs(3);
	int x1, y1, x2, y2, x3, y3, a1, a2, a3, n, m1, m2, m3;
	int i, j;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	logs[0] = icii(ic(max(x1, y1), 'A'), ii(max(x1, y1), min(x1, y1)));
	logs[1] = icii(ic(max(x2, y2), 'B'), ii(max(x2, y2), min(x2, y2)));
	logs[2] = icii(ic(max(x3, y3), 'C'), ii(max(x3, y3), min(x3, y3)));
	sort(logs.begin(), logs.end(), sortLens);
	a1 = x1 * y1;
	a2 = x2 * y2;
	a3 = x3 * y3;
	m1 = max(x1, y1);
	m2 = max(x2, y2);
	m3 = max(x3, y3);
	n = max(max(m1, m2), m3);
	if (a1 + a2 + a3 == n * n) {
		printf("%d\n", n);
		for (i = 0; i < logs[0].second.second; i++) {
			for (j = 0; j < logs[0].second.first; j++) {
				printf("%c", logs[0].first.second);
			}
			printf("\n");
		}
		if (logs[1].first.first == n) {
			for (i = 0; i < n - logs[0].second.second; i++) {
				for (j = 0; j < logs[1].second.first; j++) {
					if (i < logs[1].second.second)
						printf("%c", logs[1].first.second);
					else
						printf("%c", logs[2].first.second);
				}
				printf("\n");
			}
		} else {
			if (logs[1].second.first != logs[2].second.first)
				swap(logs[1].second.first, logs[1].second.second);
			for (i = 0; i < logs[1].second.first; i++) {
				for (j = 0; j < n; j++) {
					if (j < logs[1].second.second)
						printf("%c", logs[1].first.second);
					else
						printf("%c", logs[2].first.second);
				}
				printf("\n");
			}
		}
	} else
		printf("-1\n");
	return 0;
}
