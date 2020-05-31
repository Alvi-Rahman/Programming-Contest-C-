#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,height,one,two;
    scanf("%d",&n);
    for(int x=1;x<=n;++x){
        scanf("%d %d %d %d",&num,&height,&one,&two);
        int arr[num];
        for(int y=0;y<num;++y){
            scanf("%d",&arr[y]);
        }
        int time=0,i=0,j=num-1,sum;
	        if(two>2*one){
	        	time=one*num;
	        }
	        else{
	        sort(arr,arr+num);

	        while(i<=j){
	            sum=arr[i]+arr[j];
	            if(i==j){
	                time+=one;
	                break;
	            }
	            if(sum<height){
	                time+=two;
	                --j;
	                ++i;
	            }else{
	                time+=one;
	                --j;
	            }
	        }
	    }
        printf("Case %d: %d\n",x,time);
    }
    return 0;
}
