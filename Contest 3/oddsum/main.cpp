#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,d,sum,count=1;
    while(scanf("%d",&n)==1){
        scanf("%d %d",&a,&b);
            if(min(a,b)%2==0){
                d=min(a,b)+1;
            }else{
                d=min(a,b);
            }
            for(int x=d;x<=max(a,b);x+=2){
                sum+=x;
            }
            printf("Case %d: %d\n",count,sum);
            ++count;
    }

    return 0;
}
