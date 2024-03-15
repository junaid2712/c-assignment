#include <stdio.h>

int main() {
    float x, y;

    // Accepting input for the coordinates
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    // Checking for special cases
    if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    } else {
        // Determining the quadrant
        if (x > 0 && y > 0) {
            printf("The point lies in the first quadrant.\n");
        } else if (x < 0 && y > 0) {
            printf("The point lies in the second quadrant.\n");
        } else if (x < 0 && y < 0) {
            printf("The point lies in the third quadrant.\n");
        } else {
            printf("The point lies in the fourth quadrant.\n");
        }
    }

    return 0;
}
