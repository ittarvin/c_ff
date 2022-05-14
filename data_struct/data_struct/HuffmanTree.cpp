//
//  HuffmanTree.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/12.
//

#include "HuffmanTree.hpp"

char classfy(int age){
    if(age < 18)return 'A';
    else if (age < 45) return 'B';
    else if (age < 60) return 'C';
    else return 'D';
}

/**
   k : 表示构造哈夫曼树之前给定的权值个数。
   w：权值
   t： 哈夫曼树
 */
void huffman(int k,float w[],hftree t){
    int i,j,x,y;
    float m,n;
    //置初态：读取 k 个权值到数组 t 的前 k 个分量中。
    for(i=0;i<2*k-1;i++){
        t[i].parent = -1;
        t[i].lchild = -1;
        t[i].rchild = -1;
        if(i < k){
            t[i].w = w[i];
        }else{
            t[i].w = 0;
        }
    }
    
    //构建二叉树
    for(i=0;i<k-1;i++){
        x = 0;y =0;
        m = 9999;n=9999;
        //找两颗权值最小的二叉树
        for(j=0;j<k+i;j++){
            if((t[j].w < m) && (t[j].parent) ==-1){
                n = m;
                y = x;
                m = t[j].w;
                x = j;
            }else if((t[j].w < n) && (t[j].parent) ==-1){
                n = t[j].w;
                y = j;
            }
        }
        //合并新的二叉树
        t[x].parent = k + i;
        t[y].parent = k + i;
        t[k + i].w = m + n;
        t[k + i].lchild = x;
        t[k + i].rchild = y;
    }
}

