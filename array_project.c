#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_array_project(void)
{
    srand(time(NULL));
    printf("\n=== 아빠는 대머리 게임 ===\n");
    int answer;                 // 사용자 입력값
    int treatment = rand() % 4; // 발모제 선택 0 ~ 3

    int cntShowBottle = 0;     // 이번 게임에 보여줄 병 갯수
    int prevCntShowBottle = 0; // 앞 게임에 보여준 병 갯수

    // 3번의 기회
    for (int i = 1; i <= 3; i++)
    {
        int bottle[4] = {0, 0, 0, 0};
        do
        {
            cntShowBottle = rand() % 2 + 2;
        } while (cntShowBottle == prevCntShowBottle);

        prevCntShowBottle = cntShowBottle;

        int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는가?
        printf("\n\n%d 번째 시도 : ", i);

        for (int j = 0; j < cntShowBottle; j++)
        {
            int randomBottle = rand() % 4;

            if (bottle[randomBottle] == 0)
            {
                bottle[randomBottle] = 1;
                if (randomBottle == treatment)
                {
                    isIncluded = 1;
                }
            }
            else
            {
                j--;
            }
        }

        // 사용자에게 문제 표시
        for (int k = 0; k < 4; k++)
        {
            if (bottle[k] == 1)
            {
                printf("%d\n", k + 1);
            }
        }
        printf("물약을 머리에 바릅니다.\n\n");

        if (isIncluded == 1)
        {
            printf("성공\n!");
        }
        else
        {
            printf("실패 ㅠㅠ\n");
        }

        printf("Press any key\n");
        getchar();
    }

    printf("\n정답은? : ");
    scanf("%d", &answer);

    if (answer == treatment + 1)
    {
        printf("정답!\n");
    }
    else
    {
        printf("X!! The answer is %d\n", treatment + 1);
    }

    return 0;
}