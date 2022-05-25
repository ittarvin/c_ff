//
//  SearchBin.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/25.
//

#include "SearchBin.hpp"
#include <iostream>


static int searchBin(BinTable t,int key){
    
    int low,high;
    
    low = 1,high= t.n;
    
    while (low <= high) {
        int mid = (low + high)/2;
        if(key == t.elem[mid].key)
            return mid;
        else if(key<t.elem[mid].key)high =mid-1;
        else low = mid +1;
    }

    return 0;
}

static void printSearchBin(){
    std::cout << "进行顺序表数组初始化 \n";
    BinTable rc0;
    rc0.elem[0].key = 0;
    rc0.elem[1].key = 10;
    rc0.elem[2].key = 13;
    rc0.elem[3].key = 17;
    rc0.elem[4].key = 20;
    rc0.elem[5].key = 30;
    rc0.elem[6].key = 55;
    rc0.elem[7].key = 68;
    rc0.elem[8].key = 89;
    rc0.elem[9].key = 95;
    int i = 0;
    rc0.n = 9;
    for (; i< n; i++) {
        std::cout <<rc0.elem[i].key<<" ";
    }
    std::cout << "\n";
    std::cout << "二分查找输出结果： " << searchBin(rc0,17) <<"\n";
};


