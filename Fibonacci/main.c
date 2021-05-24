#include<stdio.h>

int fibonacci_series(int n)
{
    if(n==0||n==1||n==2){
        return 1;
    }
    else{
        return(fibonacci_series(n-1)+fibonacci_series(n-2));
    }
}

int main()
{
    int n=0;
    int sum;
    printf("Which number element ?\n");
    scanf("%d",&n);
    sum = fibonacci_series(n);
    printf("%d",sum);
    return 0;
}
