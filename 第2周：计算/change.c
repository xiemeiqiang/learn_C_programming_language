#include <stdio.h>

int main()
{
/*
    int price = 0;  //定义变量
    printf("请输入金额（元）\n");
    scanf("%d", &price); //&指针，后面再讲

    int change = 100 - price;
    printf("找您%d元\n",change);
*/
    const int AMOUNT = 100; //定义常量,const是一个修饰符，加在int前面，用来给这个变量加一个不变的属性，不可以被再次赋值
    int price = 0;  //定义变量
    printf("请输入金额（元）\n");
    scanf("%d", &price); 

    int change = AMOUNT - price;
    printf("找您%d元\n",change);


    return 0;
}


//C语言是一种有类型的语言，所有的变量在使用之前必须定义或声明，所有的变量必须具有确定的数据类型
//C99允许在任何地方定义变量，ANSI C只能在任何代码开头定义
//浮点数和定点数，通常用浮点数表示小数，浮点数和整数一起运算时，C会将整数转换为浮点数，然后进行浮点数的运算