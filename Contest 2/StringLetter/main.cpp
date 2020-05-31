#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count=1;
    for(int x=0;x<str.length();++x){
        int k=str[x];
        if(str[x]>=65 && str[x] <= 90){
            ++count;
        }
    }
    printf("%d\n",count);
    return 0;
}
