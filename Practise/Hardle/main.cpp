#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int arr[n];
    sort(arr,arr+n);
    if(arr[n-1]>m){
        printf("%lld\n",arr[n-1]-m);
    }else{
        printf("0\n");
    }
    return 0;
}
