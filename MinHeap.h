//
// Created by nerdo on 3/2/19.
//

#ifndef MINHEAPS_MINHEAP_H
#define MINHEAPS_MINHEAP_H
#include <iostream>
#include <vector>
class MinHeap {
private:
    std::vector<int> myArray;
public:
    MinHeap();
    void insert(int );
    void print();
};


#endif //MINHEAPS_MINHEAP_H
