//
//  SearchBST.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/26.
//

#ifndef SearchBST_hpp
#define SearchBST_hpp

#include <stdio.h>
#include <iostream>

//二叉树链表
typedef struct bstnode{
    int data;
    struct bstnode *lchild,*rchild;
}BSTNode,*BSTree;

static BSTree bst;

static BSTNode *f;

#endif /* SearchBST_hpp */
