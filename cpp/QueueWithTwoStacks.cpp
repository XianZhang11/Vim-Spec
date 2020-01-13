#include <string>
#include "QueueWithTwoStacks.h"

using namespace std;
template <typename T>
void QueueWithTwoStacks<T>::Push(T v){

    pushStack.push(v);

}

template <typename T>
T QueueWithTwoStacks<T>::pop(){

    if(popStack.empty()){
        if(pushStack.empty()) throw string("try to pop from an empty queue.");

        while(!pushStack.empty()){
            popStack.push(pushStack.top());
            pushStack.pop();
        }


    }
    T r = popStack.top();
    popStack.pop();
    return r;
}
template class QueueWithTwoStacks<int>;
