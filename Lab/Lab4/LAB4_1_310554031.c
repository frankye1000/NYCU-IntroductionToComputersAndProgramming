#include <stdio.h>


void print_matrix(int matrix[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void row_interchange(int matrix[4][4])
{   
    /* (0,0)->(3,0) */
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            int temp = matrix[3-i][j];
            matrix[3-i][j] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
    printf("%s","Row Interchange:\n");
    print_matrix(matrix);

}

void col_interchange(int matrix[4][4])
{
    /* (0,0)->(0,3) */
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            int temp = matrix[i][3-j];
            matrix[i][3-j] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
    printf("%s","Column Interchange:\n");
    print_matrix(matrix);
}

void transpose(int matrix[4][4])
{
    /* (0,1)->(1,0) */
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
    printf("%s","Transpose:\n");
    print_matrix(matrix);
}

void rotate_right(int matrix[4][4])
{
    // row_interchange
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            int temp = matrix[3-i][j];
            matrix[3-i][j] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
    //transpose
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
    printf("%s","Rotation:\n");
    print_matrix(matrix);
}



int main()
{
    int matrix[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}};

    // todo
    row_interchange(matrix);
    col_interchange(matrix);
    transpose(matrix);
    rotate_right(matrix);
    
    return 0;
}