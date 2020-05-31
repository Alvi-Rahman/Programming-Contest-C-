#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d\n",&n);
    string str,name[n],input;
    vector<string>v[n];
    for(int x=0;x<n;++x){
        getline(cin,name[x]);
        while(getline(cin,str)){
            if(str.size()==0){
                break;
            }
            stringstream ss;
            ss<<str;
            while(getline(ss,input,',')){
                // Dr.,Tom,Davis,Anystreet USA,555-2832,555-2423,823
                v[x].push_back(input);
            }
        }
    }
    vector<string>ve;
    for(int x=0;x<n;++x){
        for(int y=2;y<v[x].size();y+=7){
            ve.push_back(v[x][y]);
        }
    }
    sort(ve.begin(),ve.end());
    for(int z=0;z<ve.size();++z){
        int a=0,b=0;
        for(int x=0;x<n;++x){
            for(int y=2;y<v[x].size();y+=7){
                if(ve[z]==v[x][y]){
                    ++a;
                    b=y-2;
                    printf("----------------------------------------\n");
                    cout<<v[x][b]<<" "<<v[x][b+1]<<" "<<v[x][b+2]<<endl;
                    cout<<v[x][b+3]<<endl;
                    cout<<"Department: "<<name[x]<<endl;
                    cout<<"Home Phone: "<<v[x][b+4]<<endl;
                    cout<<"Work Phone: "<<v[x][b+5]<<endl;
                    cout<<"Campus Box: "<<v[x][b+6]<<endl;
                    break;
                }
                if(a>0){
                    break;
                }
            }
        }
    }

    return 0;
}
