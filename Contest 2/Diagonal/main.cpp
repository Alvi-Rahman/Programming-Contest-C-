#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int x=0;x<n;++x){
        for(int y=0;y<n;++y){
            scanf("%d",&a[x][y]);
        }
    }
    int sum1=0,sum2=0,sum=0;
    for(int x=0;x<n;++x){
        sum1+=a[x][x];
    }
    for(int y=n-1,int x=0;y>=0;++x,--y){
        sum2+=a[x][y];
    }
    if(sum1>sum2){
        sum=sum1-sum2;
    }else{
        sum=sum2-sum1;
    }
    printf("%d\n",sum);
    return 0;
}
