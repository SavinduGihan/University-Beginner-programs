#include <stdio.h>


int main() {
    float l, w, h, r, s;
    float surface, volume;

    float PI = 3.14159265358979323846;

    printf("\nRectangular Solid\n");
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter width: ");
    scanf("%f", &w);
    printf("Enter height: ");
    scanf("%f", &h);

    surface = 2 * (l * w + l * h + w * h);
    volume = l * w * h;

    printf("Surface Area: %.2f\n", surface);
    printf("Volume: %.2f\n\n", volume);

    printf("Cylinder\n");
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);

    surface = (2 * PI * r * r) + (2 * PI * r * h);
    volume = PI * r * r * h;

    printf("Surface Area: %.2f\n", surface);
    printf("Volume: %.2f\n\n", volume);

    printf("Cone\n");
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);
    printf("Enter slant height (s): ");
    scanf("%f", &s);

    surface = (PI * r * r) + (PI * r * s);
    volume = (1.0/3.0) * PI * r * r * h;

    printf("Surface Area: %.2f\n", surface);
    printf("Volume: %.2f\n\n", volume);

    printf("Sphere\n");
    printf("Enter radius: ");
    scanf("%f", &r);

    surface = 4 * PI * r * r;
    volume = (4.0/3.0) * PI * r * r * r;

    printf("Surface Area: %.2f\n", surface);
    printf("Volume: %.2f\n", volume);

    return 0;
}