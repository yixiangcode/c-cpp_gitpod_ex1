#include <stdio.h>
int time(int a, int b); // function prototype

int main()
{
    int n1,n2,minute;
    printf("Please input xx hr xx min: ");
    scanf("%d %d", &n1,&n2);
    minute = time(n1, n2);  // function call
    printf("Result = %d minute\n", minute);
    return 0;
}

int time(int a, int b)         // function definition   
{
    int result;
    if (a >= 1){
        result = b + (a * 60);
    }else{
        result = b;
    }
    return result;                     
    //return statement
}