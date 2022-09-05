//
// Created by haogu on 2022/9/4.
//
#include "stdio.h"
#define N 5
int main(){
    int arr[N];
    printf("请输入%d个整数\n",N);

    for (int i = 0; i < N; ++i){
        scanf("%d",&arr[i]);
    }
    printf("Before Sort:\n");
    for (int i = 0; i < N; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //冒泡排序
    int swap_flag;  //用于跳出循环语句
    for (int i = 1; i < N; ++i){    //N个数 需要比较N-1轮
        swap_flag = 0;
        for (int j = 0; j < N-i; ++j){
            if(arr[j] > arr[j + 1]){
                int t;
                t= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                swap_flag = 1;
            }
        }
        if(swap_flag == 0){
            break;
        }
    }
    printf("After Sort:\n");
    for (int i = 0; i < N; ++i){
        printf("%d ",arr[i]);
    }
    return 0;
}