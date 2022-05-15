//
//  MergeSort.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/15.
//

#include "MergeSort.hpp"


void merge(unSortedList4 a,unSortedList4 R,int h,int m,int n){
    
    int k = h;
    int j = m + 1;
    
    while ((h<=m) && (j<=n)) {
        
        if(a[k].key <= a[j].key){
            R[k].key = a[j].key;
            h++;
        }else{
            R[k].key = a[j].key;
            j++;
        }
        k++;
    }
    
    while (h<=m) {
        R[k].key = a[h].key;
        h++;
        k++;
    }
    
    while (j<=n) {
        R[k].key = a[j].key;
        j++;
        k++;
    }
    
    
}
