#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    for(int x=1;x<=n;++x){
        for(int y=n-x;y>0;--y){
            printf(" ");
        }
        for(int y=1;y<=x;++y){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
