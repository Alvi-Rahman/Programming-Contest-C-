#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    while(n>0){
        sum+=pow(2,n);
        --n;
    }
    printf("%lld\n",sum);
    return 0;
}
