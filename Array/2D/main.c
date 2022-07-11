/*
int arr[2][3];

arr is 3 dimensional array which contains 2 one dimensional arrays and each one dimsional array contains 3 elements in it each is of integer typedef
*/

#include<stdio.h>

void TwoDim()
{
	
    int row = 0, col = 0, i = 0, j = 0;
    int ** Arr = NULL;                              // Step 1
    
    printf("Enter number of rows\n");
    scanf("%d",&row);
    
    printf("Enter number of columns\n");
    scanf("%d",&col);

    Arr = (int **)malloc(row * sizeof(int *));      // Step 2
    
    for(i = 0; i<row; i++)
    {
        Arr[i] = (int *)malloc(col * sizeof(int));      // step 3
    }
    
    printf("Enter the elements\n");
    for(i = 0; i< row; i++)
    {
        for(j = 0; j< col;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Elements are\n");
    for(i = 0; i< row; i++)
    {
        for(j = 0; j< col;j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    
    // Memory dellocation of step 3
    for(i = 0; i<row; i++)
       {
           free(Arr[i]);      // step 3
       }
    
    // Memory delallocation of step 2
    free(Arr);
}

int main()
{
	TwoDim();
	
	return 0;
}