#include <stdio.h>
int main(void)
{
    // int age = 15;
    // printf("%d\n", age);
    // age = 13;
    // printf("%d\n", age);

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

    // char str[10];
    // scanf("%s", str, sizeof(str));
    // printf("%s\n", str);

    //
    //
    //
    //
    //
    //
    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름? 나이? 몸무게? 키? 범죄명?
    char name[256];
    printf("이름이 뭐에요? ");
    scanf("%s", name, sizeof(name));

    int age;
    printf("몇살이에요? ");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇kg 인가요? ");
    scanf("%f", &weight);

    double height;
    printf("키는 몇cm 인가요? ");
    scanf("%lf", &height);

    char what[256];
    printf("무슨 범죄를 저질렀나요? ");
    scanf("%s", what, sizeof(what));

    //조서내용 출력
    printf("\n\n---범죄자 정보---\n\n");
    printf("이름 : %s\n", name);
    printf("나이 : %d\n", age);
    printf("몸무게 : %.1f\n", weight);
    printf("키 : %.1lf\n", height);
    printf("범죄명 : %s\n", what);

    return 0;
}