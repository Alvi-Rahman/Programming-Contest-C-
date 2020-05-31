#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    while(getline(cin,str1)){
        getline(cin,str2);
        for(int x=0;x<str1.length();++x){
            str1[x]=toupper(str1[x]);
            str2[x]=toupper(str2[x]);
        }
        if(str1.compare(str2)>0){
            printf("1\n");
        }else if(str1.compare(str2)<0){
            printf("-1\n");
        }else{
            printf("0\n");
        }
    }
    return 0;
}
