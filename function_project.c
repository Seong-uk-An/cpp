#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
    // 문이 5개 있고, 각 문마다 점점 어려운 문제가 출제됩니다. (랜덤)
    // 맞히면 통과, 틀리면 실패

    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        // x + y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        // printf("%d x %d = ?",num1,num2);
        showQuestion(i, num1, num2);

        int answer;
        scanf("%d", &answer);
        if (answer == 0)
        {
            printf("0을 누르셨습니다. 프로그램을 종료합니다.\n");
            exit(0);
        }
        else if (answer == num1 * num2)
        {
            success();
            count++;
        }
        else
        {
            fail();
        }
    }

    printf("당신은 5개의 비밀번호 중 %d개를 맞혔습니다.\n", count);

    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
    printf("\n########## %d번 째 비밀번호 ##########\n", level);
    printf("\n\t %d x %d 는 ?\n\n", num1, num2);
    printf("################\n");
    printf("비밀번호를 입력하세요 ( 종료하시려면 0을 누르세요 ) : ");
}

void success()
{
    printf("\n정답입니다!\n");
}

void fail()
{
    printf("\n틀렸습니다ㅠㅠ\n");
}