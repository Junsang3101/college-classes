#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_SIZE 100

typedef struct {
    int number;
    char name[100];
    double grade;
} student;

int main() {
    char buffer[BUFF_SIZE];
    char c;
    student s;
    
    
    printf("학번 : ");
    scanf("%d", &s.number);
    while ((c = getchar()) != '\n' && c != EOF);
    
    printf("이름 : ");
    if (fgets(buffer, BUFF_SIZE, stdin) == NULL) {
        return EXIT_FAILURE;
    } else {
        char *nextline_ptr;
        nextline_ptr = strchr(buffer, '\n');
        if (nextline_ptr != NULL) *nextline_ptr = '\0';
    }
    strncpy(s.name, buffer, 100);
    
    printf("학점 : ");
    scanf("%lf", &s.grade);
    while ((c = getchar()) != '\n' && c != EOF);
    
    printf("학번 : %d\n이름 : %s\n학점 : %.1lf\n", s.number, s.name, s.grade);
    
    return EXIT_SUCCESS;
}