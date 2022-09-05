//
// Created by haogu on 2022/9/3.
// C 语言数据类型
#include "stdio.h"
#define PI 3.1415926    //常量的定义
int main(){
    //1.数据类型
    int a = 10;
    long b = 1000000;
    short c = 2;
    float d = 1.2;
    char sex = 'F'; //char只能表示一个字符
    double pi = 3.1415926;

    //整数%d 小数%f 字符%c 字符串%s
    printf("a = %d \n",a);
    printf("d = %f \n",pi);
    printf("sex = %c \n",sex);
    printf("%s\n","这是一个字符串");

    //2.常量
    printf("常量的使用:%f",PI);
    return 0;


}