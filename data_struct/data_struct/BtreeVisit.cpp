//
//  BtreeVisit.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#include "BtreeVisit.hpp"

static BinTree initBinTree(){
    
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


static void printBinTreeNodes(){
    
    BinTree b = initBinTree();
    //先序遍历
    std::cout << "先序遍历\n";
    preorder(b);
    std::cout << "\n";
    
    std::cout << "中序遍历\n";
    inorder(b);
    std::cout << "\n";
    
    std::cout << "后序遍历\n";
    postorder(b);
    std::cout << "\n";
}
