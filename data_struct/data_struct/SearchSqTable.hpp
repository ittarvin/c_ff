//
//  SearchSqTable.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/25.
//

#ifndef SearchSqTable_hpp
#define SearchSqTable_hpp

#include <stdio.h>


#include "StraightInsertSort.hpp"

const int max_zise = 20;

typedef struct SeqTable{
    recodeType  elem[max_zise + 1];
    int n;
}SeqTable;


#endif /* SearchSqTable_hpp */
 
