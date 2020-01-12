#ifndef HEAP_H
#define HEAP_H
#include <vector>

class heap{
    public:
        heap(){}
        ~heap(){}
        void insert(int);

        int size(){return m_size;}
        int pop();
    private:
        int m_size = 0;

    std::vector<int> data;
};





#endif
