//
//  SearchSqTable.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/25.
//

#include "SearchSqTable.hpp"
#include <iostream>

static int searchSqTable(SeqTable t,int key){
    t.elem[0].key = key;
    int i = t.n;
    while (t.elem[i].key != key) {
        i --;
    }
    return  i;
}

static void printSearchSqTable(){
    std::cout << "进行顺序表数组初始化 \n";
    SeqTable rc2;
    rc2.elem[0].key = 45;
    rc2.elem[1].key = 38;
    rc2.elem[2].key = 66;
    rc2.elem[3].key = 90;
    rc2.elem[4].key = 88;
    rc2.elem[5].key = 10;
    rc2.elem[6].key = 25;
    rc2.elem[7].key = 45;
    int i = 0;
    rc2.n = 10;
    for (; i< n; i++) {
        std::cout <<rc2.elem[i].key<<" ";
    }
    std::cout << "\n";
    std::cout << "顺序查找输出结果： " << searchSqTable(rc2,88) <<"\n";
};
