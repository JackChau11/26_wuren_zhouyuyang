#pragma once
#include<vector>
#include <utility>


// 地图尺寸
const int ROWS = 1000;
const int COLS = 1000;

// 方向数组：上、下、左、右
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

struct Node{
    int x,y;
    int g;
    int h;
    int f;
    bool operator<(const Node& other) const{
        return f>other.f;
    }
};

int heuristic(int x1, int y1, int x2, int y2);

std::vector<std::pair<int,int>> aStar(std::vector<std::vector<int>> grid,
                                        std::pair<int,int> start,
                                        std::pair<int,int> goal);
