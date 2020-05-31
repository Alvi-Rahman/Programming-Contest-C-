#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld",&n);
    bool b=true;
    int count=0;
    long long sum=0;
    long long x;
    while(true){
    ++count;
    x=n;
    long long m=0;
    int mm=0;
    while(x>0){
        mm=x%10;
        x=x/10;
        m=m*10+mm;
    }
    sum=m+n;

    int s=sum;
    int c=0;
    while(s>0){
        s/=10;
        ++c;
    }
    s=sum;
    int a[c];
    for(int i=0;i<c;++i){         //
        a[i]=s/10;
        s/=10;
    }
    int nn=0;
    for(int i=0,j=c-1;i<j;++i,--j){
        if(a[i]!=a[j]){
            ++n;
        }
    }
    if(n==0){
        break;
    }
    n=sum;


}
printf("%d %lld\n",count,sum);
    return 0;
}
