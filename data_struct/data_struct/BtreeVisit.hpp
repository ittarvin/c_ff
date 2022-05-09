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
#include "CycQue.hpp"
#include "CycQue.cpp"

using namespace btree;
using namespace que;

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

//求二叉树高度
static int Height(BinTree bt){
    int lh,rh;
    if(bt == NULL) return 0;
    else
    {
        lh = Height(bt -> lchild);
        rh = Height(bt -> rchild);
        return 1 + (lh > rh ? lh : rh);
    }
}

//层次遍历
static void levelorder(BinTree bt){
    CycQue Q = (cycqueue *)malloc(sizeof(cycqueue));
    InitQueue(Q);
    if(bt!=NULL){
        EnQueue(Q,bt);
        while(!EmptyQueue(Q)){
            BinTree p = GetHead(Q);
            OutQueue(Q);
            visit(p);
            if(p -> lchild != NULL){
                EnQueue(Q,p -> lchild);
            }
            if(p -> rchild != NULL){
                EnQueue(Q,p -> rchild);
            }
        }
    }
}



#endif /* BtreeVisit_hpp */
