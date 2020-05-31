#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int a=x+y+z;
    int b=x+(y*z);
    int b1=(x+y)*z;
    int c=(x*y)+z;
    int c1=x*(y+z);
    int d=x*y*z;

    int m=max(a,b);
    int n=max(m,b1);
    int o=max(n,c);
    int p=max(o,c1);
    int q=max(p,d);


    printf("%d\n",q);

    return 0;
}
