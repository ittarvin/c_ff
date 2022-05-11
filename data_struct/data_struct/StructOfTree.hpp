//
//  StructOfTree.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/11.
//

#ifndef StructOfTree_hpp
#define StructOfTree_hpp

#include <stdio.h>


//孩子链表表示法
const int maxed = 20;

typedef struct bnode{
    int child;
    struct bnode *next;
}node,*childlink;

typedef struct headnode{
    char data;
    childlink hp;
    int parent;//为方便寻找双亲。
}headnode;

headnode link[maxed];


//孩子兄弟链表表示法
typedef struct sbnode{
    char data;
    struct sbnode *son,*brither;
}*SBTree;

//双亲表示法

const int size = 10;
typedef struct pnode{
    char data;
    int parent;
}*Pnode;

Pnode slist[size];

#endif /* StructOfTree_hpp */
