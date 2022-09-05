//
// Created by haogu on 2022/9/4.
// 使用scanf赋值
#include "stdio.h"

int main(){
    //1.此程序只给arr其中两个位置赋值,其他未赋值位置数字为该位置地址值
    int arr[5];
    scanf("%d",&arr[0]);
    printf("arr[0]=%d\n",arr[0]);

    scanf("%d",&arr[3]);
    printf("arr[3]=%d\n",arr[3]);

    for (int i = 0; i < 5; ++i){
        printf("%d  ",arr[i]);
    }
    return 0;
}