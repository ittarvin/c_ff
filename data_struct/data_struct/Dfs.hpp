//
//  Dfs.hpp
//  data_struct
//
//  Created by Arvin on 2022/6/2.
//

#ifndef Dfs_hpp
#define Dfs_hpp

#include <stdio.h>
#include <iostream>

#define vnum 4

typedef struct arcnode{
    int adjvex;
    struct arcnode * nextarc;
}ArcNode;



typedef struct vexnode{
    int vertex;
    ArcNode *firstarc;
}AdjList[vnum];

typedef struct gp{
    AdjList adjlist;
    int vexnum,arcnum;
}Graph;




static void createAdjList(Graph *g,
                          int n,int e){
    int i;
    g -> vexnum = n ;
    g -> arcnum = e;
    for (i=0; i<n; i++) {
        g ->adjlist[i].vertex = i;
        g ->adjlist[i].firstarc = NULL;
    }
}

static void createArcNode(Graph *g,int i,int j){
    ArcNode *p = (ArcNode*) malloc(sizeof(ArcNode));
    p -> adjvex = j;
    p -> nextarc = g -> adjlist[i].firstarc;
    g -> adjlist[i].firstarc = p;
}

static Graph initGraph(){
    
    
    Graph *g = (Graph*) malloc(sizeof(gp));
    
    createAdjList(g,4,4);
    
    createArcNode(g,0,1);
    createArcNode(g,0,2);
    
    createArcNode(g,1,0);
    createArcNode(g,1,2);
    
    createArcNode(g,2,1);
    createArcNode(g,2,1);
    createArcNode(g,2,3);
    
    createArcNode(g,3,2);
    
    
    return *g;
    
}




#endif /* Dfs_hpp */
