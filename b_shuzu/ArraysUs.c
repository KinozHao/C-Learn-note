//
// Created by haogu on 2022/9/4.
//  数组的学习使用
#include "stdio.h"

int main(){
    //1.初始化赋值
    int a[5] = {1,2,3,4,5};


    for (int i = 0; i <5;++i){
        printf("%d\n",a[i]);
    }
    printf("--------------------\n");

    //2.不初始化,再进行依次赋值
    int b[3];
    b[0] = 20;
    b[1] = 30;
    b[2] = 40;
    for (int i = 0; i < 3; ++i){
        printf("%d\n",b[i]);
    }
    printf("--------------------\n");

    //3.x数组所有元素赋值给y数组
    int x[5] = {1,2,3,4,5};
    int y[5];
    for (int i = 0; i < 5; ++i) {
        y[i] = x[i];
    }
    //测试是否copy成功
    printf("%d\n",y[0]);
    printf("--------------------\n");




    return 0;


}

