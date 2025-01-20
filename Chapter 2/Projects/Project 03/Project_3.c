#include <stdio.h>

int main(void) {
    float radius;

    printf("Please enter the radius of the sphere: ");

    scanf("%f", &radius);

    printf("Sphere volume: %.2f cubic meters\n", 4.0f/3.0f * 3.14f * radius * radius * radius);
    return 0;
}