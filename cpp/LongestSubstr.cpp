#include <iostream>
#include <map>
#include "LongestSubstr.h"

using namespace std;
LongestSubstr::LongestSubstr(){
}

int LongestSubstr::Results(){

    cout << "Orig: " << m_str<< endl;
    cout << "results: " << m_str.substr(m_index, m_re) << endl;
    return m_re;

}

void LongestSubstr::Execute(string str){
    m_str = str;

    int start = 0, end = 0;

    map<char, int> mChar;

    int cur = 0;
    for (end = 0; end < str.length(); ++end) {
        if(mChar.count(str[end]) == 0){
        }else{
            if(cur > m_re) m_index = start;
            m_re = max( m_re, cur);
            int index = mChar[str[end]];
            for( ; start <= index; ++start){
                mChar.erase(str[start]);
                --cur;
            }
        }
        mChar[str[end]] = end;
        cur++;
    }

    if(cur > m_re) m_index = start;
    m_re = max(m_re , cur);


}
