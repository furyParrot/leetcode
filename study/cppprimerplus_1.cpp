#include <iostream>
using namespace std;
int main(){
    int mm[] = {1233,1,1,11,1,1,1,2};
    cout<<sizeof(mm)/sizeof(int);

    cout<<"输入名字：\n";
    char a[20];
    cin.getline(a,10);
    cout<<"你的名字是："<<a<<endl;
}