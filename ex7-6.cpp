#include <stdio.h>

int f(int n){
    if (n == 1){
        return 1;
    }
    return n * f(n - 1);
}

int main()
{
    int i = 5;
    for (i = 1; i <= 5; i++){
        printf(" %d! = %d \n", i, f(i));
    }
    return 0;
}