//
// Created by haogu on 2022/9/3.
// 运算符使用
#include "stdio.h"
#define PI 3.1415926

double sanY(double balance, double carNeed){  //三元运算函数
    //balance小明余额   carNeed打车需要的钱
    printf("小明能不能打车回家呢：");
    printf("%s\n", balance >= carNeed ? "yes" : "no");  //具体使用体现
    return 0;
}


int main(){
    printf("PI的值:%f\n",PI);
    int x = 10;
    int y = 20;
    //1.逻辑运算符的使用
    if(x+y>20 || x+y!=30){
        printf("hello world\n");
    } else if (x+y!=0 && x+y<100) {
        printf("hello c\n");
    } else {
        printf("不符合如上逻辑表达式\n");
    }

    //三元运算符函数调用
    sanY(12,32);
    return 0;
}