//
//  main.cpp
//  data_struct
//
//  Created by Arvin on 2022/5/8.
//

#include <iostream>
#include "BtreeVisit.cpp"
#include "BtreeStackVisit.cpp"
#include "StraightInsertSort.cpp"
#include "BubbleSort.cpp"
#include "QuickSort.cpp"
#include "SelectSort.cpp"
#include "MergeSort.cpp"
#include "HeapSort.cpp"
#include "SearchSqTable.cpp"
#include "SearchBin.cpp"
#include "SearchBST.cpp"
#include "Dfs.cpp"
#include "Bfs.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "1.二叉树递归遍历\n";
    printBinTreeNodes();
    std::cout << "\n";
    
    std::cout << "2.二叉树栈遍历\n";
    printBtreeStackVisitNodes();
    std::cout << "\n";
    
    std::cout << "3.直接插入排序\n";
    printStraightInsertSort();
    std::cout << "\n";
    
    std::cout << "4.冒泡排序\n";
    printBubbleSort();
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "5.快速排序\n";
    printQuickSort();
    std::cout << "\n";
    std::cout << "\n";

     std::cout << "6.直接选择排序\n";
     printSelectSort();
     std::cout << "\n";
     std::cout << "\n";
    
    std::cout << "7.二路归并排序\n";
    printMergeSort();
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "8.堆排序\n";
    printHeapSort();
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "9.顺序查找\n";
    printSearchSqTable();
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "10.二分查找\n";
    printSearchBin();
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "11.二分查找树查找\n";
    printSearchBST();
    std::cout << "\n";
    std::cout << "\n";
    
    
    std::cout << "12.二分查找树插入\n";
    printInsertBTS();
    std::cout << "\n";
    std::cout << "\n";
    
    
    std::cout << "13.图-深度优先搜索\n";
    printGraphDFS();
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "14.图-广度优先搜索\n";
    printGraphBFS();
    std::cout << "\n";
    std::cout << "\n";
    
    return 0;
}
