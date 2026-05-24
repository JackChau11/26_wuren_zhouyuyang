#include"MyAStar.hpp"
#include <queue>
#include <cmath>
#include <algorithm>
#include <climits>



//欧氏距离启发函数
int heuristic(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

//曼哈顿距离启发函数
// int heuristic(int x1, int y1, int x2, int y2){
//     return abs(x1-x2)+abs(y1-y2);
// }

/*aStar函数原理：
传入参数：坐标，起点，终点
1.初始化：创建g_cost储存各个节点g值;
创建parent储存父节点，为路径回溯备用;
创建is_closed存放已经处理过的节点;
创建优先队列open_list存储节点;
2.主循环：先从open_list中取出f值最小的最优节点作为当前节点（若该节点被关闭或g值不匹配则跳过）;
再检查是否到达终点;
若已经到达终点，回溯路径，并反转path
若未到达终点，则处理邻居节点（检查邻居节点是否为障碍物、是否超出边界、是否被关闭）
更新邻居节点，计算g,h,f,记录下父节点并将邻居节点加入open_list
*/
std::vector<std::pair<int,int>> aStar(std::vector<std::vector<int>> grid,
                                    std::pair<int,int> start,
                                    std::pair<int,int> goal){
    using namespace std;                                    
    // 初始化各个节点的实际代价为无穷大
    vector<vector<int>> g_cost(ROWS,vector<int>(COLS,INT_MAX));

    // 记录父节点坐标，用于保存路径
    vector<vector<pair<int,int>>> parent(ROWS,vector<pair<int,int>>(COLS,{-1,-1}));

    // is_closed装已经被关闭的节点，后续过程中不再考虑这些节点
    vector<vector<bool>> is_closed(ROWS,vector<bool>(COLS,false));

    //sx,sy,g,gy分别为起点、g终点的横、纵a坐标
    int sx=start.first,sy=start.second;
    int gx=goal.first, gy=goal.second;
    
    //起点的实际代价为0
    g_cost[sx][sy]=0;

    //起点的估计代价，向启发函数中传入起、终点坐标进行计算
    int h_start=heuristic(sx,sy,gx,gy);

    //open_list装状态为open的节点，使用priority_quene容器
    //priority_quene的特点是可以自动排序，保证最高优先级的元素始终在顶部，且只能访问优先级最高的元素。
    //在Node结构体h中重载<运算符，比较各个节点f的大小，就是为了利用这一特性
    priority_queue<Node> open_list;

    //把起点放入open+list中
    open_list.push({sx,sy,0,h_start,h_start});

    while(!open_list.empty()){
        //当open_list不为空，即还有需要计算的i节点时，执行如下操作：

        //将open_list中f值最小的元素设为current_node,更新节点
        Node current_node =open_list.top();

        //将current_node从open_list中去除
        open_list.pop();

        //获取current_node坐标
        int cx=current_node.x,cy=current_node.y;

        //若该节点已被关闭，则跳过
        if(is_closed[cx][cy]){
            continue;
        }

        //若该节点的g值不等于g_cost中存储的该节点的g值，则跳过（体现贪心算法思想）
        if(current_node.g!=g_cost[cx][cy]){
            continue;
        }

        //若当前节点坐标等于终点坐标（说明已经找到完整n路径）
        if(cx==gx&&cy==gy){

            //用path存储路径坐标
            vector<pair<int,int>> path;

            //获取终点坐标，复制给px,py
            int px=cx,py=cy;

            
            while(px!=sx&&py!=sy){
            //当px,py不是起点坐标时：

            //把px,py放入path
            path.push_back({px,py});

            //获取(px,py)节点的父节点，回溯路径
            pair<int,int> p =parent[px][py];

            //更新px,py
            px=p.first;
            py=p.second;

            }

            //将起点放入path
            path.push_back({sx,sy});

            //反转path的元素顺序，使起点n在前，终点在后
            reverse(path.begin(),path.end());

            //返回路径
            return path;
        }

        //关闭当前节点
        is_closed[cx][cy]=true;

        for(int i =0;i<4;i++){
            //考虑当前节点的邻居节点

            //通过在当前坐标上加上方向数组，获取邻居节点坐标
            int nx=cx+dx[i];
            int ny=cy+dy[i];

            //看是否超出边界
            if(nx<0||nx>=ROWS||ny<0||ny>=COLS){
                continue;
            }

            //看邻居节点是否为障碍物
            if(grid[nx][ny]==1){
                continue;
            }

            //看邻居节点是否已被关闭
            if(is_closed[nx][ny]){
                continue;
            }

            //走了一个单位，故在原有的g上+1
            int next_g=g_cost[cx][cy]+1;


            if(next_g<g_cost[nx][ny]){
                //若下一个节点的g值小于g_cost中邻居节点的g值，执行如下操作：

                //更新g值
                g_cost[nx][ny]=next_g;

                //计算h值
                int h=heuristic(nx,ny,gx,gy);

                //计算f值
                int f=next_g+h;

                //获取父节点坐标
                parent[nx][ny]={cx,cy};

                //将该节点放入open_list
                open_list.push({nx,ny,next_g,h,f});

            }
        }
        
    }
    //找不到路径则返回空
    return {};
}