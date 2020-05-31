#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    scanf("%d\n",&n);
    for(int x=0;x<n;++x){
        getline(cin,str);
        int len=pow(str.size(),1.0/2.0);
        char arr[len][len];
        for(int a=0,c=0;a<len;++a){
            for(int b=0;b<len;++b){
                arr[a][b]=str[c];
                ++c;
            }
        }
        for(int b=len-1;b>=0;--b){
            for(int a=0;a<len;++a){
                printf("%c",arr[a][b]);
            }
        }
        printf("\n");
    }
    return 0;
}
