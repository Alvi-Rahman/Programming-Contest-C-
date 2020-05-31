    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        long long int x;
        scanf("%d",&n);
        for(int a=0;a<n;++a){
            scanf("%lld",&x);
            long long int i=0,j=0;
            i= sqrt(x);
            while(i>0) {

                if(j*j>x){
                    printf("No\n");
                    break;
                }
                else if(i*i+j*j==x){
                    printf("Yes\n");
                    break;
                }

                else if(i*i + j*j <x){
                    j++;
                }
                else{
                    i--;
                }
            }
        }

        return 0;
    }
