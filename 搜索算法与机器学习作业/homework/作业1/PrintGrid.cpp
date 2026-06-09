#include"PrintGrid.hpp"
#include"MyAStar.hpp"

void printGrid(const std::vector<std::vector<int>> &grid,
                            const std::vector<std::pair<int,int>> &path){
    using namespace std;
    vector<vector<int>> display=grid;
    for(auto& p:path){
        display[p.first][p.second]=2;
    }

    //双层循环打印grid
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            //障碍物
            if(display[i][j]==1){
                cout<<"█  ";
            }
            //路径
            else if(display[i][j]==2){
                cout<<"*  ";
            }
            //其他
            else{
                cout<<".  ";
            }
        }
        cout<<endl;
    }

}
