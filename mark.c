#include<stdio.h>
int main()
{
    char name[20];
    double mark1;
    double mark2;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter first mark: ");
    scanf("%lf", &mark1);
    printf("Enter second mark:");
    scanf("%lf", &mark2);

    printf("output: %lf", (mark1 + mark2)/2);
    return 0;
}