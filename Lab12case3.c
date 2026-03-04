#include <stdio.h>
int fac(int n);
int fib(int n);

int main() {
    printf("%d\n",fac(5));  
    printf("%d\n",fib(7));   
    return 0;
}
int fac(int n){
    if (n <= 1)
        return 1;
    else
        return n * fac(n-1);
}
int fib(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}