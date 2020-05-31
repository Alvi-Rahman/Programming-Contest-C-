#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int p=1;
    while(scanf("%d",&n)==1){
        if(n<0){
            break;
        }
        int count=0,print=1;
        while(print<n){
            print*=2;
            ++count;
        }
        printf("Case %d: %d\n",p,count);
        ++p;
    }
    return 0;
}
