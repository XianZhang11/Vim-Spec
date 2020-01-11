#include <iostream>
#include <stdio.h>
#include "BST.h"


using namespace std;
int myfunc(int a, int b){

    return a+b;
}


int main()
{

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

    cout << "dfs"<< endl;
    tree.print(MODE::DEPTHFIRST);
    cout << "===================="<<endl;

    cout << "bfs"<< endl;
    tree.print(MODE::BREADFIRST);
    cout << "===================="<<endl;
    
    cout << "inorder"<< endl;
    tree.print(MODE::INORDER);
    cout << "===================="<<endl;

    cout <<((tree.Search(15) == nullptr)?"not found":"found")  << " 15" << endl;

    return 0;
}
