#include<stdio.h>

int main(){

    int array[100],i,n,key,loc;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&key);
    loc = 0;
    for(i=0; i<n; i++){
        if(array[i]==key){
            loc = i+1;
            break;
        }
    }
    if(loc==0)
        printf("No\n");
    else
        printf("%d\n",loc);

    return 0;
}
