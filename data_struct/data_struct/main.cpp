//
//  main.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#include <iostream>
#include "BtreeVisit.cpp"
#include "BtreeStackVisit.cpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "1.二叉树递归遍历\n";
    printBinTreeNodes();
    std::cout << "\n";
    
    std::cout << "2.二叉树栈遍历\n";
    printBtreeStackVisitNodes();
    std::cout << "\n";
    
    return 0;
}
