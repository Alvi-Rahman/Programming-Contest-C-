#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n;
    int len;
    scanf("%d\n",&n);
    for(int x=0;x<n;++x){
        getline(cin,str);
        len=str.length();
        if(len>10){
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
        else{
            cout<<str<<endl;
        }
    }
    return 0;
}
