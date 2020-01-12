#ifndef LRU_H
#define LRU_H

#include <deque>
#include <unordered_map>


class LRU{

    public:
        LRU(int n): m_cap(n){}
        ~LRU(){}

        void refer(int x);
        void print();
    private:
        int m_size = 0;
        int m_cap ;

        std::deque<int> cache;
        std::unordered_map<int, std::deque<int>::iterator> m_map;
};

#endif

