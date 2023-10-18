#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char unit;
printf("whats the unit of your weight:");
scanf("%s",&unit);

float weight;
printf("enter your weight:");
scanf("%f", &weight);

printf("conversion of weight from pounds to kilograms \n");

while (weight < 1000)
{
    float value;
    value = weight * 2.2;
    printf("%.2f kilograms = %.2f pounds\n",weight, value);
    weight = weight + 100;
}
}
