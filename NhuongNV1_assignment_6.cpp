#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;

bool importData(int** pArr, int szRow, int szCol);
void printMatrix(int** pArr, int szRow, int szCol);
int** addMatrix(int** pArr1, int** pArr2, int szRow, int szCol);
void freeMem(int** pArr, int szRow, int szCol);

int main()
{
	int** pArr1, ** pArr2, ** AddArr;
	int szRow, szCol;
	cout << "\nEnter Row: ";
	cin >> szRow;
	cout << "\nEnter Colums: ";
	cin >> szCol;

	pArr1 = new int* [szRow];
	for (int i = 0; i < szRow; i++)
	{
		pArr1[i] = new int[szCol];
	}

	pArr2 = new int* [szRow];
	for (int j = 0; j < szRow; j++)
	{
		pArr2[j] = new int[szCol];
	}

	cout << "\nImport matrix One:";
	importData(pArr1, szRow, szCol);
	cout << "\nMatrix One:";
	printMatrix(pArr1, szRow, szCol);
	cout << "\nImport matrix Two:";
	importData(pArr2, szRow, szCol);
	cout << "\nMatrix Two:";
	printMatrix(pArr2, szRow, szCol);

	AddArr = (int**)addMatrix(pArr1, pArr2, szRow, szCol);
	cout << "\nMatrix SUM:\n";
	printMatrix(AddArr, szRow, szCol);
	freeMem(pArr1, szRow, szCol);
	freeMem(pArr2, szRow, szCol);
	freeMem(AddArr, szRow, szCol);
	return 0;
}
/******************************************************
Parameter
'- pArr: con trỏ trỏ tới vùng nhớ dc cấp phát trong hàm importData()
- szRow: kích thước hàng của matrix
- szCol: kích thước cột của matrix
- Return value: true: success, false: fail
Logic
- Cấp phát vùng nhớ động (new, malloc) để lưu matrix
- Nhập data cho matrix từ keyboard và lưu vào vùng nhớ trên
*******************************************************/
bool importData(int** pArr, int szRow, int szCol)
{
	int iRow, iCol;
	if (pArr) {
		for (iRow = 0; iRow < szRow; iRow++) {
			for (iCol = 0; iCol < szCol; iCol++) {
				cout << "Enter Matrix[" << iRow << "]" << "[" << iCol << "] \n"  << endl;
				cin >> pArr[iRow][iCol];
			}
		}
		return true;
	}
	return false;
}
/*******************************************
Parameter
'- pArr1, pArr2: con trỏ trỏ tới vùng nhớ dc cấp phát trong hàm importData()
- szRow: kích thước hàng của matrix
- szCol: kích thước cột của matrix
- Return value: trả về con trỏ trỏ tới vùng nhớ chứa kết quả của phép cộng matrix
Logic
- Cộng 2 matrix
- Kết quả cộng 2 matrix được lưu vào vùng nhớ động.
********************************************/
int** addMatrix(int** pArr1, int** pArr2, int szRow, int szCol)
{
	for (int i = 0; i < szRow; i++)
	{
		for (int j = 0; j < szCol; j++)
		{
			pArr1[i][j] = pArr1[i][j] + pArr2[i][j];
		}
	}
	return pArr1;
}

/*********************************************************
Parameter
'- pArr: con trỏ trỏ tới vùng nhớ dc cấp phát trong hàm importData()
- szRow: kích thước hàng của matrix
- szCol: kích thước cột của matrix
- Return value: void
Logic
- Hiển thị matrix pArr ra màn hình console
**********************************************************/
void printMatrix(int** pArr, int szRow, int szCol)
{

	cout << "MaTrix A[" << szRow << "]" << "[" << szRow << "]" << "\n";
	for (int i = 0; i < szRow; i++)
	{
		for (int j = 0; j < szCol; j++)
		{
			cout << pArr[i][j] << "  ";
		}
		cout << "\n";
	}
};

/****************************************************
Parameter
'- pArr: con trỏ trỏ tới vùng nhớ dc cấp phát trong hàm importData()
- szRow: kích thước hàng của matrix
- szCol: kích thước cột của matrix
- Return value: void
Logic
- Free memory vùng nhớ được trỏ bởi con trỏ pArr
****************************************************/
void freeMem(int** pArr, int szRow, int szCol)
{
	for (int i = 0; i < szRow; i++) {
			delete[] pArr[i];
			pArr[i] = NULL;
	}
		delete[] pArr;
}