#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* 逆反序一个字符串(char* in);
char 逆反序一个char(char in);
int main(){
    char a[101];

    FILE* fp = fopen("test.txt","r");//打开文件
    int linenum ;
    fscanf(fp,"%d",&linenum);//读取行数
    for(int i=0;i<linenum;i++){
        fscanf(fp,"%s",a);//读取一行
        printf("%s\n",逆反序一个字符串(a));
    }

}
char* 逆反序一个字符串(char* in){
    char* out = malloc(strlen(in)+1);
    out[strlen(in)]='\0';

    for(int i=0;i<strlen(in);i++){
        out[strlen(in)-1-i] = 逆反序一个char(in[i]);
    }
    return out;
}
char 逆反序一个char(char in){
    switch(in){
        case '0': return 'f';
        case '1': return '7';
        case '2': return 'b';
        case '3': return '3';
        case '4': return 'd';
        case '5': return '5';
        case '6': return '9';
        case '7': return '1';
        case '8': return 'e';
        case '9': return '6';
        case 'a': return 'a';
        case 'b': return '2';
        case 'c': return 'c';
        case 'd': return '4';
        case 'e': return '8';
        case 'f': return '0';
        default: return '?';
    }
}
