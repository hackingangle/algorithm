//
// Created by hackingangle on 2017/9/13.
//

#ifndef SELECTIONSORT_STUDENT_H
#define SELECTIONSORT_STUDENT_H

#include <iostream>
struct Student {
    std::string name;
    int score;
    /**
     * 运算符重载
     * @param otherStudent
     * @return
     */
    bool operator>(const Student &otherStudent) {
        return score != otherStudent.score ? score > otherStudent.score : name > otherStudent.name;
    }
    /**
     * 友元！！！不懂啊，需要看C++
     * @param os
     * @param student
     * @return
     */
    friend std::ostream& operator<<(std::ostream &os, const Student &student) {
        os << "Student: " << student.name << " " << student.score << std::endl;
        return os;
    }
};
#endif //SELECTIONSORT_STUDENT_H
