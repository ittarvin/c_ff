//
//  SearchBST.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/26.
//

#include "SearchBST.hpp"


static BSTree initBST(){
    
    std::cout << "进行二叉排序树初始化 \n";
    
    BSTree A_38 = (bstnode *)malloc(sizeof(bstnode));
    A_38 -> data = 38;
    
    BSTree B_18 = (bstnode *)malloc(sizeof(bstnode));
    B_18 -> data = 18;
    A_38 -> lchild = B_18;
    
    BSTree C_50 = (bstnode *)malloc(sizeof(bstnode));
    C_50 -> data = 50;
    C_50 -> lchild = NULL;
    A_38 -> rchild = C_50;
 
    
    BSTree D_7 = (bstnode *)malloc(sizeof(bstnode));
    D_7 -> data = 7;
    D_7 -> lchild = NULL;
    D_7 -> rchild = NULL;
    
    B_18 -> lchild = D_7;
    
    BSTree E_30 = (bstnode *)malloc(sizeof(bstnode));
    E_30 -> data = 30;

    
    B_18 -> rchild = E_30;
    
    BSTree F_20 = (bstnode *)malloc(sizeof(bstnode));
    F_20 -> data = 20;
    F_20 -> lchild = NULL;
    F_20 -> rchild = NULL;

    E_30 -> lchild = F_20;

  
    
    BSTree G_35 = (bstnode *)malloc(sizeof(bstnode));
    G_35 -> data = 35;
    G_35 -> lchild = NULL;
    G_35 -> rchild = NULL;
    
    E_30 -> rchild = G_35;
    
    
    BSTree H_76 = (bstnode *)malloc(sizeof(bstnode));
    H_76 -> data = 76;
    H_76 -> lchild = NULL;

    
    BSTree I_70 = (bstnode *)malloc(sizeof(bstnode));
    
    I_70 -> data = 70;
    I_70 -> lchild = NULL;
    I_70 -> rchild = NULL;
    
    H_76 -> rchild = I_70;
    
    C_50 -> rchild = H_76;
    
    return A_38;
}


static BSTree searchBST(BSTree bst,int key){
    
    if(bst == NULL) return NULL;
    
    if(key == bst ->data) return bst;
    
    else if (key < bst-> data) return searchBST(bst ->lchild, key);
    
    else return searchBST(bst ->rchild, key);
    
};

static void printSearchBST(){
    
    BSTree bst = initBST();
    
    BSTree node = searchBST(bst,76);
    
    std::cout << "二叉查找树输出结果： "<< node->data <<"\n";
};

static void visitBST(BSTree bt){
    int v = bt -> data;
    std::cout << " "<< v << " ";
};

//中序遍历
static void inorderBST(BSTree bt){
    if(bt!=NULL){
        inorderBST(bt -> lchild);
        visitBST(bt);
        inorderBST(bt -> rchild);
    }
}


static BSTree searchBST2(BSTree bst,int key){
    if(bst == NULL) {
        return NULL;
    }
    f = bst;
    if(key == bst -> data) {
        return bst;
    }else if (key < bst -> data){
        return searchBST2(bst ->lchild, key);
    }else {
        return searchBST2(bst ->rchild, key);
    }
    
};


static int insertBST(int key){
    
    BSTNode *p,*t;
        
    t = searchBST2(bst,key);
    
    if(t == NULL){
        p = (bstnode *)malloc(sizeof(bstnode));
        p ->data = key;
        p ->lchild = NULL;
        p ->rchild = NULL;
        if(f == NULL){
            bst = p;
        }else if(key < f ->data){
            f -> lchild = p;
        }else{
            f -> rchild = p;
        }
        return 1;
    }
    return 0;
}


static void printInsertBTS(){
    
    int a[7];
    a[0] = 50;
    a[1] = 48;
    a[2] = 24;
    a[3] = 55;
    a[4] = 53;
    a[5] = 50;
    a[6] = 90;
    
    for (int i = 0; i< 7; i ++) {
        std::cout <<" " << a[i];
        insertBST(a[i]);
    }

    std::cout << "";
    
    std::cout << "\n";
    
    std::cout << "中序遍历\n";
    
    inorderBST(bst);
    
    std::cout << "\n";
    
};

