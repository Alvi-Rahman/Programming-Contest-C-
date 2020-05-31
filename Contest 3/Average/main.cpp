#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    double sum,avg;
    scanf("%d",&a);
    for(int x=0;x<a;++x){
        scanf("%d",&b);
        int arr[b];
        sum=0,avg=0,d=0;
        for(int y=0;y<b;++y){
            scanf("%d",&c);
            arr[y]=c;
            sum+=c;
        }
        sum/=b;
        for(int y=0;y<b;++y){
            if(arr[y]>sum){
                ++d;
            }
        }
        double k=d;
        avg=(k/b)*100;
        printf("%.3f%%\n",avg);
    }
    return 0;
}
