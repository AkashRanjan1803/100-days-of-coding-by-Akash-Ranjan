#include <stdio.h>

int main() {
    
    enum Months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
                  JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

  
    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

   
    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    
    printf("Month\t\tDays\n");
    printf("----------------------\n");
    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("%-10s\t%d\n", monthNames[i], daysInMonth[i]);
    }

    return 0;
}
