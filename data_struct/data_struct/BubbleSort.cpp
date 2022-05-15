//
//  BubbleSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/15.
//

#include "BubbleSort.hpp"
#include <iostream>

static void bubbleSort(unSortedList2 R,int n){
    int i,j,temp,endsort;
    for (i = 0; i<n; i++) {
        endsort = 0;
        for (j = 0; j<n-i; j++) {
            if(R[j].key > R[j+1].key){
                temp = R[j].key;
                R[j].key = R[j+1].key;
                R[j+1].key = temp;
                endsort = 1;
            }
        }
        if(endsort == 0)break;
    }
}


static void printBubbleSort(){
    std::cout << "进行待排序数组初始化 \n";
    unSortedList2 rc2;
    rc2[0].key = 45;
    rc2[1].key = 38;
    rc2[2].key = 66;
    rc2[3].key = 90;
    rc2[4].key = 88;
    rc2[5].key = 10;
    rc2[6].key = 25;
    rc2[7].key = 45;
    int i = 0;
    for (; i< n; i++) {
        std::cout <<rc2[i].key<<" ";
    }
    std::cout << "\n";
    bubbleSort(rc2,n);
    std::cout << "结束排序并输出结果： \n";
    i = 0;
    for (; i< n; i++) {
        std::cout <<rc2[i].key<<" ";
    }
};
