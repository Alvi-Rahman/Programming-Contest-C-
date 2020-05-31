#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r,c,mx,mn,i,sum;


    scanf("%d",&n);
    for(int x=1;x<=n;++x){
    	int a[26];
    	memset(a,0,sizeof(a));
        scanf("%d %d %d %d\n",&r,&c,&mx,&mn);         //-65
        char ch;
        string str;
        for(int y=0;y<r;++y){
            getline(cin,str);
            for(int z=0;z<c;++z){
                i=str[z];
                i-=65;
                ++a[i];
            }
        }
        //cout<<endl;
		sum=0;
        sort(a,a+26);
        sum+=a[25]*mx;
        for(int z=0;z<25;++z){
            sum+=a[z]*mn;
            cout<<a[z]<<" ";
        }
        //printf("Case %d: %d\n",x,sum);
    }
    return 0;
}
