#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c,temp,a,b;
    while(scanf("%d %d",&n,&m)==2){
        b=0;
        for(int x=min(n,m);x<=max(n,m);++x){

            temp=x;
            c=1;
            while(temp!=1){
                if(temp%2==0){
                    temp/=2;
                }else{
                    temp=3*temp+1;
                }
                ++c;
            }
            b=max(b,c);

        }
        printf("%d %d %d\n",n,m,b);
    }

    return 0;
}
