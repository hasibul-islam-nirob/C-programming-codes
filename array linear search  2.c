#include<stdio.h>

int main(){

    int array[100],i,n,key,cas=1;

    while(scanf("%d",&n) != EOF){


            for(i=0; i<n; i++){
                scanf("%d",&array[i]);
            }
            scanf("%d",&key);
            for(i=0; i<n; i++){
                if(array[i]==key){
                    break;
                }
            }
            printf("case %d: ",cas);
            cas++;
            if(i==n)
                printf("No\n");
            else
                printf("%d\n",i+1);
    }

    return 0;
}
