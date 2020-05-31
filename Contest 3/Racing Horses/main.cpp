#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int x=0;x<a;++x){
        scanf("%d",&b);
        long long int arr[b];
        for(int y=0;y<b;++y){
            scanf("%lld",&arr[y]);
        }
        sort(arr,arr+b);
        int temp;
        int m=arr[1]-arr[0];
        for(int y=1;y<b-1;++y){
            temp=arr[y+1]-arr[y];
            m=min(m,temp);
        }
        printf("%d\n",m);
    }
    return 0;
}
