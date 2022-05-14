//
//  HuffmanTree.hpp
//  data_struct
//
//  Created by Arvin on 2022/5/12.
//

#ifndef HuffmanTree_hpp
#define HuffmanTree_hpp

#include <stdio.h>
const int n = 10;

typedef struct huffmanNode{
    float w;
    int parent,lchild,rchild;
}huffmanNode;

typedef huffmanNode hftree[2*n-1];


#endif /* HuffmanTree_hpp */
