//
// Created by haogu on 2022/9/3.
// goto语句代表无条件分支
#include "stdio.h"

int main(){
    int sum = 0;
    int y = 1;
    //LOOP在此处作为表示
    LOOP:if(y<=10){
        sum +=y;
        y++;
        goto LOOP;  //转业到LOOP标识位置继续执行
    }
    printf("sum=%d\n",sum);
    return 0;
}
