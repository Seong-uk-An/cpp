#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // srand(time(NULL)); //난수 초기화
    // int num = rand() % 3; //0 ~ 2

    // printf("난수 초기화 이전.. \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", rand() % 10);
    // }

    // srand(time(NULL)); //난수 초기화
    // printf("난수 초기화 이후.. \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", rand() % 10);
    // }

    // 가위 = 0, 바위 = 1, 보 = 2
    // srand(time(NULL));
    // int i = rand() % 3; // 0 ~ 2 반환
    // if (i == 0)
    // {
    //     printf("가위\n");
    // }
    // else if (i == 1)
    // {
    //     printf("바위\n");
    // }
    // else if (i == 2)
    // {
    //     printf("보\n");
    // }
    // else
    // {
    //     printf("몰라요");
    // }

    // srand(time(NULL));
    // int i = rand() % 3; // 0 ~ 2 반환
    // switch (i)
    // {
    // case 0:
    //     printf("가위\n");
    //     break;
    // case 1:
    //     printf("바위\n");
    //     break;
    // case 2:
    //     printf("보\n");
    //     break;
    // default:
    //     printf("몰라요\n");
    // }

    // Up and Down
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
    printf("숫자 : %d\n", num);
    int answer;     // 정답
    int chance = 5; // 기회
    while (1)
    {
        printf("남은 기회 %d번\n", chance--);
        printf("숫자를 맞혀보세요 (1 ~ 100) : ");
        scanf("%d", &answer);
        if (answer > num)
        {
            printf("DOWN\n\n");
        }
        else if (answer < num)
        {
            printf("UP\n\n");
        }
        else if (answer == num)
        {
            printf("정답입니다! \n\n");
            break;
        }
        else
        {
            printf("알 수 없는 오류가 발생하였습니다. \n\n");
        }

        if (chance == 0)
        {
            printf("모든 기회를 소진하셨네요. 실패!\n\n");
            break;
        }
    }

    return 0;
}