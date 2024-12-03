#include<stdio.h>
#include<string.h>

struct StudentInfo {
    char name[50];
    int id;
    double cgpa;
    int age;
    char courses[25][50];
};

int main () {
    int numStudent, numCourses, i, j;
    double totalCGPA = 0;

    printf("Enter the number of students: ");
    scanf("%d", &numStudent);
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

    struct StudentInfo students[numStudent];

    for (i = 0; i < numStudent; i++) {
        printf("\nEnter %d students details:\n", i + 1);
        printf("Name: ");
        scanf("%s", &students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("CGPA: ");
        scanf("%lf", &students[i].cgpa);
        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Enter %d courses:\n", numCourses);
        for (j = 0; j < numCourses; j++){
            scanf("%s", students[i].courses[j]);
        }
        totalCGPA += students[i].cgpa;
    }

    printf("\nStudent details:\n");
    for (i = 0; i < numStudent; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s, ID: %d, CGPA: %.2lf, Age: %d\n", students[i].name, students[i].id, students[i].cgpa, students[i].age);
        printf("Courses: ");
        for (j = 0; j < numCourses; j++){
            printf("%s ", students[i].courses[j]);
        }
        printf("\n");
    }
    return 0;
}