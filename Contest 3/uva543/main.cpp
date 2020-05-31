#include <bits/stdc++.h>

using namespace std;

const int n=1000000;
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
	int n;
	while(scanf("%d",&n)==1&&n){
        bool b=true;
        int l=0;
        int r=allprime.size()-1;
        if(allprime[r/2]>n){
            r=r/2;
        }
        while(r>=l){

            if(allprime[l]+allprime[r]==n){
                b=false;
                break;
            }else if(allprime[l]+allprime[r]>n){
                --r;
            }else{
                ++l;
            }
        }
        if(b){
            printf("Goldbach's conjecture is wrong.\n");
        }else{
            printf("%d = %d + %d\n",n,allprime[l],allprime[r]);
        }
	}

	return 0;
}

