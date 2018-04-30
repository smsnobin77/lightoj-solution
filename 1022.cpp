#include <bits/stdc++.h>
#define PI  2 * acos (0.0)

using namespace std;
int main()
{
    int t;
    double r;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%lf",&r);
        double R = r * r;
        double res = 4 * R - PI * R;
        printf("Case %d: %0.2lf\n",i,res);
    }
    return 0;

}

