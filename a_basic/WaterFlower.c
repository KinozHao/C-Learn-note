//经典案例:水仙花数量

#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    int a, b, c, i;
    printf("水仙花输出");
    for( i=100;i<1000;i++){
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        if(i == a*a*a+b*b*b+c*c*c){
            printf("\n \t%d ",i);
        }
    }
    printf("\t");
    return 0; 
}
