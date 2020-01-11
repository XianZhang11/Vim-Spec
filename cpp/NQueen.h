#ifndef NQUEEN_H
#define NQUEEN_H

#include <vector>
class NQueen{

    public:
        NQueen(int);
        ~NQueen();

        void print();

        bool HasSolution();
private:
        bool CheckStat(int row, int colume);
        bool CheckRow(int row);
    std::vector<std::vector<bool>> board;
    int size;

};


#endif
