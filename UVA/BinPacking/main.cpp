    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        //5 10 5   20 10 5    10 20 10
        int a1[3];
        int a2[3];
        int a3[3];
        int a[3];
        int count1=0,count2=0,count3=0,count=0;
        for(int x=1;x<10;++x){
            if(x%3==0){
                scanf("%d",&a3[count3]);
                ++count3;
            }else if(x==2||x==5||x==8){
                scanf("%d",&a2[count2]);
                ++count2;
            }else{
                scanf("%d",&a1[count1]);
                ++count1;
            }
        }
		int sum=0;
        for(int y=0;y<3;++y){
             sum+=a1[y];
        }
        a[0]=sum;
        sum=0;
        for(int y=0;y<3;++y){
             sum+=a2[y];
        }
        a[1]=sum;

        sum=0;
        for(int y=0;y<3;++y){
            sum+=a3[y];
        }
        a[2]=sum;

		int array[3];
		for(int y=0;y<3;++y){
        	array[y]=a[y];
        }
        sort(array,array+3);
        for(int y=0;y<3;++y){
        	if(array[y]==a[0]){
        		printf("B");
        	}else if(array[y]==a[1]){
        		printf("G");
        	}else{
        		printf("C");
        	}
        }
        printf(" ");
		sum=0;
		if(array[0]==a[0]){
        		sum+=a1[1]+a1[2];
        	}else if(array[0]==a[1]){
        		sum+=a2[1]+a2[2];
        	}else{
        		sum+=a3[1]+a3[2];
        	}

		if(array[1]==a[0]){
        		sum+=a1[0]+a1[2];
        	}else if(array[1]==a[1]){
        		sum+=a2[0]+a2[2];
        	}else{
        		sum+=a3[0]+a3[2];
        	}


		if(array[2]==a[0]){
        		sum+=a1[0]+a1[1];
        	}else if(array[2]==a[1]){
        		sum+=a2[0]+a2[1];
        	}else{
        		sum+=a3[0]+a3[1];
        	}
		printf("%d\n",sum);
        return 0;
}
