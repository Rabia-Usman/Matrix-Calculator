#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int matrix1[10][10], matrix2[10][10], sum[10][10], sub[10][10],multiply[10][10], scalarMulArr[10][10], ident_Matrix[10][10],transpose[10][10];
int Matrix1_row = 0, Matrix1_column = 0, Matrix1_size = 0, Matrix2_row = 0,
    Matrix2_column = 0, Matrix2_size = 0, scalar_num = 0, check_value = 1,
    Diagonal_Num = 0, symmetric = 0;
void Header();
char Menu();
void input();
void Matrix_Addition();
void display_sum();
void Matrix_Subtraction();
void display_sub();
void multiply_Input();
void Matrix_Multiplication();
void display_multiplication();
void scalar_mul_input();
void Scalar_multiply();
void display_Scalar();
void identity_input();
void Identity_Display();
void transpose_input();
void find_transpose();
void display_transpose();
void Diagonal_Input();
void check_Diagonal();
void Symmetric_Input();
void check_Symmetric();
void clearscreen();
int main() {
  char option = ' ';
  Header();
  option = Menu();
  if (option == '1') 
  {
    
    input();
    clearscreen();
    Matrix_Addition();
    clearscreen();
    display_sum();
    Sleep(500);
    option = Menu();
  }
  if (option == '2')
  {
    input();
    clearscreen();
    Matrix_Subtraction();
    clearscreen();
    display_sub();
    option = Menu();
  }
  if (option == '3')
  {
    multiply_Input();
    clearscreen();
    Matrix_Multiplication();
    clearscreen();
    display_multiplication();
    option = Menu();
  }
  if (option == '4')
  {
    scalar_mul_input();
    clearscreen();
    Scalar_multiply();
    clearscreen();
    display_Scalar();
    option = Menu();
  }
  if (option == '5')
  {
    identity_input();
    clearscreen();
    Identity_Display();

    option = Menu();
  }
  if (option == '6')
  {
    transpose_input();
    clearscreen();
    find_transpose();
    clearscreen();
    display_transpose();
    option = Menu();
  }
  if (option == '7')
  {
    Diagonal_Input();
    clearscreen();
    check_Diagonal();
    clearscreen();
    display_transpose();
    option = Menu();
  }
  if (option == '8')
  {
    Symmetric_Input();
    clearscreen();
    check_Symmetric();
    option = Menu();
  }
  if(option == '9')
  {
    cout << "You have Exited.\n";
  }
    return 0;
}
void Header(){
    cout << "___       ___       ___      ___________ _______    _________    _     _         ______        ___        _   ______   ___    ___  _        ___     __________   *_______*   _______          " << endl;
    cout << "| |*     *| |       | |      |_________| | |  | |  |_________|  | |   | |       | _____|       | |       | | | |____|  | |    | | | |       | |    |__________| | |     | |  | |  | |         " << endl;
    cout << "| | *   * | |    | |   | |       | |     | |  | |      | |       | | | |        | |          | | | |     | | | |       | |    | | | |     | | | |       | |     | |     | |  | |  | |         " << endl;
    cout << "| |  * *  | |    | |----| |      | |     | |__|_|      | |        | | |         | |         | |___| |    | | | |       | |    | | | |    | |___| |      | |     | |     | |  | |__|_|         " << endl;
    cout << "| |   *   | |   | |______| |     | |     | |__|__      | |       | | | |        | |        | |_____| |   | | | |       | |    | | | |   | |_____| |     | |     | |     | |  | |__|__         " << endl;
    cout << "| |       | |  | |        | |    | |     | |  | |   ___| |___   | |   | |       | |____   | |       | |  | | | |____   | |    | | | |  | |       | |    | |     | |     | |  | |   | |        " << endl;
    cout << "|_|       |_| |_|          |_|   |_|     |_|   |_| |_________| |_|     |_|      |______| |_|         |_| |_| |______|   |******|  |_| |_|         |_|   |_|      *_______*   |_|    |_|       " << endl;
}
char Menu(){
    char option = ' ';
    cout << "\t\t\t\t\t\t\tMENU\t\t\t\t\t\t\t\n";
    cout << "1. Addition of two matrices (A+B)\n";
    cout << "2. Subtraction of two matrices (A-B)\n";
    cout << "3. Multiplication of two matrices (A*B)\n";
    cout << "4. Scalar multiplication (value*Matrix)\n";
    cout << "5. Is Identity matrix (isIdentity(Matrix))\n";
    cout << "6. Transpose of the Matrix (transpose(Matrix))\n";
    cout << "7. Is Diagonal Matrix (isDiagonal(Matrix))\n";
    cout << "8. Is Symmetric Matrix (isSymmetric(Matrix))\n";
    cout << "9. Exit\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
    cout << "Enter your OPTION\n";
    cin >> option;
    return option;
}
void input()
{
  cout << "       SIZE OF MATRIX 1" << endl;
  cout << "Enter number of Rows : \n";
  cin >> Matrix1_row;
  cout << "Enter number of Columns : \n";
  cin >> Matrix1_column;
  cout << "       SIZE OF MATRIX 2" << endl;
  cout << "Enter number of Rows : \n";
  cin >> Matrix2_row;
  cout << "Enter number of Columns : \n";
  cin >> Matrix2_column;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      matrix1[i][j] = 0;
      matrix2[i][j] = 0;
    }
  }
  while (true) 
  {
   Matrix1_size = Matrix1_row * Matrix1_column;
   Matrix2_size = Matrix2_row * Matrix2_column;
    if (Matrix1_size != Matrix2_size) 
    {
        cout << "The size of MATRIX 1 IS NOT EQUAL TO size of MATRIX 2\n";
        cout << "                                                   \n";
        cout << "Enter number of Rows : \n";
        cin >> Matrix1_row;
        cout << "Enter number of Columns : \n";
        cin >> Matrix1_column;
        cout << "Enter number of Rows : \n";
        cin >> Matrix2_row;
        cout << "Enter number of Columns : \n";
        cin >> Matrix2_column;
    }
    if (Matrix1_size == Matrix2_size)
    {
        break;
    }
  }
    cout << "           Enter Elements of the Matrix 1 " << Matrix1_row << " X " << Matrix1_column << endl;
    for (int i = 0; i <Matrix1_row; i++)
    {
        for (int j = 0; j< Matrix1_column ; j++) 
        {
          cout << "Enter element Matrix " << i + 1 << " " << j + 1 << " : ";
          cin >> matrix1[i][j];
        }
    }
    cout << "           Enter Elements of the Matrix 2 " << Matrix2_row << " X "<< Matrix2_column << endl;
    for (int i = 0; i < Matrix2_row; i++) 
    {
      for (int j = 0; j < Matrix2_column; j++)
      {
        cout << "Enter element Matrix " << i + 1 << " " << j + 1 << " : ";
        cin >> matrix2[i][j];
      }
    }
}
void Matrix_Addition()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
}
void display_sum()
{
  cout << endl << "Sum of two matrices is: " << endl;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++) 
    {
      cout << sum[i][j] << "  ";
      if (j == Matrix1_column - 1)
        cout << endl;
    }
  }
}
void Matrix_Subtraction()
{
  for (int i = 0; i < Matrix1_row; i++) 
  {
    for (int j = 0; j < Matrix1_column; j++) 
    {
      sub[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }
}
void display_sub() 
{
  cout << endl << "Subtraction of two matrices is: " << endl;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cout << sub[i][j] << "  ";
      if (j == Matrix1_column - 1)
        cout << endl;
    }
  }
}
void multiply_Input()
{
  cout << "       SIZE OF MATRIX 1" << endl;
  cout << "Enter number of Rows : \n";
  cin >> Matrix1_row;
  cout << "Enter number of Columns : \n";
  cin >> Matrix1_column;
  cout << "       SIZE OF MATRIX 2" << endl;
  cout << "Enter number of Rows : \n";
  cin >> Matrix2_row;
  cout << "Enter number of Columns : \n";
  cin >> Matrix2_column;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      matrix1[i][j] = 0;
      matrix2[i][j] = 0;
    }
  }
  while(true)
  {
    if (Matrix1_column != Matrix2_row)
    {
      cout << "Columns of first Matrix are NOT EQUAL to Rows of Second Matrix \n";
      cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
      cout << "Re-Enter Rows for Ist Matrix \n";
      cin >> Matrix1_row;
      cout << "Re-Enter Columns for Ist Matrix \n";
      cin >> Matrix1_column;
      cout << "Re-Enter Rows for Ist Matrix \n";
      cin >> Matrix2_row;
      cout << "Re-Enter Columns for Ist Matrix \n";
      cin >> Matrix2_column;
    }
    if (Matrix1_column == Matrix2_row)
    {
      break;
    }
  }
  cout << "           Enter Elements of the Matrix 1 " << Matrix1_row << " X " << Matrix1_column << endl;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cout << "Enter element Matrix " << i + 1 << " " << j + 1 << " : ";
      cin >> matrix1[i][j];
    }
  }
  cout << "           Enter Elements of the Matrix 2 " << Matrix2_row << " X " << Matrix2_column << endl;
  for (int i = 0; i < Matrix2_row; i++)
  {
    for (int j = 0; j < Matrix2_column; j++)
    {
      cout << "Enter element Matrix " << i + 1 << " " << j + 1 << " : ";
      cin >> matrix2[i][j];
    }
  }
}
void Matrix_Multiplication()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix2_column; j++)
    {
      for (int k = 0; k < Matrix1_column; k++)
      {
        multiply[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
}
void display_multiplication()
{
  cout << endl << "Output Matrix: " << endl;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix2_column; j++)
    {
      cout << " " << multiply[i][j];
      if (j == Matrix2_column - 1)
        cout << endl;
    }
  }
}
void scalar_mul_input()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      matrix1[i][j] = 0;
    }
  }
  cout << "       SIZE OF MATRIX" << endl;
  cout << "Enter number of Rows : \n";
  cin >> Matrix1_row;
  cout << "Enter number of Columns : \n";
  cin >> Matrix1_column;
  cout <<"Enter number to find the scalar with : \n";
  cin >> scalar_num;
  cout << "\t\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\tEnter Elements of the Matrix " << Matrix1_row << " X " << Matrix1_column << endl;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cout << "Enter element Matrix " << i + 1 << " " << j + 1 << " : ";
      cin >> matrix1[i][j];
    }
  }
}
void Scalar_multiply()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      scalarMulArr[i][j] = scalar_num * matrix1[i][j];
    }
  }
}
void display_Scalar()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cout << scalarMulArr[i][j] << " ";
    }
    cout << "\n";
  }
}
void identity_input()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++) 
    {
      matrix1[i][j] = 0;
    }
  }
  cout << "Enter Matrix rows to find Identity Matrix =  ";
  cin >> Matrix1_row;
  cout << "Enter Matrix columns to find Identity Matrix =  ";
  cin>> Matrix1_column;
  while(true)
  {
    if(Matrix1_row != Matrix1_column)
    {
      cout << "Matrix NUMBER OF ROW IS NOT EQUAL TO NUMBER OF COLUMNS \n";
      cout << "\t\t\t\t\t\t\t\t\t\t\n";
      cout << "Re-Enter number of ROWS & COLUMNS \n";
      cout << "Enter Matrix rows to find Identity Matrix =  ";
      cin >> Matrix1_row;
      cout << "Enter Matrix columns to find Identity Matrix =  ";
      cin >> Matrix1_column;
      if (Matrix1_row == Matrix1_column)
      {
       break;
      }
    }
  }
  cout << "\nEnter the Identity Matrix Items\n";
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cin >> ident_Matrix[i][j];
    }
  }
}
void Identity_Display()
{
  // check Diagonal elements are 1 and rest elements are 0
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      // check for diagonals element
      if (i == j && ident_Matrix[i][j] != 1)
      {
        check_value = 1;
        break;
      }
      // check for rest elements
      else if (i != j && ident_Matrix[i][j] != 0)
      {
        check_value = 1;
        break;
      }
    }
  }
  if (check_value == 1)
  {
    cout << "Given Matrix is not an identity matrix.";
  }
  else
  {
    cout << "Given Matrix is an identity matrix.";
  }
}
void transpose_input()
{
  cout << "Enter Matrix rows to find TRANSPOSE of a Matrix =  ";
  cin >> Matrix1_row;
  cout << "Enter Matrix columns to find TRANSPOSE of a Matrix =  ";
  cin >> Matrix1_column;
  cout << "\t\t\t\t\t\t\t\n";
  cout << "\nEnter the TRANSPOSE Matrix Items\n";
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cin >> matrix1[i][j];
    }
  }
}
void find_transpose()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      transpose[j][i] = matrix1[i][j];
    }
  }
}
void display_transpose()
{
  cout << "\nTranspose of Matrix: " << endl;
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cout << " " << transpose[i][j];
      if (j == Matrix1_row - 1)
      {
        cout << endl << endl;
      }
    }
  }
}
void Diagonal_Input()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      matrix1[i][j] = 0;
    }
  }
  cout << "Enter Matrix rows to find Diagonal Matrix =  ";
  cin >> Matrix1_row;
  cout << "Enter Matrix columns to find Diagonal Matrix =  ";
  cin >> Matrix1_column;
  cout << "\t\t\t\t\t\t\t\n";
  while(true)
  {
    if(Matrix1_row!= Matrix1_column)
    {
      cout << "Re-Enter number of ROWS and COLUMNS\n";
      cout << "Enter Matrix rows to find Diagonal Matrix =  ";
      cin >> Matrix1_row;
      cout << "Enter Matrix columns to find Diagonal Matrix =  ";
      cin >> Matrix1_column;
      if(Matrix1_row == Matrix1_column)
      {
        break;
      }
    }
  }
  cout << "\nEnter the DIAGONAL Matrix Items\n";
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cin >> matrix1[i][j];
    }
  }
}
void check_Diagonal()
{
  for (int i = 0; i <= (Matrix1_row - 1); i++)
  {
    for (int j = 0; j <= (Matrix1_column - 1); j++)
    {
      if (i != j && matrix1[i][j] == 0)
      {
        Diagonal_Num++;
      }
    }
  }
  if (Diagonal_Num == Matrix1_row * Matrix1_column - Matrix1_row)
  {
    cout << "\nIt is a Diagonal Matrix";
  }
  else
  {
    cout << "\nIt is Not a Diagonal Matrix";
  }
}
void Symmetric_Input()
{
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      matrix1[i][j] = 0;
    }
  }
  cout << "Enter Matrix rows to find Symmetric Matrix =  ";
  cin >> Matrix1_row;
  cout << "Enter Matrix columns to find Symmetric Matrix =  ";
  cin >> Matrix1_column;
  cout << "\t\t\t\t\t\t\t\n";
  while (true) 
  {
    if (Matrix1_row != Matrix1_column) 
    {
      cout << "Re-Enter number of ROWS and COLUMNS\n";
      cout << "Enter Matrix rows to find Symmetric Matrix =  ";
      cin >> Matrix1_row;
      cout << "Enter Matrix columns to find Symmetric Matrix =  ";
      cin >> Matrix1_column;
      if (Matrix1_row == Matrix1_column)
      {
        break;
      }
    }
  }
  cout << "\nEnter the Symmetric Matrix Items\n";
  for (int i = 0; i < Matrix1_row; i++)
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      cin >> matrix1[i][j];
    }
  }
}
void check_Symmetric()
{
  for (int i = 0; i < Matrix1_row; i++) 
  {
    for (int j = 0; j < Matrix1_column; j++)
    {
      if (matrix1[i][j] != matrix1[j][i])
      {
        symmetric = 1;
        break;
      }
    }
  }
  // displaying the result
  if (symmetric == 0)
  {
    cout << "\nIt's a symmetric matrix";
  }
  else
  {
    cout << "\nNot a symmetric matrix";
  }
}
void clearscreen()
{
  char x = ' ';
  cout << "press any key to continue .....\n";
  cin >> x;
  system("cls");
}
