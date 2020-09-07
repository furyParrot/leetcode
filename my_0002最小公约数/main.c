#include <stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int mingys(int a,int b);
int main(){
    int a=100,b=30;
    printf("%d\n",mingys(a,b));
    return 0;
}

int mingys(int a,int b){
    int x = min(a,b);
    int y = max(a,b);
    if(y%x==0){
        return x;
    }else{
        return mingys(x,y%x);
    }
}