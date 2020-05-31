#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    pair<string,int>p[m];
    char str[20];
    int take;
    for(int x=0;x<m;++x){
        scanf("%s %d\n",&str,&take);
        p[x]=make_pair(str,take);

    }
    int sum=0;

    string input,token;
    for(int y=0;y<n;++y){
        sum=0;
        stringstream ss;
        while(getline(cin,input)){
            if(input=="."){
                break;
            }
            ss<<input;
            while(getline(ss,token,' ')){
                cout<<token<<endl;
            }
        }
        //cout<<sum<<endl;
    }

    /*while(getline(ss,token,' ')){

    for(int z=0;z<m;++z){
                    if(token==p[z].first){
                        sum+=p[z].second;
                    }
                }


    }*/
    return 0;
}
