#include <iostream>

/**
 * 选择排序
 * 通过std::swap直接排序willSortArr
 * @param willSortArr
 * @param len
 */
void selectionSort(int willSortArr[], int len)
{
    for (int i = 0; i < len; i++) {
        int minPosition = i;
        for (int j = i+1; j < len; j++) {
            if (willSortArr[minPosition] > willSortArr[j]) {
                minPosition = j;
            }
        }
        std::swap(willSortArr[i], willSortArr[minPosition]);
    }
}

/**
 * 输出
 * @param willPrintArr
 * @param len
 */
void printArr(int willPrintArr[], int len) {
    for (int i = 0; i < len; i++) {
        std::cout << willPrintArr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int willSortNums[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(willSortNums, 10);
    printArr(willSortNums, 10);
    return 0;
}