#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_SIZE 64

typedef struct{
    unsigned short day;
    unsigned short month;
    unsigned short year;
} date;

typedef struct{
    unsigned int number;
    char name[NAME_SIZE];
    float grade;
    date date;
} student;

int main() {
    student s;
    date d = {1, 10, 2003};

    s.number = 202311008;
    strncpy(s.name, "junsang", NAME_SIZE);
    s.grade = 4.3;
    s.date = d;
    printf("%d %s %lf 의 생일은 %hd %hd %hd\n", s.number, s.name, s.grade, s.date.year, s.date.month, s.date.day);

    return EXIT_SUCCESS;
}