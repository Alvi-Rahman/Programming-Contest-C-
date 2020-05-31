#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h,u,d,f;
    int a;
    double climb,record,fat;
    while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)==4){
        if(h==0){
            break;
        }
        a=0;
        fat=(u*f)/100;
        climb=u+fat;
        record=0;
       // printf("%.2f\n",fat);
        while(record<h&&record>=0){
            ++a;
            climb-=fat;
            if(climb<0){
                climb=0;
            }
            record+=climb;
            if(record>h){
                break;
            }
            record-=d;
            if(record<0){
                break;
            }
            //printf("%.2f\n",record);
        }
        if(record>=h){
            //printf("success on day %d\n",a);
        }else{
            //printf("failure on day %d\n",a);
        }
    }
    return 0;
}
