#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count1=0,count2=0;
    int n=0;
    for(int x=0;x<str.length();++x){
        if(str[x]=='1'){
            count2=0;
            ++count1;
            if(count1>=7){
                ++n;
                printf("YES\n");
                break;
            }
        }else{
            count1=0;
            ++count2;
            if(count2>=7){
                ++n;
                printf("YES\n");
                break;
            }
        }
    }
    if(n==0){
        printf("NO\n");
    }
    return 0;
}
