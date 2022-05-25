//
//  SearchBin.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/25.
//

#ifndef SearchBin_hpp
#define SearchBin_hpp
#include "StraightInsertSort.hpp"

#include <stdio.h>

const int bin_max_zise = 9;

typedef struct BinTable{
    recodeType  elem[bin_max_zise + 1];
    int n;
}BinTable;


#endif /* SearchBin_hpp */
