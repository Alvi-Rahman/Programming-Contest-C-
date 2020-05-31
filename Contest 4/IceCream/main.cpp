#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int x=0;x<a;++x){
        scanf("%d",&b);
        scanf("%d",&c);
        int arr[c];
        for(int y=0;y<c;++y){
            scanf("%d",&arr[y]);
        }
        int sum;
        int y,z;
        for(y=0;y<c;++y){
            for(z=1;z<c;++z){
                if(y==z){

                }else{
                    sum=arr[y]+arr[z];
                }
                if(sum==b){
                    break;
                }
            }
            if(sum==b){
                break;
            }
        }
        printf("%d %d\n",y+1,z+1);
    }
    return 0;
}
