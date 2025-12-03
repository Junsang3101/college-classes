#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 128

typedef struct{
    int number;
    char name[BUFF_SIZE];
    double grade;
} student;

int main() {
    char buff[BUFF_SIZE];
    student s = {202311008, "junsang", 4.3};
    student *p = &s;

    printf("%d %s %.1lf\n", p->number, p->name, p->grade);

    return EXIT_SUCCESS;
}