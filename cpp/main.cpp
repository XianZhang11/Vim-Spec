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
    tree.insert(5);
    tree.insert(333);
    tree.insert(-5);
    tree.insert(10);
    tree.insert(15);

    tree.print();
    cout <<(tree.Search(15) == nullptr) << endl;
    std::cout << myfunc(3,4) << endl;
    return 0;
}
