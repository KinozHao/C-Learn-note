#include <stdio.h>  //头文件

int sumFunc(int a,int b){   //自定义求和函数
    return  a+b;
}

int main() {        //主函数
    printf("Hello, World!\n");

    //求和函数调用
    int x = 10;
    int y = 20;
    int sum = sumFunc(x,y);
    printf("sum=%d",sum);

    return 0;
}
