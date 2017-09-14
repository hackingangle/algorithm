//
// Created by hackingangle on 2017/9/14.
//

#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H

#include <iostream>
#include <assert.h>

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

    /**
     * is sort for assert
     * @tparam T
     * @param willCheckArray
     * @param len
     * @return
     */
    template<typename T>
    bool isSorted(T willCheckArray, int len) {
        for (int i = 0; i < len - 1; i++) {
            if (willCheckArray[i] > willCheckArray[i+1]) {
                return false;
            }
        }
        return true;
    }

    /**
     * test sort
     * 1, assert is sorted
     * 1, time cost
     * @tparam T
     * @param sortName
     * @param willSortArray
     * @param len
     * @param sort
     */
    template<typename T>
    void testSort(std::string sortName, T willSortArray[], int len, void (*sort)(T[], int)) {
        clock_t startTime = clock();
        sort(willSortArray, len);
        clock_t endTime = clock();
        assert(isSorted(willSortArray, len));
        std::cout << sortName << ":" << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << std::endl;
    }

    /**
     * copy int array
     * not T as: class deep copy knowledge is too heavy
     * @param fromArray
     * @param len
     * @return
     */
    int* copyIntArray(int fromArray[], int len) {
        int* ret = new int[len];
        std::copy(fromArray, fromArray+len, ret);
        return ret;
    }
}
#endif //SELECTIONSORT_SORTTESTHELPER_H
