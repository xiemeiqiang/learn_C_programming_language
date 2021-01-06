#include <stdio.h>

int main()
{
    printf("请分别输入身高的英尺和英寸,以空格间隔");
    double foot; // double双精度浮点数，float是单精度浮点数
    double inch;

    scanf("%lf %lf", &foot, &inch);//中间有个空格

    printf("身高是%f米。\n",((foot + inch/12)*0.3048));
    
    return 0;
}

//表达式：运算符和算子
//优先级
// 复合赋值+= -= *= /= 自增自减++ --