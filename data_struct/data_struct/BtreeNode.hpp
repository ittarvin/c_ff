//
//  BtreeNode.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#ifndef BtreeNode_hpp
#define BtreeNode_hpp

#include <stdio.h>

namespace btree{
    //二叉树链表
    typedef struct btnode{
        char data;
        struct btnode *lchild,*rchild;
    }*BinTree;

    //三叉链表
    typedef struct ttnode{
        char data;
        struct ttnode *lchild,*parent,*rchild;
    }*TBinTree;
};

#endif /* BtreeNode_hpp */
