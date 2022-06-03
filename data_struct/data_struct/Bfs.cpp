//
//  Bfs.cpp
//  data_struct
//
//  Created by Arvin on 2022/6/3.
//

#include "Bfs.hpp"

static int bfs_visited[20];

static void bfs(Graph g,int v){
    std::cout << " " << v << " ->" ;
    BfsQue *bfsq = (BfsQue*)malloc(sizeof(bfsque));
    InitBfsQueue(bfsq);
    bfs_visited[v] = 1;
    EnBfsQueue(bfsq,v);
    ArcNode *p;
    while (!EmptyBfsQueue(bfsq)) {
        v = GetBfsHead(bfsq);
        OutBfsQueue(bfsq);
        p = g.adjlist[v].firstarc;
        while (p!=NULL) {
            if(!bfs_visited[p->adjvex]){
                std::cout << " " << p->adjvex << " ->" ;
                bfs_visited[p->adjvex] = 1;
                EnBfsQueue(bfsq,p->adjvex);
            }
            p = p->nextarc;
        };
    };
}

static void printGraphBFS(){
    Graph g = initGraph();
    std::cout << "访问顶点: ";
    bfs(g,0);
}
