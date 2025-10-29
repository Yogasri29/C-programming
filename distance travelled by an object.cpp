/*write  a c program to find distance travelled  by an object*/

#include <stdio.h>

int main() {
    float u, a, t, distance;
    printf("Enter the initial velocity (u) in m/s: ");
    scanf("%f", &u);
    printf("Enter the acceleration (a) in m/s^2: ");
    scanf("%f", &a);
    printf("Enter the time (t) in seconds: ");
    scanf("%f", &t);
    distance = (u * t) + (0.5 * a * t * t);
    printf("The distance travelled by the object is: %.2f meters\n", distance);

    
}

