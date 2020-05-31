#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    int sum=0,m=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&a);
        if(a>m){
            m=a;
        }
        sum+=a;
    }
    printf("%d\n",n*m-sum);
    return 0;
}
