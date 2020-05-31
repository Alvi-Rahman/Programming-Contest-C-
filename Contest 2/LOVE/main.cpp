#include <bits/stdc++.h>

using namespace std;

int main()
{

   string str1,str2;

    while(getline(cin,str1)){
            getline(cin,str2);
            if(str1.empty()&&str2.empty()){
                printf("\n");
            }else{

        for(int x=0;x<str1.length();++x){
            str1[x]=toupper(str1[x]);
        }
        for(int x=0;x<str2.length();++x){
            str2[x]=toupper(str2[x]);
        }
        int a=0,b=0;
        for(int x=0;x<str1.length();++x){
            int k=str1[x];
            if(k>=65&&k<=90){
                a+=str1[x]-64;
            }

        }
        for(int x=0;x<str2.length();++x){
            int k=str2[x];
            if(k>=65&&k<=90){
            b+=str2[x]-64;
            }
        }
        while(a>9){
            int a1=0,b1=0;
            while(a>0){
                a1+=a%10;
                a/=10;
            }
            a=a1;
        }
        while(b>9){
            int a1=0,b1=0;
            while(b>0){
                b1+=b%10;
                b/=10;
            }
            b=b1;
        }
        double sum=10;
        double aa=a,bb=b;

        if(a>b){
            sum=(bb/aa)*100;
        }else{
            sum=(aa/bb)*100;
        }
        //printf("%.2f %\n",sum);
        }

    }

    return 0;
}
