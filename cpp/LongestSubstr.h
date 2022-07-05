#include <string>

class LongestSubstr{
    public:
        LongestSubstr();
        ~LongestSubstr() = default;

        int Results();

        void Execute(std::string str);
    private:
        std::string m_str;
        int m_re = 0;
        int m_index = 0;

};
