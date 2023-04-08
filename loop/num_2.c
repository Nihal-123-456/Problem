#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int k = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(k==1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            k=k*-1;
        }
        printf("\n");
    }

    return 0;
}