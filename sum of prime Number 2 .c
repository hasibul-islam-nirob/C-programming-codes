#include<stdio.h>
int main(){
    int m,n,p,i,j,chack,sum;

    scanf("%d %d",&m,&n);
    sum=0;
    if(m>n){
            for(i=n; i<=m; i++){
            p=i;
            chack = 1;
            if(p==0){
                chack = 0;
                }

            for(j=2; j<p; j++){
                if(p%j==0){
                    chack = 0;
                    }
            }
            if(chack==1){
                sum = sum+p;
                }
        }
    }
    else{
            for(i=m; i<=n; i++){
            p=i;
            chack = 1;
            if(p==0){
                chack = 0;
                }

            for(j=2; j<p; j++){
                if(p%j==0){
                    chack = 0;
                    }
            }
            if(chack==1){
                sum = sum+p;
                }
        }
    }
    printf("%d\n",sum);

return 0;
}
