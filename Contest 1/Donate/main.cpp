#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d\n",&n);
    for(int x=1;x<=n;++x){
        char str[7];
        int sum=0;
        int money=0;
            scanf("%s",&str);
            if(str[0]=='d'){
                scanf("%d",&money);
                sum+=money;
            }else if(str[0]=='r'){
                printf("%d\n",sum);
            }
    }
    return 0;
}
