#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int level;
int arrayFish[6];
int *cursor;

void initData();
void printFishes();
void decreaseWater(long prevElapsedTime);

int main(void)
{
    long startTime = 0;
    long totalElapsedTime = 0;
    long prevElapsedTime = 0;

    int num;
    initData();

    cursor = arrayFish;

    startTime = clock();
    while (1)
    {
        printFishes();
        printf("\nWhich fishbowl do you want to pick?( 1 ~ 6 )\n");
        scanf("%d", &num);

        //입력값 체크
        if (num < 1 || num > 6)
        {
            printf("\nYou wrote the wrong number.\n");
            continue;
        }

        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;

        printf("총 경과시간 : %ld초\n", totalElapsedTime);
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과시간 : %ld초\n", prevElapsedTime);

        decreaseWater(prevElapsedTime);

        if (cursor[num - 1] <= 0)
        {
            printf("The fish you clicked alreay dead... Please click the other fish.");
        }
        else if (cursor[num - 1] + 1 <= 100)
        {
            printf("%d", num);
            cursor += 1;
        }

        if (totalElapsedTime / 20 > level - 1)
        {
            level++;
            printf("LEVEL UP! %d => %d\n", level - 1, level);
        }

        if (level == 5)
        {
            printf("Master! Finish game.\n");
            exit(0);
        }
    }

    return 0;
}

void initData()
{
    level = 1;
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100;
    }
}

void printFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++)
    {
        printf(" %4d ", arrayFish[i]);
    }
}

void decreaseWater(long prevElapsedTime)
{
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] -= level * 3 * (int)prevElapsedTime;
        if (arrayFish[i] <= 0)
        {
            arrayFish[i] = 0;
        }
    }
}