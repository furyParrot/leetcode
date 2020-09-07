#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void quickSort(int * a,int start_index,int end_index);
void swap(int * a,int *b);

int main(){
    int a[7] = {40,8,4,6,78,32,20};
    int start =0,end=6;
    quickSort(a,start,end);
    for(int i=0;i<end+1;i++){
        printf("%d\n",a[i]);
    }
}
void swap(int * a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
void quickSort(int * a,int start_index,int end_index){
    if(end_index<=start_index) return;
    //将小于基准的移动到左边，大于基准的移动到右边。
    int baseindex = start_index + (rand() % (end_index-start_index+1));
    int base = a[baseindex];
    swap(&a[baseindex] , &a[start_index]);
    int si = start_index;
    int ei = end_index;

    int font1back0 = 0;
    while (end_index>start_index)
    {
        if(font1back0==0){
            if(a[start_index] > a[end_index]){
                swap(&a[start_index],&a[end_index]);
                start_index++;
                font1back0 = 1;
            }else{
                end_index--;
            }
        }
        else{
            if(a[start_index]<a[end_index]){
                start_index++;
            }
            else{
                swap(&a[start_index],&a[end_index]);
                end_index--;
                font1back0 = 0;
            }
        }
    }
    quickSort(a,si,end_index-1);
    quickSort(a,end_index+1,ei);
    return;
}