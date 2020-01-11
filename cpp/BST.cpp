#include <iostream>
#include "BST.h"

using namespace std;
    template<typename T>
BST<T>::BST()
    : root(0){

    }

template<typename T>
BST<T>::~BST(){
}

template<typename T>
void BST<T>::insert(T value){
    Node<T>* ser = root;

    Node<T>* temp = new Node<T>(value);

    // empty tree
    if(!ser) root = temp;
    while(ser){

        if(value == ser->value){
            delete temp;
            return;
        }
        if(value > ser->value) {
            if(ser->right == nullptr){
                ser->right = temp;
                return;
            }

            ser = ser->right;
        } else{
            if(ser->left == nullptr){
                ser->left = temp;
                return;
            }
            ser = ser->left;
        }

    }
}
template<typename T>
Node<T>* BST<T>::Search(T v){

    Node<T>* r = root;
    cout << "start search..." << endl;

    while(r->value != v&& r != nullptr){

        cout << r->value << endl; 
        if(v >r->value) r = r->right;
        else r= r->left;

    }


    return r;
}

template<typename T>
void printNode(Node<T>* n){
    if(!n) return;

    cout<< n->value << endl;

    printNode(n->left);
    printNode(n->right);
}
template<typename T>
void BST<T>:: print(){

    printNode(root);

    
}
template class BST<int>;

template struct Node<int>;
