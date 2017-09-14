//
// Created by hackingangle on 2017/9/14.
//

#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H

#include <iostream>

namespace SortTestHelper {
    /**
     * 输出
     * @param willPrintArr
     * @param len
     */
    template <typename T>
    void printArr(T willPrintArr[], int len) {
        for (int i = 0; i < len; i++) {
            std::cout << willPrintArr[i] << " ";
        }
        std::cout << std::endl;
    }

    /**
     * random int array
     * @param len
     * @param rangeL
     * @param rangeR
     * @return
     */
    int* generateRandomArray(int len, int rangeL, int rangeR) {
        int* ret = new int[len];
        srand(time(NULL));
        for (int i = 0; i < len; i++) {
            ret[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return ret;
    }
}
#endif //SELECTIONSORT_SORTTESTHELPER_H
