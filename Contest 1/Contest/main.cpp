#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d\n",&n);
	int a[n];
	int sum=0;
	for(int x=0;x<n;++x){
		scanf("%d",&a[x]);
		sum+=a[x];
	}
	printf("%d\n",sum);
	return 0;
}
