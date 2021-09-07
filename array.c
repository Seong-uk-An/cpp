#include <stdio.h>

int main(void)
{
    // 배열
    // int subway_array[3];
    // subway_array[0] = 20;
    // subway_array[1] = 30;
    // subway_array[2] = 40;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("지하철%d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
    // }

    //값 설정 방법
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[] = {1, 2};
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f\n", arr_f[i]);
    // }

    // char str[] = "coding";
    // // printf("%s\n", str);
    // // printf("%lu\n", sizeof(str));

    // for (int i = 0; i < sizeof(str); i++)
    // {
    //     printf("%c\n", str[i]);
    // }

    // char kor[] = "나도코딩";
    // printf("%s\n", kor);
    // printf("%lu\n", sizeof(kor));

    // char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
    // char c_array[6] = {'c', 'o', 'd', 'i', 'n', 'g'};
    // printf("%s\n", c_array);

    // char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    // printf("%s\n", c_array);
    // for (int i = 0; i < sizeof(c_array); i++)
    // {
    //     printf("%c\n", c_array[i]);
    // }
    // for (int i = 0; i < sizeof(c_array); i++)
    // {
    //     printf("%d\n", c_array[i]);
    // }

    // char name[256];
    // printf("이름이 뭐에요? ");
    // scanf("%s", name, sizeof(name));
    // printf("%s\n", name);

    // ASCII code
    // printf("%c\n", '0');
    // printf("%d\n", '0');

    for (int i = 0; i < 128; i++)
    {
        printf("아스키 코드 %d : %c\n", i, i);
    }

    return 0;
}