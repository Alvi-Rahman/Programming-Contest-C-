#include <bits/stdc++.h>

using namespace std;

int main()
{
    using namespace std;
    int a,b=0;
    scanf("%d",&a);

    for(int x=1;x<=a;++x){
        scanf("%d",&b);
        int c=0;
        int i;
        for(int y=0;y<b;++y){

            scanf("%d",&i);
            c= max(c,i);
        }

        printf("Case %d: %d\n",a,c);
    }
}
