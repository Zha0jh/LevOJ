#include <stdio.h>

void rotateMatrix(int n, int matrix[][n], int k) {
    int result[n][n];
    
    // 根据k的值，逐个计算每个i-Matrix的和
    for (int i = 0; i <= k; i++) {
        // 根据旋转的角度计算每个元素的位置
        int angle = i * 90 % 360;
        int steps = angle / 90;
        
        // 根据旋转角度旋转矩阵
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                int newX, newY;
                
                if (steps == 1) {
                    newX = y;
                    newY = n - x - 1;
                } else if (steps == 2) {
                    newX = n - x - 1;
                    newY = n - y - 1;
                } else if (steps == 3) {
                    newX = n - y - 1;
                    newY = x;
                } else {
                    newX = x;
                    newY = y;
                }
                
                result[newX][newY] = matrix[x][y];
            }
        }
        
        // 计算当前i-Matrix的和并输出
        long long sum = 0;
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                sum += result[x][y];
            }
        }
        
        printf("%lld", sum);
        
        if (i != k) {
            printf(" ");
        }
    }
    
    printf("\n");
}

int main() {
    int n;
    
    while (scanf("%d", &n) != EOF) {
        int matrix[n][n];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        
        int k;
        scanf("%d", &k);
        
        rotateMatrix(n, matrix, k);
    }
    
    return 0;
}
