/* write  a c program to conversion of fahrenheit to celsius*/
#include <stdio.h>

int main() {
    int choice;
    float fahrenheit, celsius;
printf("enter temperature in faherenheit:");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32/1.8);
printf("temperature in celsius:%2f",celsius);}
