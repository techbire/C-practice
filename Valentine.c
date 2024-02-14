#include <stdio.h>

int main() {
    char response[10];

    do {
        printf("Will you be my Valentine? (yes/no): ");
        scanf("%s", response);

        if (strcmp(response, "yes") == 0) {
            printf("Give Rose !🌹  \n");
            break;
        } else (strcmp(response, "no") == 0) {
            printf("Kill her ! 💀 \n");
    
    } while (1);

    return 0;
}
