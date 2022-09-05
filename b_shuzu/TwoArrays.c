//
// Created by haogu on 2022/9/4.
// 二维数组应用
#include "stdio.h"
int main(){
    //二维数组初始化
    //可以理解为三行四列
    int arr[3][4] = {
            {1,2,3,4},
            {5,6,7,8},
            {9,8,7,6}
    };

    //二维数组输出
    for (int i = 0; i < 3; ++i){
        for(int j = 0; j< 4; ++j){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
