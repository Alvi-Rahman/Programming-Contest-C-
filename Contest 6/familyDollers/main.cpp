#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,money;
    scanf("%d",&n);
    for(int x=0;x<n;++x){
        double work=0;
        scanf("%d %d %d",&a,&b,&money);
        work=(a+b)/3.0;
        a-=work;
        b-=work;
        work=a+b;
        money=(money/work)*a;
        printf("%d\n",money);
    }
    return 0;
}
