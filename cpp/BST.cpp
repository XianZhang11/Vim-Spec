#include <iostream>
#include <queue>
#include "BST.h"

using namespace std;
    template<typename T>
BST<T>::BST()
    : root(0){

    }

template<typename T>
void BST<T>::freeNode(Node<T>* n){
    if(!n) return;


    freeNode(n->left);
    freeNode(n->right);

    delete n;

}
template<typename T>
BST<T>::~BST(){
    freeNode(root);
}

template<typename T>
void BST<T>::insert(T value){
    Node<T>* ser = root;

    Node<T>* temp = new Node<T>(value);

    // empty tree
    if(!ser) {
        root = temp; 
        return;
    }
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

    while( r != nullptr && r->value != v){

        cout << r->value << endl; 
        if(v >r->value) r = r->right;
        else r= r->left;

    }


    return r;
}

template<typename T>
void BST<T>::dfs(Node<T>* n){
    if(!n) return;

    cout<< n->value << endl;

    dfs(n->left);
    dfs(n->right);
}
template<typename T>
void BST<T>:: print(MODE m){

   switch (m) {
        case MODE::BREADFIRST:
            bfs(root); 
            break;
        case MODE::DEPTHFIRST:
            dfs(root); 
            break;
        case MODE::INORDER:
            inorder(root); 
            break;
        default:
            break; 
    }


}
template<typename T>
void BST<T>::bfs(Node<T>* n){

    if(!n) return;
    queue<Node<T>*> q;
    q.push(n);

    Node<T>* p;
    while(!q.empty()){
        p = q.front();
        q.pop();
        cout << p->value << endl;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }


} 

template<typename T>
void BST<T>::inorder(Node<T>* n){
    if(!n) return;

    inorder(n->left);
    cout << n->value<< endl;
    inorder(n->right);
}

template class BST<int>;

template struct Node<int>;








