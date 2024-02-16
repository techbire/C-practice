
#include <stdio.h>

int main() {
    int res = 25, city = 35, high = 55;
    int roadtype;
    int speed;

    printf("Enter road type (1, 2, or 3): ");
    scanf("%d", &roadtype);

    printf("Enter speed: ");
    scanf("%d", &speed);

    switch (roadtype) {
    case 1:
        if (speed < res) {
            printf("below");
        } else if (speed == res) {
            printf("normal");
        } else {
            printf("above");
        }
        break;

    case 2:
        if (speed < city) {
            printf("below");
        } else if (speed == city) {
            printf("normal");
        } else {
            printf("above");
        }
        break;

    case 3:
        if (speed < high) {
            printf("below");
        } else if (speed == high) {
            printf("normal");
        } else {
            printf("above");
        }
        break;

    default:
        printf("Invalid road type");
        break;
    }

    return 0;
}
