#include <iostream>
#include <stdio.h>
#include "BST.h"
#include "NQueen.h"
#include "Heap.h"
#include "LRU.h"

using namespace std;
int myfunc(int a, int b){

    return a+b;
}

void TestBST(){

    BST<int> tree;


    tree.insert(1); 
    tree.insert(-5);
    tree.insert(-7);
    tree.insert(-3);
    tree.insert(-10);
    tree.insert(11);
    tree.insert(9); 
    tree.insert(5); 
    tree.insert(6); 
    tree.insert(51);
    tree.insert(13);
    tree.insert(6); 
    tree.insert(6); 
    tree.insert(6); 

    cout << "               1         "<< endl;
    cout << "              / \\       "<< endl;
    cout << "            /     \\     "<< endl;
    cout << "         -5        11    "<< endl;
    cout << "        /  \\      /  \\ "<< endl;
    cout << "      -7   -3    9    51 "<< endl;
    cout << "      /         /    /   "<< endl;
    cout << "   -10         5   13    "<< endl;
    cout << "                \\       "<< endl;
    cout << "                 6       "<< endl;

    cout << "dfs"<< endl;
    tree.print(MODE::DEPTHFIRST);
    cout << "===================="<<endl;

    cout << "bfs"<< endl;
    tree.print(MODE::BREADFIRST);
    cout << "===================="<<endl;

    cout << "inorder"<< endl;
    tree.print(MODE::INORDER);
    cout << "===================="<<endl;

    cout << "sdfs"<< endl;
    tree.print(MODE::SDEPTHFISRT);
    cout << "===================="<<endl;

    cout <<((tree.Search(15) == nullptr)?"not found":"found")  << " 15" << endl;

}

void TestNQ(){

    NQueen nq(9);
    cout << nq.HasSolution() << endl;
    nq.print();

}

void TestHeap(){
    cout << "Test heap" << endl;
    heap h;
    
    h.insert(15);
    h.insert(-13);
    h.insert(10);
    h.insert(103);
    h.insert(0);
    h.insert(10);
    h.insert(92);
    h.insert(17);

    while(h.size()) cout << h.pop() << endl;

}

void TestLRU(){
    cout  << "1, 2, 3, 4, 1, 2, 5, 1, 2, 3, 4, 5" << endl;
    LRU ca(3);

    ca.refer(1);
    ca.print();
    ca.refer(2);
    ca.print();
    ca.refer(3);
    ca.print();
    ca.refer(4);
    ca.print();
    ca.refer(1);
    ca.print();
    ca.refer(2);
    ca.print();
    ca.refer(5);
    ca.print();
    ca.refer(1);
    ca.print();
    ca.refer(2);
    ca.print();
    ca.refer(3);
    ca.print();
    ca.refer(4);
    ca.print();
    ca.refer(5);
    ca.print();
}
int main()
{

    TestBST();
    
    TestNQ();

    TestHeap();

    TestLRU();

    return 0;
}
