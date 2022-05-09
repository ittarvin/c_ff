//
//  LkStack.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/9.
//

#include "LkStack.hpp"
#include <iostream>

using namespace lkstack;
using namespace btree;

//初始化
static LKStack InitStack(){
    LKStack ls = (lknode *)malloc(sizeof(lknode));
    ls -> next = NULL;
    return ls;
}

//判栈空
static int EmptyStack(LKStack ls){
    if(ls -> next == NULL){
        return 1;
    }else{
        return 0;
    }
}
//进栈
static void Push(LKStack ls,BinTree x){
    LKStack temp = (lknode *)malloc(sizeof(lknode));
    temp -> data = x;
    temp -> next = ls -> next;
    ls -> next = temp;
}

//出栈
static int Pop(LKStack ls){
    LKStack temp;
    if(!EmptyStack(ls)){
        temp = ls -> next;
        ls -> next  = temp -> next;
        free(temp);
        return 1;
    }
    return 0;
}


//取栈顶元素
static BinTree GetTop(LKStack ls){
    if(!EmptyStack(ls)){
        return ls -> next -> data;
    }
    return NULL;
}

