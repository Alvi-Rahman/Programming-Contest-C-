#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,take;
    scanf("%d",&n);
    for(int x=0;x<n;++x){
        int pos=0,odd=0,even=0;
        scanf("%d",&m);
        scanf("%d",&take);
        for(int y=1;y<=take;++y){
            pos+=y;
        }
        for(int y=1,z=1;z<=take;++y){
            if(y%2!=0){
                odd+=y;
                ++z;
            }
        }
        for(int y=1,z=1;z<=take;++y){
            if(y%2==0){
                even+=y;
                ++z;
            }
        }
        printf("%d %d %d %d\n",m,pos,odd,even);
    }
    return 0;
}
