#include <iostream>

using namespace std;
int main()
{
    int i,t,n;
    while(cin>>t){
        for(i=0;i<t;i++){
            cin>>n;
            int st = 0, sc = 0;
            if(n>=10){
                st = n - 10;
                sc = n - (n-10);
            }
            else{
                st = 0;
                sc = n;
            }
            cout<<st<<" "<<sc<<endl;
        }
    }
}

