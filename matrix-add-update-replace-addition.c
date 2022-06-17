#include <stdio.h>
void main()
{
  int a[20][30];
  int b[30][40];
  int sum[20][30];
  int row1, row2, col1, col2;
  printf("Please Enter 1st marix row numebr?\n");
  scanf("%d", &row1);
  printf("Please Enter 1st matrix column number?\n");
  scanf("%d", &col1);
  printf("Please enter your elements!\n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      printf("a[%d][%d]= ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  int choose;
  printf("Are you sure all elements are correct?\n");
  printf("1.update something in matrix 1?\n");
  printf("2.No i don't want to update!\n");
  scanf("%d", &choose);
  if (choose == 1)
  {
    int f_row;
    int replace_row;
    int replace_column;
    int update_number;
    printf("Please enter the row number?\n");
    scanf("%d", &replace_row);
    printf("Please enter the column number?\n");
    scanf("%d", &replace_column);
    printf("enter the number which number you want to repleace\n");
    scanf("%d", &update_number);
    for (int i = 0; i < row1; i++)
    {
      for (int j = 0; j < col1; j++)
      {
        if (replace_row - 1 == i && replace_column - 1 == j)
        {

          a[i][j] = update_number;
        }
      }
    }
  }

  printf("please enter 2nd matrix row number?\n");
  scanf("%d", &row2);
  printf("Please enter 2nd matrix column number?\n");
  scanf("%d", &col2);
  printf("Please Enter the elements\n");
  for (int i = 0; i < row2; i++)
  {
    for (int j = 0; j < col2; j++)
    {
      printf("a[%d][%d]= ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  }

  printf("Are you sure all elements are correct?\n");
  printf("1.update something in matrix 2?\n");
  printf("2.No i don't want to update!\n");
  scanf("%d", &choose);
  if (choose == 1)
  {
    int f_row;
    int replace_row;
    int replace_column;
    int update_number;
    printf("Please enter the row number?\n");
    scanf("%d", &replace_row);
    printf("Please enter the column number?\n");
    scanf("%d", &replace_column);
    printf("enter the number which number you want to repleace\n");
    scanf("%d", &update_number);
    for (int i = 0; i < row2; i++)
    {
      for (int j = 0; j < col2; j++)
      {
        if (replace_row - 1 == i && replace_column - 1 == j)
        {

          b[i][j] = update_number;
        }
      }
    }

    if (row1 == row2 && col1 == col2)
    {
      printf("The summation of matrix is\n");

      for (int i = 0; i < row2; i++)
      {
        for (int j = 0; j < col2; j++)
        {
          sum[i][j] = a[i][j] + b[i][j];
        }
      }

      for (int i = 0; i < row2; i++)
      {
        for (int j = 0; j < col2; j++)
        {
          printf("%d ", sum[i][j]);
        }
        printf("\n");
      }

      int f_row;
      int f_col;
      int f_number;
      printf("which elements you want to know row and column number?\n");
      scanf("%d", &f_number);
      for (int i = 0; i < row2; i++)
      {
        for (int j = 0; j < col2; j++)
        {
          if (f_number == sum[i][j])
          {
            f_row = i + 1;
            f_col = j + 1;
          }
        }
      }
      printf("The %d in the %d row position\n", f_number, f_row);
      printf("The %d in the %d column position\n", f_number, f_col);
    }

    else
      printf("This is not possible");
  }

  else
  {
    if (row1 == row2 && col1 == col2)
    {
      printf("The summation of matrix is\n");

      for (int i = 0; i < row2; i++)
      {
        for (int j = 0; j < col2; j++)
        {
          sum[i][j] = a[i][j] + b[i][j];
        }
      }

      for (int i = 0; i < row2; i++)
      {
        for (int j = 0; j < col2; j++)
        {
          printf("%d ", sum[i][j]);
        }
        printf("\n");
      }

      int f_row;
      int f_col;
      int f_number;
      printf("which elements you want to know row and column number?\n");
      scanf("%d", &f_number);
      for (int i = 0; i < row2; i++)
      {
        for (int j = 0; j < col2; j++)
        {
          if (f_number == sum[i][j])
          {
            f_row = i + 1;
            f_col = j + 1;
          }
        }
      }
      printf("The %d in the %d row position\n", f_number, f_row);
      printf("The %d in the %d column position\n", f_number, f_col);
    }
  }
}
