#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        int book[n];
        int peter;
        for(int x=0;x<n;++x){
            scanf("%d",&book[x]);
        }
        scanf("%d",&peter);
        sort(book,book+n);
        int i=0,j=n-1;
        while(book[j/2]>=peter){
            j=j/2;
        }
        int a,b;
        int sum=0;
        while(i<j){
            sum=book[i]+book[j];
            if(sum==peter){
                a=book[j];
                b=book[i];
                ++i;
            }else if(sum>peter){
                --j;
            }else{
                ++i;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",b,a);
    }
    return 0;
}
