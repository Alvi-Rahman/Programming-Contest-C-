#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int x=0;x<n;++x){
        scanf("%d %d",&a,&b);
        int count=0;
        int arr[a];
        for(int i=0;i<a;++i){
            scanf("%d",&arr[i]);
        }
        for(int y=0;y<a;++y){
            count=0;
            if(arr[y]==0){
                ++count;
                for(int z=y+1;z<a;++z){
                    if(arr[z]==0){
                        ++count;
                    }else{
                        break;
                    }
                }
                if(count==b){
                    break;
                }
            }
        }
        if(count==b){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}
