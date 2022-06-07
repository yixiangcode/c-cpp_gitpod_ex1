#include <stdio.h>
int theArea(int a, int b); // function prototype

int main()
{
    int n1,n2,area;
    printf("請輸入長和寬: ");
    scanf("%d %d", &n1,&n2);
    area = theArea(n1, n2);  // function call
    printf("矩形面積 = %d", area);
    return 0;
}

int theArea(int a, int b)         // function definition   
{
    int result;
    result = a * b;
    return result;                     
    //return statement
}