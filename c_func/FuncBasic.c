//
// Created by haogu on 2022/9/5.
// 避免重复性代码
# include "stdio.h"
//自定义max函数
void max(int param1,int param2){
    printf("Get the max num from two params\n");
    if (param1 > param2){
        printf("%d\n",param1);
    } else{
        printf("%d\n",param2);
    }
}
int main(){
    //自定义函数的调用
    max(234,-22);
    return  0;
}