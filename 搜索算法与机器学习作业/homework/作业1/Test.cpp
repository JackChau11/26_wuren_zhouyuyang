#include"MyAStar.hpp"
#include"PrintGrid.hpp"
#include<chrono>
#include<iostream>
int main() {
    using namespace std;
   

    // 创建地图，0 可走，1 障碍
    vector<vector<int>> grid(ROWS, vector<int>(COLS, 0));
    // 设置几个障碍物
    grid[2][3] = grid[2][4] = grid[2][5] = 1;
    grid[3][5] = 1;
    grid[4][5] = grid[5][5] = grid[6][5] = 1;
    grid[7][1] = grid[7][2] = grid[7][3] = 1;

    pair<int,int> start = {0, 0};
    pair<int,int> goal = {999, 999};

    //设置计时器，探究使用不同启发函数对运行效率的影响
    auto start_time = std::chrono::high_resolution_clock::now();
    vector<pair<int,int>> path = aStar(grid, start, goal);
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end_time - start_time;
    if (!path.empty()) {
        cout << "找到路径，长度：" << path.size() - 1 << endl;
        printGrid(grid, path);
    } else {
        cout << "无法到达终点！" << endl;
    }
    cout << "A*算法运行时间: " << elapsed.count() << " 毫秒" << endl;
    return 0;
}