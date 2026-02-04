
#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c;
    int top = 0, left = 0, bottom, right;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    bottom = r - 1;
    right = c - 1;

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Spiral Matrix:\n");
    while(top <= bottom && left <= right) {

        for(j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;

        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        if(top <= bottom) {
            for(j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }

        if(left <= right) {
            for(i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
    return 0;
}
