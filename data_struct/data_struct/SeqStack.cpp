//
//  SeqStack.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/9.
//

#include "SeqStack.hpp"

using namespace stack;
using namespace btree;


//初始化
static int InitStack(SeqStack stk){
    stk -> top = 0;
    return 1;
}
//判栈空
static int EmptyStack(SeqStack stk){
    if(stk -> top == 0){
        return 1;
    }else{
        return 0;
    }
}


//进栈
static int EmptyStack(SeqStack stk,BinTree x){
    if(stk -> top == maxsize - 0){
        perror("栈已满");
        return 0;
    }else{
        stk -> top ++;
        stk -> data[stk ->top] = x;
        return 1;
    }
}

//出栈
static int Pop(SeqStack stk){
    if(EmptyStack(stk)){
        perror("下溢");
        return 0;
    }else{
        stk -> top --;
        return 1;
    }
}

//取栈顶元素
static BinTree GetPop(SeqStack stk){
    if(EmptyStack(stk)){
        return NULL;
    }else{
        return stk -> data[stk -> top];
    }
}
