#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(x,y) ((x>y)?x:y)

int main(){
    FILE * p=fopen("data.txt","r");
    
    int num;
    fscanf(p,"%d",&num);
    int * prices = (int*)malloc(sizeof(int)*num);

    for(int i=0;i<num;i++){
        fscanf(p,"%d",&prices[i]);
    }
    int *res = (int*)malloc(sizeof(int)*num);
    memset(res,0,sizeof(int)*num);

    res[0]=prices[0];
    res[1]= max(prices[0],prices[1]);
    for(int i=2;i<num;i++){
        res[i] = max(res[i-2]+prices[i],res[i-1]);
    }
    printf("%d\n",res[num-1]);
}
