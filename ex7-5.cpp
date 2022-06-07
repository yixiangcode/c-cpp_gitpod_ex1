#include <stdio.h>
int time(int a); // function prototype

int main()
{
    int n;
    printf("Please input xx min: ");
    scanf("%d", &n);
    time(n);
    return 0;
}

int time(int a)         // function definition   
{
    int hr, min;
    char result;
    hr = a / 60;
    min = a % 60;
    printf("Result = %d hr %d min\n", hr, min);
    return 0;
    //return statement
}