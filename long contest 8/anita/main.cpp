#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int x=1;x<=n;++x){
        scanf("%d %d",&a,&b);
        int arr[a];
        int sum=0;
        for(int i=0;i<a;++i){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+a);
        for(int i=0;i<b;++i){
            if(i<0){
                a[i]=0;
            }else if(i>0){
                break;
            }
        }
        for(int i=0;i<a;++i){
            sum+=arr[i];
        }
        printf("Case %d: %d\n",x,sum);
    }

    return 0;
}
