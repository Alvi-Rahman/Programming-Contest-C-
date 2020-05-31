#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)==2){
      int sum=max(a,b)-min(a,b);

      printf("%lld\n",sum);

    }

    return 0;
}
