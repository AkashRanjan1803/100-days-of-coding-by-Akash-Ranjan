#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

   
    printf("Enter employee name: ");
    getchar(); 
    fgets(emp.name, sizeof(emp.name), stdin);
    if (emp.name[strlen(emp.name) - 1] == '\n') {
        emp.name[strlen(emp.name) - 1] = '\0';
    }

    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

  
    printf("\nEmployee Details:\n");
    printf("Name       : %s\n", emp.name);
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Salary     : %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
