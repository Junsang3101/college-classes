#include <stdio.h>
#include <ctype.h>

int main() {
    int total = 0;
    int user_input;
    /*int cnt = 10;*/

    /*
    do while 문은 한 번 실행한 후 반복할지 제어하는 반복문
    */
     /*
    do {
        printf("%d ", cnt--);
    } while (cnt != 0);
    printf("\n");
     */
    do {
        printf("num : ");
        scanf("%d", &user_input);
        if (!isdigit(user_input)) {
            printf("%d\n", isdigit(user_input));
            break;
        }
        printf("total : %d\n", total);

    } while (user_input != 0);

    return 0;
}
