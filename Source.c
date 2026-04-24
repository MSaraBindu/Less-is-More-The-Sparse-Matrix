#include <stdio.h>

#define MAX 100

int main()
{
    int matrix[MAX][MAX];
    int rows, cols;

    int i, j;

    printf("rows? ");
    scanf("%d", &rows);

    printf("cols? ");
    scanf("%d", &cols);

    printf("enter values now:\n");

    // input
    i = 0;
    while(i < rows)
    {
        j = 0;
        while(j < cols)
        {
            scanf("%d", &matrix[i][j]);
            j++;
        }
        i++;
    }

    // print to verify
    printf("\nwhat you gave:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // sparse storage (3 arrays)
    int r[MAX], c[MAX], v[MAX];
    int k = 0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            int current = matrix[i][j];

            if(current != 0)
            {
                r[k] = i;
                c[k] = j;
                v[k] = current;
                k++;
            }
        }
    }

    // print sparse
    printf("\nsparse view (row col val):\n");

    i = 0;
    while(i < k)
    {
        printf("%d %d %d\n", r[i], c[i], v[i]);
        i++;
    }

    // -------- data size comparison --------

    int totalElements = rows * cols;
    int nonZero = k;

    int sizeInt = sizeof(int);

    int fullBytes = totalElements * sizeInt;

    int sparseBytes = nonZero * 3 * sizeInt;

    printf("\n---- data size info ----\n");

    printf("total elements in matrix: %d\n", totalElements);
    printf("non-zero elements: %d\n", nonZero);

    printf("\nfull matrix uses: %d bytes\n", fullBytes);
    printf("sparse uses: %d bytes\n", sparseBytes);

    int saved = fullBytes - sparseBytes;

    printf("memory saved: %d bytes\n", saved);

    return 0;
}
