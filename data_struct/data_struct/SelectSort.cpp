//
//  SelectSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/15.
//

#include "SelectSort.hpp"
#include <iostream>


static void swapKey(unSortedList4 R,int min,int i){
    int temp = R[min].key;
    R[min].key = R[i].key;
    R[i].key = temp;
}

static void selectSort(unSortedList4 R,int n){
    int min,i,j;
    for (i = 0; i < n -1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if(R[j].key < R[min].key){
                min = j;
            }
        }
        if(min != i){
            swapKey(R,min,i);
        }
    }
}



static void printSelectSort(){
    std::cout << "进行待排序数组初始化 \n";
    unSortedList4 rc4;
    rc4[0].key = 45;
    rc4[1].key = 38;
    rc4[2].key = 66;
    rc4[3].key = 90;
    rc4[4].key = 88;
    rc4[5].key = 10;
    rc4[6].key = 25;
    rc4[7].key = 45;
    int i = 0;
    for (; i< n; i++) {
        std::cout <<rc4[i].key<<" ";
    }
    std::cout << "\n";
    selectSort(rc4,8);
    std::cout << "结束排序并输出结果： \n";
    i = 0;
    for (; i< n; i++) {
        std::cout <<rc4[i].key<<" ";
    }
};
