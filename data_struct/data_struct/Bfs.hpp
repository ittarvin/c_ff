//
//  Bfs.hpp
//  data_struct
//
//  Created by Arvin on 2022/6/3.
//

#ifndef Bfs_hpp
#define Bfs_hpp

#include <stdio.h>
#include "Dfs.hpp"


const int bfsque_size = 20;

typedef struct bfsque{
   int data[bfsque_size];
   int front,rear;
}BfsQue;

//初始化
static void InitBfsQueue(BfsQue *CQ){
    CQ -> front = 0;
    CQ -> rear = 0;
}
//判断列空
static int EmptyBfsQueue(BfsQue *CQ){
    if(CQ ->rear == CQ ->front){
        return 1;//列为空
    }else{
        return 0;//列不为空
    }
}
//入队列
static int EnBfsQueue(BfsQue *CQ,int x){
    if((CQ -> rear + 1 ) % bfsque_size == CQ ->front){
        perror("队列已满");return 0;
    }else{
        CQ -> rear = (CQ -> rear + 1 ) % bfsque_size;
        CQ -> data[CQ ->rear] = x;
        return 1;
    }
}
//出队列
static int OutBfsQueue(BfsQue *CQ){
    if(EmptyBfsQueue(CQ)){
        perror("队列空");return 0;
    }else{
        CQ -> front = (CQ ->front + 1) % bfsque_size;
        return 1;
    }
}

//取队列首元素
static int GetBfsHead(BfsQue *CQ){
    if(EmptyBfsQueue(CQ)){
        return NULL;
    }
    return CQ -> data[(CQ -> front + 1) % bfsque_size];
}




#endif /* Bfs_hpp */
