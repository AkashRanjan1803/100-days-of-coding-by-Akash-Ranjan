#include <stdio.h>

int main() {
   
    enum Status { SUCCESS = 10, FAILURE, TIMEOUT = 20, PENDING };

   
    printf("SUCCESS = %d\n", SUCCESS);  
    printf("FAILURE = %d\n", FAILURE);  
    printf("TIMEOUT = %d\n", TIMEOUT); 
    printf("PENDING = %d\n", PENDING);  

    return 0;
}
