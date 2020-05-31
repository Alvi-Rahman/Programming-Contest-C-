#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    string str,token;
    vector<int>v;
    scanf("%d",&n);
    getline(cin,str);
    for(int x=0;x<n;++x){
        getline(cin,str);
        stringstream ss;
        ss<<str;
        while(ss>>i){
            v.push_back(i);
        }
        int sz=v.size();
        int m=0;
        for(int y=0;y<sz;++y){
            for(int z=y+1;z<sz;++z){
                m=max(m,__gcd(min(v[y],v[z]),max(v[y],v[z])));
            }
        }
        printf("%d\n",m);
        v.clear();
    }
    return 0;
}
