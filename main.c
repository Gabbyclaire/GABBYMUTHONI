#include <stdio.h>


int main (void)
{
    int a, b, c;
    printf("enter the first value:");
    scanf("%d", &a);
    printf("enter the second value:");
    scanf("%d", &b);
    printf("Enter the third value:");
    scanf("%d", &c);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}
