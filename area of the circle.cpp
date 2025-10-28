/*WRITE A C PROGRAM TO FIND THE AREA OF CIRCLE*/
#include<stdio.h>
#define pi 3.14
int main()
{float radius,area;
printf("enter radius of the circle(in cm):");
scanf("%f",&radius);
area=pi*radius*radius;
printf("area of the circle=%f cm",area);
}
