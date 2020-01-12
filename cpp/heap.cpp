#include "Heap.h"

using namespace std;
void heap::insert(int value){

    data.push_back(value);

m_size++;
    
    int current = m_size-1;
    int index = (m_size-2)/2;

    while(index>=0){
        if( data[current] < data[index]){
            swap(data[current], data[index]);
            current = index;
            index = (current -1) /2;
        }
        else break;
    }
}

int heap::pop(){


    if(m_size == 0) throw "heap empty";

    int re = data[0];
    swap(data[0], data[m_size-1]);

    data.erase(data.end() - 1);
    m_size --;

    int index= 0;
    
    // reorder
    while(true){

        int left = 2*index +1;
        int right = left+1;

        // both children out of range
        if(left >= m_size) break;

        // only left child available
        else if(right >= m_size) {

            if(data[left] < data[index]){
                swap(data[left], data[index]);
                break;
            }else break;

        }
        else{
            // left child is smaller than right child
            if( data[left] < data[right]){
                if(data[left] < data[index]){

                    swap(data[left], data[index]);
                    index = left;
                }else break;
            }else{

                if(data[right] < data[index]){

                    swap(data[right], data[index]);
                    index = right;
                }else break;
            }
        }

    }

    return re;
}
