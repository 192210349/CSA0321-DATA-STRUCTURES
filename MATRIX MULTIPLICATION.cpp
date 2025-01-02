#include<stdio.h> 
int main() 
{     
    int r1, r2, c1, c2;     
    printf("Enter the number of rows and columns of the first matrix: ");     
    scanf("%d %d", &r1, &c1);     
    printf("Enter the number of rows and columns of the second matrix: ");     
    scanf("%d %d", &r2, &c2);     
    if (c1 != r2) 
	{         
        printf("Matrix multiplication is not possible\n");         
        return 0;     
    }     
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];     
    printf("Enter the elements in the first matrix: \n");     
    for (int i = 0; i < r1; i++) 
	{         
        for (int j = 0; j < c1; j++) 
		{             
            scanf("%d", &matrix1[i][j]);         
        }     
    }     
    printf("Enter the elements in the second matrix: \n");     
    for (int i = 0; i < r2; i++) 
	{         
        for (int j = 0; j < c2; j++) 
		{             
            scanf("%d", &matrix2[i][j]);         
        }     
    }     
    for (int i = 0; i < r1; i++) 
	{         
        for (int j = 0; j < c2; j++) 
		{             
            result[i][j] = 0;         
        }     
    }     
    for (int i = 0; i < r1; i++) 
	{         
        for (int j = 0; j < c2; j++) 
		{             
            for (int k = 0; k < c1; k++) 
			{                 
                result[i][j] += matrix1[i][k] * matrix2[k][j];             
            }         
        }     
    }     
    printf("Resultant Matrix:\n");     
    for (int i = 0; i < r1; i++) 
	{         
        for (int j = 0; j < c2; j++) 
		{             
            printf("%d ", result[i][j]);         
        }         
        printf("\n");     
    }     
    return 0; 
}

