#include<stdio.h>
int main(){
    int n,i,t,a,b,c;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a=0;b=1;
        for(i=1; i<=n; i++){
            if(i==n)
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
