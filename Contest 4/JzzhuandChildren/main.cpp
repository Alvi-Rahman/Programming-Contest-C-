#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,count=0,temp=0;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int x=0;x<n;++x){
    	scanf("%d", &a[x]);
    	a[x]=ceil((double)a[x]/m);
    }
    for(int x=n-1;x>=0;--x) {
    	if(a[x]>temp){
    		temp=a[x],count=x;
    	}
    }
    printf("%d\n",count+1);
    return 0;
}
