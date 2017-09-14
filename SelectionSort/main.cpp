#include <iostream>
#include "Student.h"
#include "SortTestHelper.h"

/**
 * 选择排序
 * 通过std::swap直接排序willSortArr
 * @param willSortArr
 * @param len
 */
template <typename T>
void selectionSort(T willSortArr[], int len)
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

int main() {
    int willSortNums[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(willSortNums, 10);
    SortTestHelper::printArr(willSortNums, 10);

    float willSortFloatNums[10] = {10.1, 9.9, 8.8, 7.7, 6.6, 5.5, 4.4, 3.3, 2.2, 1.1};
    selectionSort(willSortFloatNums, 10);
    SortTestHelper::printArr(willSortFloatNums, 10);

    std::string willSortString[5] = {"f", "e", "d", "b", "a"};
    selectionSort(willSortString, 5);
    SortTestHelper::printArr(willSortString, 5);

    Student students[5] = {{"A", 10}, {"C", 98}, {"B", 98}, {"D", 93}, {"E",83}};
    selectionSort(students, 5);
    SortTestHelper::printArr(students, 5);

    // random 1000 int numbers
    int* intHugeArray = SortTestHelper::generateRandomArray(1000, 0, 1000);
    SortTestHelper::printArr(intHugeArray, 1000);
    return 0;
}