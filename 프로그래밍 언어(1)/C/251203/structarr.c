#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3
#define NAME_SIZE 32

typedef struct {
    int number;
    char name[NAME_SIZE];
    double grade;
} student;

int main() {
    student list[SIZE];
    char buff[NAME_SIZE];
    char c; // buffer clean variable

    for (int i=0; i<=SIZE-1; i++) {
        printf("%d번째 학생 학번 : ", i+1);
        scanf("%d", &list[i].number);
        while((c = getchar()) != '\n' && c == EOF);

        printf("%d번째 학생 이름 : ", i+1);
        if (fgets(buff, NAME_SIZE, stdin) != NULL) {
            char *nextline_ptr;
            nextline_ptr = strchr(buff, '\n');
            if (nextline_ptr != NULL) *nextline_ptr = '\0';
        } else {
            return EXIT_FAILURE;
        }
        strncpy(list[i].name, buff, NAME_SIZE);

        printf("%d번째 학생 학점 : ", i+1);
        scanf("%lf", &list[i].grade);
        while((c = getchar()) != '\n' && c == EOF);
    }

    for (int i=0; i<=SIZE-1; i++) {
        printf("%d번째 학생 학번 : %d\n", i+1, list[i].number);
        printf("%d번째 학생 이름 : %s\n", i+1, list[i].name);
        printf("%d번째 학생 학점 : %.1lf\n", i+1, list[i].grade);
    }

    return EXIT_SUCCESS;
}