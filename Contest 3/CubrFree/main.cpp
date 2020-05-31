#include<bits/stdc++.h>
using namespace std;

int a[1000001]={0};
void cube(){
 int i,k,j;
 for(i=2;i<=100;i++){
  if(a[i]==0){
   k=i*i*i;
   for(j=k;j<=1000000;j+=k){
    a[j]=-1;
   }
  }
 }
}
void save(){
	int k=1;
 for(int i=1;i<=1000000;i++){
  if(a[i]==0){
   a[i]=k++;
  }
 }
}
int main()
{
 cube();
 save();
 int n,b;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  scanf("%d",&b);
  if(a[b]!=-1)
   printf("Case %d: %d\n",i,a[b] );
  else
   printf("Case %d: Not Cube Free\n",i);
 }
 return 0;
}
