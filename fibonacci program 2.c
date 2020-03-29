#include<stdio.h>
int main(){
    int n,i,j,t,a,b,c;

    scanf("%d",&t);

    for(i=1; i<=t; i++){
            scanf("%d",&n);
            a=0;b=1;
        for(j=1; j<=n; j++){
            if(j==n)
            printf("%d\n",a);

            c = a+b;
            a = b;
            b = c;
        }
    }




    //for(i=1; i<=n; i++){
      //  printf("%d ",a);

     //   c = a+b;
     //   a = b;
   //   //  b = c;



return 0;
}
