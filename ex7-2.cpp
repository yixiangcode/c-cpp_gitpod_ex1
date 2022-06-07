#include <stdio.h>
int addNumbers(int a, int b); // function prototype
int subNumbers(int a, int b);
int mulNumbers(int a, int b);
int divNumbers(int a, int b);

int main()
{
    int n1,n2,sum,sub,mul;
    float div;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1, &n2);
    sum = addNumbers(n1, n2);  // function call
    sub = subNumbers(n1, n2);
    mul = mulNumbers(n1, n2);
    div = divNumbers(n1, n2);
    printf("sum = %d\n", sum);
    printf("sub = %d\n", sub);
    printf("mul = %d\n", mul);
    printf("div = %f\n", div);
    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a + b;
    return result;                     
    //return statement
}

int subNumbers(int a, int b)         // function definition   
{
    int result;
    result = (a>b)? (a-b): (b-a);
    return result;                     
    //return statement
}

int mulNumbers(int a, int b)         // function definition   
{
    int result;
    result = a * b;
    return result;                     
    //return statement
}

int divNumbers(int a, int b)         // function definition   
{
    int result;
    result = a / b;
    return result;                     
    //return statement
}