#ifndef BST_H
#define BST_H

template <typename T>
struct Node{
    Node(T v):value(v){}
    T value;
    Node<T>* left  = nullptr;
    Node<T>* right = nullptr;
};


enum MODE{

BREADFIRST,
DEPTHFIRST,
INORDER

};
template <typename T>
class BST{
    public:
        BST();
        ~BST();    

        void insert(T);
        Node<T>* Search(T);

        void print(MODE);
    private:
        void freeNode(Node<T>*);
        void dfs(Node<T>*);

        void bfs(Node<T>*);
        void inorder(Node<T>*);

    private:
        Node<T>* root; 
};

#endif


