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
    {
        printf("\n");
        for (int j = 0; j < m; i++)
        {
            matrix [i][j] = 0;
            printf("%d", matrix[i][j]);
        }
        
    }
    

    return 0;
}
