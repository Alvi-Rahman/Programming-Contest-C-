#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,d=0;
    double b,c=0;
    scanf("%d %lf %lf %d\n",&a,&b,&c,&d);
   // while(a>=0){

        double array[d+1];
        double input=0;
        int depCount=0;
        for(int x=0;x<=d;++x){
            scanf("%d",&depCount);
            if(depCount==x){
                scanf("%lf\n",&input);
            }

            array[x]=input;
        }
        double left=c;
        double dep=c;
        int counter=0;
        for(int x=0;x<a;++x){

            double count;
            if(x<=d){
                count=array[x];
            }
            left-=b;
            dep=dep-dep*count;
            if(dep>left){
                break;
            }
            ++counter;
        }
        printf("%d months\n",counter);
        scanf("%d %lf %lf %d\n",&a,&b,&c,&d);
    //}
}
