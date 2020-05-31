#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str="";
    int x=1;
    while(true){
        getline(cin,str);
        if(str=="*"){
            break;
        }
        else if(str=="Hajj"){
            printf("Case %d: %s\n",x,"Hajj-e-Akbar");
        }else{
            printf("Case %d: %s\n",x,"Hajj-e-Asghar");
        }
        ++x;
    }
    return 0;
}
