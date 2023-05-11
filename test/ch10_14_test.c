#include <stdio.h>
#define line 6
#define row 6

int main() {
    int oil[line][row] = {
        {1, 2, 3, 3, 5, 2},
        {1, 2, 3, 3, 5, 2},
        {1, 2, 3, 3, 5, 2},
        {1, 2, 3, 0, 0, 0},
        {1, 2, 3, 0, 0, 0},
        {1, 2, 3, 0, 0, 0}
    };
    int maxSum = 0;  // 최대 합 변수
    int maxRow, maxCol;  // 최대 합이 있는 구역의 왼쪽 위 좌표

    // 3x3 구역 순회
    for (int i = 0; i <= 6 - 3; i++)
    {
        for (int j = 0; j <= 6 - 3; j++)
        {
            int sum = 0;  // 구역의 합 변수

            // 3x3 구역의 합 계산
            for (int k = i; k < i + 3; k++)
            {
                for (int l = j; l < j + 3; l++)
                {
                    sum += oil[k][l];
                }
            }

            // 최대 합 갱신
            if (sum > maxSum)
            {
                maxSum = sum;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // 최대 합이 있는 구역 출력
    printf("가장 값이 높은 3x3 구역: \n");
    for (int i = maxRow; i < maxRow + 3; i++)
    {
        for (int j = maxCol; j < maxCol + 3; j++)
        {
            printf("%d ", oil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
