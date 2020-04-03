#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    printf("P: ");
    scanf("%d", &num1);
    printf("R: ");
    scanf("%d", &num2);
    printf("T: ");
    scanf("%d", &num3);

    printf("I: %d", (num1 * num2 * num3)/100);

    return 0;
}