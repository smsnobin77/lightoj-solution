#include <bits/stdc++.h>

using namespace std;

int a[100005];
int tr[400005];

int build(int l, int r, int node)
{

	int x;
	int y;

	if(l == r) {
		tr[node] = a[l];
		return a[l];
	}

	x = build(l, (l + r) / 2, node * 2);
	y = build((l + r) / 2 + 1, r, node * 2 + 1);

	tr[node] = min(x, y);

	return tr[node];
}

int query(int l, int r, int e, int f, int node)
{
	int x;
	int y;

	if(e <= l and f >= r) {
		return tr[node];
	}

	if(e > r or f < l) {
		return INT_MAX;
	}

	x = query(l, (l+r)/2, e, f, node * 2);
	y = query((l+r)/ 2 + 1, r, e, f, node * 2 + 1);

	return min(x, y);
}


int main()
{
	int tc,n,qs,x,y;

	scanf("%d", &tc);

	for (int j = 1; j <= tc; j++) {

		scanf("%d", &n);
		scanf("%d", &qs);

		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}

		build(1, n, 1);

		printf("Case %d:\n", j);

		for(int i = 0; i < qs; i++) {
			scanf("%d", &x);
			scanf("%d", &y);

			printf("%d\n", query(1, n, x, y, 1));
		}
	}


}
