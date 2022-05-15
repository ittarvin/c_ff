//
//  StraightInsertSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/14.
//

#include "StraightInsertSort.hpp"
#include <iostream>


static void straightInsertSort(unSortedList R,int n){
    int i,j;
    for (i = 2; i <=n ;i ++) {
        R[0].key = R[i].key;
        j = i - 1;
        while (R[0].key < R[j].key) {
            R[j+1] = R[j];
            j --;
        }
        R[j + 1].key = R[0].key;
    };
};


static void printStraightInsertSort(){
    std::cout << "进行待排序数组初始化 \n";
    unSortedList rc;
    rc[0].key = 0;
    rc[1].key = 45;
    rc[2].key = 38;
    rc[3].key = 66;
    rc[4].key = 90;
    rc[5].key = 88;
    rc[6].key = 10;
    rc[7].key = 25;
    rc[8].key = 45;
    int i = 0;
    for (; i<=n; i++) {
        std::cout <<rc[i].key<<" ";
    }
    std::cout << "\n";
    straightInsertSort(rc,n);
    std::cout << "结束排序并输出结果： \n";
    i = 0;
    for (; i<=n; i++) {
        std::cout <<rc[i].key<<" ";
    }
};
