#include <stdio.h>

int main() {
    
    enum UserRole { ADMIN, USER, GUEST };

   
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

   
    printf("User Roles and their integer values:\n");
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
