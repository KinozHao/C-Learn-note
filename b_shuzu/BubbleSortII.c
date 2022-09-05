//
// Created by haogu on 2022/9/4.
//
# include "stdio.h"
int main(){
    int arr[5] = {2222,54,-45,54,1};
    int flag;   //用于标识
    int temp;   //用于交换

    //冒泡排序核心代码
    for (int i = 0; i < 5; ++i){
        flag = 0;
        for (int j = 0; j < 5-i; ++j) {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    printf("排序后的数组:\n");
    for (int i = 0; i < 5; ++i){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}