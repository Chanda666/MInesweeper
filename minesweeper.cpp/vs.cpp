// �������㺯��
/*
    ������: �°���
    ����: ����ָ��������Χ�׵�����
    ����: x-������ y-������
    ����ֵ: ��Χ�׵�������0-8��
*/
int calculateMines(int x, int y);
int calculateMines(int x, int y)
{
    if (grid[x][y] != 9)
        for (int dx = -1; dx <= 1; dx++)
            for (int dy = -1; dy <= 1; dy++)
            {
                int nx = dx + x; int ny = dy + y;
                if (grid[nx][ny] == 9 && nx >= 0 && nx <= MAX_SIZE && ny <= MAX_SIZE && ny >= 0)
                    grid[x][y]++;
            }
    return grid[x][y];
}