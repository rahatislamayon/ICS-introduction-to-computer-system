#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle (in degrees):\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);


    if (angle1 > 0 && angle2 > 0 && angle3 > 0 &&
        angle1 < 180 && angle2 < 180 && angle3 < 180) {

        if (angle1 + angle2 + angle3 == 180) {
            printf("Valid triangle!\n");
        } else {
            printf("Not a valid triangle. The sum of angles should be 180 degrees.\n");
        }
    } else {
        printf("Invalid input! Angles must be between 0 and 180 degrees.\n");
    }

    return 0;
}

