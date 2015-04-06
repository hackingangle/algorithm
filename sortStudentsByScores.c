#include<stdio.h>
/**
 * bubble sort
 * 实际情况的使用,关联了用户名
 */
struct student {
    char name[30];
    int score;
};
int main() 
{
    struct student stu[100],tmp;
    int studentNum = 0;
    printf("%s:", "输入个数");
    scanf("%d", &studentNum);
    for (int i = 0; i < studentNum; ++i)
    {
        scanf("%s %d", stu[i].name, &stu[i].score);
    }

    for (int i = 0; i < studentNum; ++i)
    {
        for (int j = 0; j < studentNum - i; ++j)
        {
            if (stu[j].score < stu[j+1].score)
            {
                tmp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < studentNum; ++i)
    {
        printf("第%d名：%s %d分\n", i, stu[i].name, stu[i].score);
    }
}
