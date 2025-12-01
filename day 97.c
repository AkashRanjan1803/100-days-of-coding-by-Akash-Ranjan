#include <stdio.h>
#include <string.h>


struct Employee {
    char name[50];
    int emp_id;
    float salary;
};

int main() {
    FILE *file;
    struct Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

   
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        getchar(); 
        printf("Name: ");
        fgets(emp.name, sizeof(emp.name), stdin);
        if (emp.name[strlen(emp.name) - 1] == '\n') {
            emp.name[strlen(emp.name) - 1] = '\0';
        }

        printf("Employee ID: ");
        scanf("%d", &emp.emp_id);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        
        fwrite(&emp, sizeof(struct Employee), 1, file);
    }

    fclose(file);

    
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEmployee Details from File:\n");
   

   
    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("Name       : %s\n", emp.name);
        printf("Employee ID: %d\n", emp.emp_id);
        printf("Salary     : %.2f\n\n", emp.salary);
    }

    fclose(file);

    return 0;
}
