#include<stdio.h>
/**
 * 控制台输出数组
 * @param  array      数组
 * @param  arrayCount 个数
 * @return            flag
 */
int printArr(int *array, int arrayCount);
/**
 * 冒泡排序，比较次数为：n!
 * @param  array      数组
 * @param  arrayCount 数量
 * @return            flag
 */
int sortArr(int *array, int arrayCount);

int main()
{
    int numbersCount = 5;
    int numbers[] = {1, 109, 8, 2, 98};
    printArr(numbers, numbersCount);
    sortArr(numbers, numbersCount);
    printArr(numbers, numbersCount);
}

int printArr(int *array, int arrayCount) 
{
    for (int i = 0; i < arrayCount; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 1;
}

int sortArr(int *array, int arrayCount) 
{
    int exeCount = 0;
    for (int i = 0; i < arrayCount; ++i)
    {
        for (int j = 0; j < arrayCount-i; ++j)
        {
            if (array[j] > array[j+1])
            {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
            exeCount++;
            printf("执行：%d次\n", exeCount);
        }
    }
    return 1;
}
