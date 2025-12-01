#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};


struct Student getTopStudent(struct Student students[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    return students[topIndex];
}

int main() {
    struct Student students[5];
    struct Student topStudent;
    int i;

   
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        if (students[i].name[strlen(students[i].name) - 1] == '\n') {
            students[i].name[strlen(students[i].name) - 1] = '\0';
        }

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

   
    topStudent = getTopStudent(students, 5);

    
    printf("\nTop Student Details:\n");
    printf("Name     : %s\n", topStudent.name);
    printf("Roll No  : %d\n", topStudent.roll_no);
    printf("Marks    : %.2f\n", topStudent.marks);

    return 0;
}
