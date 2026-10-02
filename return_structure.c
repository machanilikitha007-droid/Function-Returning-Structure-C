#include <stdio.h>

struct Student
{
    char name[30];
    int marks;
};

struct Student getStudent()
{
    struct Student s = {"Likitha", 85};
    return s;
}

int main()
{
    struct Student student;

    student = getStudent();

    printf("Student Name: %s\n", student.name);
    printf("Marks: %d\n", student.marks);

    return 0;
}
