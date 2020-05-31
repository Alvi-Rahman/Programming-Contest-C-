#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        int m=n+3-(n%3);
        int count=n;
        while(m>2){
            count+=m/3;
            m/=3;
        }

        printf("%d\n",count);
    }
    return 0;
}
