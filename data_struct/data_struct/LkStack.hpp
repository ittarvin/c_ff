//
//  LkStack.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/9.
//

#ifndef LkStack_hpp
#define LkStack_hpp

#include <stdio.h>
#include "BtreeNode.hpp"

using namespace btree;

namespace lkstack{

    typedef struct lknode{
       BinTree data;
       struct lknode *next;
    }*LKStack;

};


#endif /* LkStack_hpp */
