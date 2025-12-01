#include <stdio.h>

int main() {
    
    enum TrafficLight { RED, YELLOW, GREEN };
    
    enum TrafficLight light;

    
    printf("Enter traffic light color (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light color!\n");
    }

    return 0;
}
