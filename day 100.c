#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s; 

    printf("Enter student name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    if (ptr->name[strlen(ptr->name) - 1] == '\n') {
        ptr->name[strlen(ptr->name) - 1] = '\0';
    }

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

   
    printf("\nStudent Details:\n");
    printf("Name     : %s\n", ptr->name);
    printf("Roll No  : %d\n", ptr->roll_no);
    printf("Marks    : %.2f\n", ptr->marks);

    return 0;
}
