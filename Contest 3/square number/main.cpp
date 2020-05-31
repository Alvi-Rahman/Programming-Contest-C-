#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)==2&&a){
        c=0;
        for(int x=a;x<=b;++x){
            double integral;
            if(modf(sqrt(x), &integral) == 0.0){
                ++c;
            }
        }

            printf("%d\n",c);
    }
    return 0;
}
