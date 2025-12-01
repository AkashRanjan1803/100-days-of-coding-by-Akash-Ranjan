#include <stdio.h>

int main() {
   
    enum Status { SUCCESS = 10, FAILURE, TIMEOUT };

    printf("Enum values with explicit starting point:\n");
    printf("SUCCESS = %d\n", SUCCESS);  
    printf("FAILURE = %d\n", FAILURE);  
    printf("TIMEOUT = %d\n", TIMEOUT);  

    return 0;
}
