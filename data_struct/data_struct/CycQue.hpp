//
//  CycQue.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#ifndef CycQue_hpp
#define CycQue_hpp

#include <stdio.h>
#include "BtreeNode.hpp"

using namespace btree;

namespace que{

    const int maxsize = 20;

    typedef struct cycqueue{
       BinTree data[maxsize];
       int front,rear;
    }*CycQue;

};

#endif /* CycQue_hpp */
