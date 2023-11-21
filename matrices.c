#include <stdio.h>
int main()
{
    int n, m;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matrix[i][j] = (i == j) ? 1 : 0;
    
    printf("\n MATRIZ \n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            printf("%d", matrix[i][j]);
        printf("\n");

    return 0;
}
