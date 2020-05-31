#include <bits/stdc++.h>
using namespace std;

int bin(int a[],int val,int len){
	int l=0,r=len,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==val){
			return mid;
		}else if(a[mid]>val){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return-1;
	}

int main() {

	int a,b,bb;
	int c=1;
	while(scanf("%d %d",&a,&b)==2&&a){
		int arr[a];
		printf("CASE# %d:\n",c);
		for(int x=0;x<a;++x){
			scanf("%d",&arr[x]);
		}
		sort(arr,arr+a);
		for(int x=0;x<b;++x){
			scanf("%d",&bb);
			int idx=bin(arr,bb,a);
			if(idx>=0){
                    while(idx>0&&arr[idx-1]==bb){
                        idx-=1;
                    }
				printf("%d found at %d\n",bb,idx+1);
			}else{
				printf("%d not found\n",bb);
			}
		}
		++c;
	}

	return 0;
}

