#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int x=0;x<n;++x){
        scanf("%d",&a[x]);
    }
    vector<int>v;
    sort(a,a+sizeof(a));
    int z;
    for(int x=0;x<n;++x){
            z=0;
        for(int y=0;y<n;++y){
            if(a[y]%a[x]==0){
                ++z;
            }
        }
        if(z>1){
            v.push_back(a[x]);
        }
    }
    printf("%d\n",v.size());
    return 0;
}
