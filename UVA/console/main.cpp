#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c;
    double d;
    string str1,str3;
    scanf("%d %d",&a,&b);
    for(int x=0;x<a;++x){
        getline(cin,str1);
    }
    pair<double,int>p[b];
    string str[b];
    for(int x=0;x<b;++x){
        getline(cin,str[x]);
        scanf("%lf %d",&d,&c);
        p[x]=make_pair(d,c);
        for(int y=0;y<c;++y){
            getline(cin,str3);
        }
    }



   /* set<int>s;
    for(int x=0;x<10;++x){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(set<int>::iterator i=s.begin();i!=s.end();++i){
        cout<<*i<<endl;
    }*/
    return 0;
}
