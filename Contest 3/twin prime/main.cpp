#include <bits/stdc++.h>

using namespace std;

const int n=100000;
bool prime [n];
vector<int>allprime;
void seive()
{
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=4;i<=n;i+=2)
	{
		prime[i]=false;
	}
	int N=sqrt(n);
	for( int i=3;i<=N;i+=2)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j+=2*i)
			{
				prime[j]=false;
			}
		}
	}
}
void savePrime()
{
	allprime.push_back(2);
	for(int i=3;i<n;i+=2)
	{
		if(prime[i])
		{
			allprime.push_back(i);
		}
	}
}
int main()
{
	seive();
	savePrime();
	//vector<int>v;
	int sz=allprime.size();
	pair<int,int>data[sz];

	int c=0;
	for(int x=0;x<sz-1;++x){
        if(allprime[x]+2==allprime[x+1]){
            data[c]=make_pair(allprime[x],allprime[x+1]);
            ++c;
        }
	}
    int n;
    while(scanf("%d",&n)==1){
        printf("(%d , %d)",data[n].first,data[n].second);
    }


	return 0;
}

