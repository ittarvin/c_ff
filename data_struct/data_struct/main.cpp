//
//  main.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#include <iostream>
#include "BtreeVisit.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "二叉树遍历 DEMO \n";
    std::cout << "初始化二叉树信息 \n";
    BinTree b = initBinTree();
    //先序遍历
    std::cout << "先序遍历\n";
    preorder(b);
    std::cout << "\n";
    
    std::cout << "中序遍历\n";
    inorder(b);
    std::cout << "\n";
    
    std::cout << "后序遍历\n";
    postorder(b);
    std::cout << "\n";
    
    return 0;
}
