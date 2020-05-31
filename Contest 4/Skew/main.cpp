#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        if(str=="0"){
            break;
        }
        int len=str.length();
        long long int sum=0,s=0;
        for(int x=0;x<len;++x){
            s=str[x]-'0';
            sum+=s*(pow(2,len-x)-1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
