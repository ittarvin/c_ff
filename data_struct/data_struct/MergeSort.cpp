//
//  MergeSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/15.
//

#include "MergeSort.hpp"
#include <iostream>

static void merge(unSortedList5 a, unSortedList5 R,int h,int m,int n){
        
    int k = h;
    int j = m;
    
    while ((h<m) && (j<n)) {
        
        if(a[h].key <= a[j].key){
            R[k] = a[h];
            h++;
        } else {
            R[k] = a[j];
            j++;
        }
        
        k++;
    }
    
    while (h<m) {
        R[k] = a[h];
        h++;
        k++;
    }
    
    while (j<n) {
        R[k] = a[j];
        j++;
        k++;
    }
    

    for (int i=0; i< n; i++) {
        std::cout <<a[i].key<<" ";
    }
    
    std::cout <<" --> ";
    
    for (int i=0; i< n; i++) {
        std::cout <<R[i].key<<" ";
    }
    
}


static void mergePass(unSortedList5 a,unSortedList5 b,int n,int h){
    
    int i=1;
    
    std::cout << "合并前a数组内容\n";
    for (int i=0; i<n; i++) {
        std::cout <<a[i].key<<" ";
    }
    
    std::cout << "\n";
    
    while (i<=n-2*h+1) {
        std::cout << "合并过程:";
        merge(a, b, i-1, i+h-1,i+2*h-1);
        std::cout << "\n";
        i += 2*h; 
    }

    
    if(i+h-1<n){
        merge(a, b,i-1, i+h-1, n);
    }else{
        for (int t=i-1; t<=n; t++) {
            b[t] = a[t];
        }
    }
}

static void mergeSort(unSortedList5 a,int n){
    int m = 1;
    unSortedList5 b;
    while (m < n) {
        std::cout << "------------------------------合并元素长度（"<<m<<"）\n";
        mergePass(a, b, n, m);
        m = 2 * m;
        std::cout << "\n";
        std::cout << "------------------------------合并元素长度（"<<m<<"）\n";
        mergePass(b, a, n, m);
        m = 2 * m;
   
    }
}


static void printMergeSort(){
    std::cout << "进行待排序数组初始化 \n";
    unSortedList5 rc5;
    rc5[0].key = 45;
    rc5[1].key = 38;
    rc5[2].key = 66;
    rc5[3].key = 90;
    rc5[4].key = 88;
    rc5[5].key = 10;
    rc5[6].key = 25;
    rc5[7].key = 45;
    int i = 0;
    for (; i< n; i++) {
        std::cout <<rc5[i].key<<" ";
    }
    std::cout << "\n";
    mergeSort(rc5,n);
    std::cout << "结束排序并输出结果： \n";
    i = 0;
    for (; i< n; i++) {
        std::cout <<rc5[i].key<<" ";
    }
};


