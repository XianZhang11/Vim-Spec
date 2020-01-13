#ifndef QUEUEWITHTWOSTACKS
#define QUEUEWITHTWOSTACKS 
#include <stack>

template <typename T>
class QueueWithTwoStacks{
    public:
        QueueWithTwoStacks(){}
        ~QueueWithTwoStacks(){}

       void Push(T);
       T    pop();

    private:
        std::stack<T> pushStack;
        std::stack<T> popStack;

};
#endif 
