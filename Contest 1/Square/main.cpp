#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    double r;
    double cir,sq;

    for(int x=1;x<=n;++x){
        scanf("%lf",&r);
        cir=3.1415926536*r*r;
        sq=4*r*r;
        double sum=sq-cir;

        printf("Case %d: %.2f\n",x,sum);
    }

    return 0;
}
