//
// Created by haogu on 2022/9/3.
// 循环结构的使用
#include "stdio.h"

int main(){
    //1.while循环体的使用
    /*while (1==1){   //满足条件持续死循环
        printf("hello world\n");
    }*/

    //2.do while循环体使用
    int count = 20;
    do {
        printf("hello world\n");
    } while (count!=0);
}