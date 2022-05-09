//
//  SeqStack.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/9.
//

#ifndef SeqStack_hpp
#define SeqStack_hpp

#include <stdio.h>
#include "BtreeNode.hpp"

using namespace btree;


namespace stack{

    const int maxsize = 20;

    typedef struct seqstack{
       BinTree data[maxsize];
       int top;
    }*SeqStack;

};







#endif /* SeqStack_hpp */
