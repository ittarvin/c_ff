//
//  QuickSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/15.
//

#include "QuickSort.hpp"
#include <iostream>

static int quickPartition(unSortedList3 R,int low,int high){
    int x = R[low].key;
    while (low < high) {
        while ((low<high) && R[high].key >= x) {
            high --;
        }
        R[low] = R[high];
        while ((low<high)&&R[low].key <= x) {
            low ++;
        }
        R[high] = R[low];
    }
    R[low].key = x;
    return low;
}

static void quickSort(unSortedList3 R,int low,int high){
    if(low < high){
        int idx = quickPartition(R, low, high);
        quickSort(R,low,idx-1);
        quickSort(R,idx+1,high);
    }
}



static void printQuickSort(){
    std::cout << "进行待排序数组初始化 \n";
    unSortedList3 rc3;
    rc3[0].key = 45;
    rc3[1].key = 38;
    rc3[2].key = 66;
    rc3[3].key = 90;
    rc3[4].key = 88;
    rc3[5].key = 10;
    rc3[6].key = 25;
    rc3[7].key = 45;
    int i = 0;
    for (; i< n; i++) {
        std::cout <<rc3[i].key<<" ";
    }
    std::cout << "\n";
    quickSort(rc3,0,7);
    std::cout << "结束排序并输出结果： \n";
    i = 0;
    for (; i< n; i++) {
        std::cout <<rc3[i].key<<" ";
    }
};
