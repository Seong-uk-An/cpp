#include <stdio.h>
int main(void)
{
    // int age = 15;
    // printf("%d\n",age);
    // age = 13;
    // printf("%d\n",age);

    // float f = 46.5;
    // printf("%.2f\n", f);
    // double d = 54.428;
    // printf("%.2lf\n", d);

    // const int YEAR = 1997;
    // printf("태어난 년도 : %d\n", YEAR);

    // int add = 3 + 7;
    // printf("3 + 7 = %d\n", add);
    // printf("%d + %d = %d\n", 3, 7, 10);

    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);

    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫 번째 값 : %d\n", one);
    // printf("두 번째 값 : %d\n", two);
    // printf("세 번째 값 : %d\n", three);

    // char c = 'A';
    // printf("%c\n", c);

    char str[10];
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);

    return 0;
}