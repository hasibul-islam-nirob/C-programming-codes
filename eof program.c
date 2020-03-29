#include<stdio.h>
int main(){
    int a,i,n, sum=0;

    while(scanf("%d",&n) != EOF){
            if(n==0)
                return 0;
        sum =0;
        for(i=1; i<=n; i++){

            scanf("%d",&a);
            sum = sum+a;

        }
         printf("%d\n",sum);
    }
return 0;
}
