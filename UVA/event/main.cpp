#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,b,h,w,pay,room,rcount,count=0;
    string str="";
    while(1){
    scanf("%d %d %d %d",&p,&b,&h,&w);
    count=b;
    for(int x=0;x<h;++x){
            scanf("%d",&pay);
        for(int y=0;y<w;++y){
            scanf("%d",&room);
            if(room>=p){
                rcount=pay*p;
                if(rcount<count){
                    count=rcount;
                }
            }
        }
    }
    if(count<b){
        printf("%d\n",count);
    }else printf("stay home\n");
    if(getline(cin,str)){}
    else{
    	break;
    }
}

}
