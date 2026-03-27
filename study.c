// b站翁凯老师课程中出现的所有代码
// 辗转相处法
// 枚举法
// 二分法

// http://www.tiobe.com/index.php/content/paperinfo/tpci/index.html

// //c、java、python的hello world程序
// #include <stdio.h>
// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// class HelloWorld {
// public:
//     static void main(String[] args) {
//         System.out.println("Hello, World!");
//     }
// }

// print("Hello, World!")
 
// //hello word
// #include <stdio.h>
// int main() {
//     printf("Hellow world!\n");
//     printf("12+13=%d\n", 12 + 13);
//     return 0;
// }

//change.c
#include <stdio.h>
int main(){
    int price = 0;
    printf("请输入价格：");
    scanf("%d",&price);
    int change = 100 - price;//C99可以在任何地方定义变量
    printf("找零：%d\n", change);
    return 0;

}

//scanf测试
#include <stido.h>

int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    scanf("%d,%d",&a,&b);
    scanf("%d %d ",&a,&b);
    scanf("price%d %d",&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}

//常量
#include <stdio.h>
 int main(){
    // const int AMOUNT = 100;
    int amount = 100;
    int price =0;

    // AMOUNT =90;
    printf("请输入金额（元）：");
    scanf("%d",&price);

    printf("请输入票面（元）：");
    scanf("%d",&amount);

    int change = amount - price;

    printf("找您%d元。\n",change);

    return 0;
 }

 //英尺和米换算，浮点数，定点数
 //5英尺7英寸 (5+7/12)x0.3048 = 1.7018 米
 #include<stdio.h>

 int main() {
    double foot;
    double inch;//double是双精度浮点数，float是单精度浮点数，double的有效位数是15-16位，float的有效位数是6-7位

    printf("请输入英尺和英寸；");
    scanf("%lf %lf",&foot,&inch);

    printf("身高是%f米.\n",((foot + inch / 12.0)*0.3048));//整和整做运算还是整，把小数部分扔掉,又整又浮，会把整变浮


    return 0;

 }

 
 