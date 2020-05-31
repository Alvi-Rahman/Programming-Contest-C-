#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,ans=0,count;
    scanf("%d %d",&a,&b);
    count=a;
    for(int x=0;x<b;++x){
        scanf("%d",&c);
        count-=c;
        if(x!=b-1&&count<5){
            ans+=a-count;
            count=a;
        }
    }
    printf("%d\n",ans);
    return 0;
}
