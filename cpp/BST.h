#ifndef BST_H
#define BST_H

template <typename T>
struct Node{
    Node(T v):value(v){}
    T value;
    Node<T>* left  = nullptr;
    Node<T>* right = nullptr;
};


template <typename T>
class BST{
    public:
        BST();
        ~BST();    

        void insert(T);
        Node<T>* Search(T);
        void print();
    private:
        Node<T>* root; 
};

#endif


