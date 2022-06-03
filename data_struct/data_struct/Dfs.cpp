//
//  Dfs.cpp
//  data_struct
//
//  Created by Arvin on 2022/6/2.
//

#include "Dfs.hpp"


static int visited[4];

static void dfs(Graph g,int v){
    visited[v] = 1;
    std::cout << " " << v << " ->" ;
    ArcNode *p = g.adjlist[v].firstarc;
    while (p!=NULL) {
        if(!visited[p->adjvex]){
            dfs(g, p->adjvex);
        }
        p = p->nextarc;
    }
}

static void printGraphDFS(){
    std::cout << "访问顶点: ";
    Graph g = initGraph();
    dfs(g,0);
}


