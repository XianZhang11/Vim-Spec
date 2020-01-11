#include <iostream>
#include <stdio.h>
#include "BST.h"
#include "NQueen.h"

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

int main()
{
    NQueen nq(15);
    cout << nq.HasSolution() << endl;
    nq.print();

    return 0;
}
