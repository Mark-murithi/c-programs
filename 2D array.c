//program to print a 2D array for 4*2 matrix
#include<stdio.h>
int main()
{
    int arr[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int i, j;
    printf("The Two-dimensional Array is:\n");
    for(i=0;  i<4; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}