#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,mid,mean=0;
    scanf("%d",&n);
    int arr[n];
    mid=n/2;
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
        mean+=arr[i];
    }
    mean/=mid;
    bool arr2[n];
    memset(arr2,false,sizeof(arr2));
    for(int i=0;i<n;++i){
        for(int j=1;j<n;++j){
            if(arr[i]+arr[j]==mean&&arr2[i]==false&&arr2[j]==false&&i!=j){
                printf("%d %d\n",i+1,j+1);
                arr2[i]=true;
                arr2[j]=true;
                break;
            }
        }
    }

    return 0;
}
