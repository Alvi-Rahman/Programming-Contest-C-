#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int x=0;x<a;++x){
        scanf("%d",&b);
        int sum=0;
        for(int y=0;y<b;++y){
            scanf("%d",&c);
            if(c==1&&sum==0){

            }else if(c==0){
                sum+=1100;
            }else if(c==1&&sum>0){
                sum+=100;              // 0 1 1 1 1
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
