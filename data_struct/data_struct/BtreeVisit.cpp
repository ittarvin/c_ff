//
//  BtreeVisit.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#include "BtreeVisit.hpp"

static BinTree initBinTree(){
    
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
