#include<bits.stdc++.h>

using namespace std;

int main()
{
    int a,b,g,l;
    scanf("%d",&a);
    for(x=0;x<a;++x){
        scanf("%d %d",&g,&l);
        if(l%g==0){
            printf("%d %d\n",g,l);
        }
        else{
            printf("-1\n");
        }
    }
return 0;
}
