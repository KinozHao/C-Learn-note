//
// Created by haogu on 2022/9/4.
// 实现数组位置的交换
#include "stdio.h"
int main(){

    int arr[5] = {1,2,3,4,5};
    int temp;
    int x = 0;
    int y = 4;

    printf("交换前的顺序:\n");
    for (int i = 0; i < 5; ++i){
        printf("%d ",arr[i]);
    }    printf("\n交换过后的顺序:\n");
    for (int i = 0; i < 5; ++i){
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        printf("%d ",arr[i]);


    }
    return 0;
}
