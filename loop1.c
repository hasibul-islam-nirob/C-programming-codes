#include<stdio.h>
int main(){
    int a,i,n, sum=0;

    while(scanf("%d",&n) != EOF){
        sum =0;
        for(i=1; i<=n; i++){
            scanf("%d",&a);
            sum = sum+a;

        }
         printf("%d\n",sum);
    }
return 0;
}
