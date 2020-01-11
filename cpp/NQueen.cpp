#include <iostream>
#include "NQueen.h"

using namespace std;


NQueen::NQueen(int n)
    : board(n, vector<bool>(n, false))
      , size(n)
{}

NQueen::~NQueen(){}

void NQueen::print(){

    cout << endl << string(size *2, '=') << endl; 

    for(int i =0; i < size;i++)
    {
        for (int j = 0; j < size; ++j) {
            
            if(board[i][j]) cout << "Q ";
            else cout <<"- ";
        }
        cout << endl;
    }
    cout << string(size* 2, '=') << endl; 
}

bool NQueen::CheckStat(int row, int colume){

        if( !row) return true;


        // check colume
        for(int i= 0 ; i < size; i ++){

            if(board[i][colume] == true) return false;
        }

        // diag
        for( int i = 0; i < size; i++){
            int c = colume + row - i;
            if(c>= 0 && c< size && board[i][c] == true) return false;
        }

        for( int i = 0; i < size; i++){
            int c = colume +i - row;
            if(c>= 0 && c< size && board[i][c] == true) return false;
        }
        return true;
}

bool NQueen::CheckRow(int row){

    if(row == size) return true;

    for(int i=0; i < size; i++){


        if (CheckStat(row, i)){
            board[row][i] = true; 
            if(CheckRow(row+1)) return true;
            else{
                board[row][i] = false;
            }
        }
    }
    return false;

}

bool NQueen::HasSolution(){

    return CheckRow(0);
    return false;
}
