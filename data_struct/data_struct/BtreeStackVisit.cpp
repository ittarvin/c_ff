//
//  BtreeStackVisit.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/10.
//

#include "BtreeStackVisit.hpp"

static void visitForStack(BinTree bt){
    char v = bt -> data;
    std::cout << " "<< v << " ";
};

static BinTree initBinTreeForStack(){
    
    std::cout << "进行二叉树初始化 \n";
    
    BinTree A = (btnode *)malloc(sizeof(btnode));
    A -> data = 'A';
    
    BinTree B = (btnode *)malloc(sizeof(btnode));
    B -> data = 'B';
    A -> lchild = B;
    
    BinTree C = (btnode *)malloc(sizeof(btnode));
    C -> data = 'C';
    C -> lchild = NULL;
    A -> rchild = C;
 
    
    BinTree D = (btnode *)malloc(sizeof(btnode));
    D -> data = 'D';
    D -> lchild = NULL;
    D -> rchild = NULL;
    
    B -> lchild = D;
    
    BinTree E = (btnode *)malloc(sizeof(btnode));
    E -> data = 'E';
    E -> rchild = NULL;
    B -> rchild = E;
    
    
    BinTree F = (btnode *)malloc(sizeof(btnode));
    F -> data = 'F';
    F -> lchild = NULL;
    F -> rchild = NULL;
    
    C -> rchild = F;
    
    BinTree G = (btnode *)malloc(sizeof(btnode));
    G -> data = 'G';
    G -> lchild = NULL;
    G -> rchild = NULL;
    E -> lchild = G;
    
    return A;
}

//先序遍历
static void preorderByStack(BinTree bt){
    BinTree p;
    LKStack ls = InitStack();
    if(bt == NULL)return;
    p = bt;
    while (p != NULL
           || !EmptyStack(ls)) {
        
        if(p != NULL){
            visitForStack(p);
            Push(ls, p);
            p = p -> lchild;
        }else{
            p = GetTop(ls);
            Pop(ls);
            p = p -> rchild;
        }
    }
    
}

//中序遍历
static void inorderByStack(BinTree bt){
    BinTree p;
    LKStack ls = InitStack();
    if(bt == NULL)return;
    p = bt;
    while (p != NULL
           || !EmptyStack(ls)) {
        
        if(p != NULL){
            Push(ls, p);
            p = p -> lchild;
        }else{
            p = GetTop(ls);
            Pop(ls);
            visitForStack(p);
            p = p -> rchild;
        }
    }
    
}



static void printBtreeStackVisitNodes(){
    BinTree b = initBinTreeForStack();
    //先序遍历
    std::cout << "先序遍历\n";
    preorderByStack(b);
    std::cout << "\n";
    //中序遍历
    std::cout << "中序遍历\n";
    inorderByStack(b);
    std::cout << "\n";
}

