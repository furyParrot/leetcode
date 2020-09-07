#include <stdio.h>
#define max(x,y) ((x>y)?x:y)

int max_cost(int price[] , int n){
    int dp[4] ={0};
    for(int i=0;i<n;++i){
        dp[0]=dp[1],dp[1]=dp[2],dp[2]=dp[3];
        dp[3]= price[i]+max(dp[0],dp[1]);
    }
    return max(dp[2],dp[3]);
}

int main(){
    int price[] = {5,0,0,0,0,0,7,0,0,10};
    for(int n=0; n<11; ++n){
        for(int j=0; j<n ;++j)
            printf("%d ",price[j]);
        printf(" 最大话费 %d\n",max_cost(price,n));
    }
}