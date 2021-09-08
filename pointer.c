#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int *ptr);

int main_pointer(void)
{
    // 포인터

    // [철수] : 101호 -> 메모리 공간의 주소
    // [영희] : 201호
    // [민수] : 301호
    // 문 앞에 "암호"가 걸려있음.
    // int charles = 1;
    // int young = 2;
    // int min = 3;

    // printf("address of charles : %p, password : %d\n", &charles, charles);
    // printf("address of charles : %p, password : %d\n", &young, young);
    // printf("address of charles : %p, password : %d\n", &min, min);

    // // 첫 번째 미션 : 문에 적힌 암호 확인하는 미션
    // int *missionMan;
    // missionMan = &charles;
    // printf("address where missionMan visits : %p, password : %d\n", missionMan, *missionMan);
    // missionMan = &young;
    // printf("address where missionMan visits : %p, password : %d\n", missionMan, *missionMan);
    // missionMan = &min;
    // printf("address where missionMan visits : %p, password : %d\n", missionMan, *missionMan);

    // // 두 번째 미션 : 각 암호에 3을 곱해주자
    // missionMan = &charles;
    // *missionMan = *missionMan * 3;
    // printf("address : %p, changed password : %d\n", missionMan, *missionMan);
    // missionMan = &young;
    // *missionMan = *missionMan * 3;
    // printf("address : %p, changed password : %d\n", missionMan, *missionMan);
    // missionMan = &min;
    // *missionMan = *missionMan * 3;
    // printf("address : %p, changed password : %d\n", missionMan, *missionMan);

    // // 스파이
    // // 미션맨이 바꾼 암호에서 2를 빼라
    // int *spy = missionMan;
    // printf("\n ... A spy is doing his mission ...\n");
    // spy = &charles;
    // *spy = *spy - 2;
    // printf("address : %p, changed password : %d\n", spy, *spy);
    // spy = &young;
    // *spy = *spy - 2;
    // printf("address : %p, changed password : %d\n", spy, *spy);
    // spy = &min;
    // *spy = *spy - 2;
    // printf("address : %p, changed password : %d\n", spy, *spy);

    // printf("%p\n", &missionMan);
    // printf("%p\n", &spy);

    // int arr[3] = {5, 10, 15};
    // int *ptr = arr;
    // // for (int i = 0; i < 3; i++)
    // // {
    // //     printf("%d\n%d\n", *(arr + i), *(ptr + i));
    // // }

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 3;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n%d\n", arr[i], ptr[i]);
    // }

    // printf("%d\n", *arr);
    // printf("%d\n", *&arr[0]);

    // int a = 10;
    // int b = 20;
    // printf("\nbefore the function 'Swap' : a=%d, b=%d\n", a, b);
    // swap(a, b);
    // printf("after the function 'Swap' : a=%d, b=%d\n", a, b);

    // // 함수에 그냥 값이 아닌 주소값을 넘긴다
    // printf("\naddress before the function 'Swap' : a=%d, b=%d\n", a, b);
    // swap_addr(&a, &b);
    // printf("address after the function 'Swap' : a=%d, b=%d\n\n", a, b);

    int arr2[3] = {10, 20, 30};
    changeArray(&arr2[0]);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("in the function 'Swap' : a=%d, b=%d\n", a, b);
}

void swap_addr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("address in the function 'Swap' : a=%d, b=%d\n", *a, *b);
}

void changeArray(int *ptr)
{
    ptr[2] = 50;
}