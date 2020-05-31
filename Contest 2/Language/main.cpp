#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str1;
       int x=1;
    while(true){
        getline(cin,str1);
        if(str1=="#"){
            break;
        }

    if(str1=="HELLO"){
        printf("Case %d: ENGLISH\n",x);
    }else if(str1=="HOLA"){
        printf("Case %d: SPANISH\n",x);
    }else if(str1=="HALLO"){
        printf("Case %d: GERMAN\n",x);
    }else if(str1=="BONJOUR"){
        printf("Case %d: FRENCH\n",x);
    }else if(str1=="CIAO"){
        printf("Case %d: ITALIAN\n",x);
    }else if(str1=="HOLA"){
        printf("Case %d: RUSSIAN\n",x);
    }else{
        printf("Case %d: UNKNOWN\n",x);
    }
       ++x;
    }



    return 0;
}
