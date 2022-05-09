//
//  CycQue.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#include "CycQue.hpp"

using namespace que;
using namespace btree;

//初始化
static void InitQueue(CycQue CQ){
    CQ -> front = 0;
    CQ -> rear = 0;
}
//判断列空
static int EmptyQueue(CycQue CQ){
    if(CQ ->rear == CQ ->front){
        return 1;//列为空
    }else{
        return 0;//列不为空
    }
}
//入队列
static int EnQueue(CycQue CQ,BinTree x){
    if((CQ -> rear + 1 ) % maxsize == CQ ->front){
        perror("队列已满");return 0;
    }else{
        CQ -> rear = (CQ -> rear + 1 ) % maxsize;
        CQ -> data[CQ ->rear] = x;
        return 1;
    }
}
//出队列
static int OutQueue(CycQue CQ){
    if(EmptyQueue(CQ)){
        perror("队列空");return 0;
    }else{
        CQ -> front = (CQ ->front + 1) % maxsize;
        return 1;
    }
}

//取队列首元素
static BinTree GetHead(CycQue CQ){
    if(EmptyQueue(CQ)){
        return NULL;
    }
    return CQ -> data[(CQ -> front + 1) % maxsize];
}
