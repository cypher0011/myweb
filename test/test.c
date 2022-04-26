#include <stdio.h>
#include <stdlib.h>
int main()

{
    char characters[] = "john";
    int age = 35;
    double height = 3.6;
    
    printf("hello, world \n");
    printf("-------------------------------- \n");
    printf("hello world : %s \n" , characters);
    printf("your age is : %d \n" , age);
    printf("my height is :  %f \n" , height);
    printf("i love \"azoz\" \n"); 
    printf("my favorite number is : %d \n" , 500);
    printf("my favoritre %s is %d \n" ,"number ", 500);
    printf("my favoritre %s is %f \n" ,"number ", 3.6);
    int favnum = 500;
    printf("my fav num is %d \n", favnum);
    printf("plus : %d \n", 3 + 3);
    printf("minus : %d \n", 3 - 3);
    printf("Multiply : %d \n", 3 * 3);
    printf("Dividing : %d \n", 3 / 3);
    printf("pow : %f \n", pow(2,3)); // 2 X 2 X 2   الاس
    printf("sqrt: %f \n", sqrt(36)); // جذر 36
    printf("ceil: %f \n", ceil(36.6)); // الي الرقم الاكبر
    printf("floor: %f \n", floor(36.65)); // تحذف الارقم الي بعد الفاصله
    /*
    printf("test");
    */
    // test

    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d \n",testInteger);

    char name[2];
    printf("Enter your name: ");
    scanf("%s" ,&name);  //تحصل علي الاسم الاول الذ قبل المسافة
    printf("yourname is %s ", name);



    return 0;   
}

//hxidfjd52@gmail.com : mU7mX$njEe_-Gd%Y