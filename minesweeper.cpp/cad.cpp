// 雷数计算函数
/*
    负责人: 陈安达
    功能: 计算指定坐标周围雷的数量
    参数: x-横坐标 y-纵坐标
    返回值: 周围雷的数量（0-8）
*/
int calculateMines(int x, int y);
int calculateMines(int x, int y)
{   
    if(grid[x][y]!=9)
        for(int dx=-1;dx<=1;dx++)
            for(int dy=-1;dy<=1;dy++)
                {
                    int nx=dx+x;int ny=dy+y;
                    if(grid[nx][ny]==9&&nx>=0&&nx<=MAX_SIZE&&ny<=MAX_SIZE&&ny>=0)
                        grid[x][y]++;
                }
    return grid[x][y];
}