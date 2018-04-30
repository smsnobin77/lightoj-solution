#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    char d[100];
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d",&n);
        getchar();
        printf("Case %d:\n",i);
        int sum = 0,money;
        while(n--){
            scanf("%s",d);
            if( strcmp(d,"donate")== 0){
                scanf("%d",&money);
                sum += money;
            }
            else printf("%d\n",sum);

        }
    }
    return 0;

}
