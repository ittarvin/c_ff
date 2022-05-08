//
//  BtreeVisit.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#ifndef BtreeVisit_hpp
#define BtreeVisit_hpp

#include <stdio.h>
#include <iostream>

#include "BtreeNode.hpp"

using namespace btree;

static void visit(BinTree bt){
    char v = bt -> data;
    std::cout << " "<< v << " ";
};

//先序遍历
static void preorder(BinTree bt){
    if(bt!=NULL){
        visit(bt);
        preorder(bt -> lchild);
        preorder(bt -> rchild);
    }
}

//中序遍历
static void inorder(BinTree bt){
    if(bt!=NULL){
        inorder(bt -> lchild);
        visit(bt);
        inorder(bt -> rchild);
    }
}

//后序遍历
static void postorder(BinTree bt){
    if(bt!=NULL){
        postorder(bt -> lchild);
        postorder(bt -> rchild);
        visit(bt);
    }
}


#endif /* BtreeVisit_hpp */
