#include <iostream>
#include "LRU.h"

void LRU::refer(int x){

    if(m_map.count(x) == 0){

        if(m_size < m_cap)
        {
            m_size++;
        }else{

            int t = cache.front();
            cache.pop_front();
            m_map.erase(t);
        }
    }
    else{


        cache.erase(m_map[x]);
        m_map.erase(x); 

    }
    cache.push_back(x);
    m_map[x] = cache.end()-1;
}

void LRU::print(){

    for(auto& x : cache){
        std::cout << x << ", " ;
    }

    std::cout << std::endl;
}
