//
//  HeapSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/19.
//

#include "HeapSort.hpp"
#include <iostream>

static void siftR(unSortedList6 R,int k,int m){
    
    int i,j,x;
    
    i = k;
    
    j = 2 * i;
    
    x = R[k].key;
    
    recodeType t = R[k];
    
    while (j <= m) {
        if((j < m) && (R[j].key > R[j+1].key)){
            j++;
        }
        if(x < R[j].key)break;
        else{
            R[i] = R[j];
            i = j;
            j = 2 * i;
        }
    }
    R[i] = t;
}

static void swapR(unSortedList6 R,int min,int i){
    recodeType temp = R[min];
    R[min] = R[i];
    R[i] = temp;
}



static void heapSortR(unSortedList6 R,int n){
    
    int i;
    
    for (i = (n/2); i >= 1; i--) {
        siftR(R, i, n);
    }
    std::cout << "初始化堆 \n";
    for (int j=1; j < 9; j++) {
        std::cout <<R[j].key<<" ";
    }
    std::cout <<"\n";
    
    for (i = n; i>=2; i--) {
        swapR(R,1,i);
        siftR(R,1,i-1);
    }
    
}


static void printHeapSort(){
    std::cout << "进行待排序数组初始化 \n";
    unSortedList6 rc6;
    rc6[0].key = 0;
    rc6[1].key = 65;
    rc6[2].key = 88;
    rc6[3].key = 55;
    rc6[4].key = 34;
    rc6[5].key = 92;
    rc6[6].key = 27;
    rc6[7].key = 13;
    rc6[8].key = 40;
    int i = 1;
    for (; i< 9; i++) {
        std::cout <<rc6[i].key<<" ";
    }
    std::cout << "\n";
    heapSortR(rc6,8);
    std::cout << "结束排序并输出结果： \n";
    i = 1;
    for (; i< 9; i++) {
        std::cout <<rc6[i].key<<" ";
    }
};
