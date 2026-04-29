
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



//#1/3 Random Matrix 3x3
int RandomNumbers(int From,int To) {
	int randomNum = rand() % (To-From+1)+From;
	return randomNum;
}
void FillMatrixWithRandomNumber(int arr[3][3],int Row,int Column) {
	for (int i = 0; i < Row;i++) {
		for (int j = 0; j < Column;j++) {
			arr[i][j] = RandomNumbers(1,100);
		}
	}
}
void PrintMatrix(int arr[3][3],int Row,int Column) {
	for (int i = 0; i < Row;i++) {
		for (int j = 0; j < Column;j++) {
			cout <<setw(3)<< arr[i][j] << "	";
		}
		cout << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#2/3 Sum Each Row in Matrix
int RowSum(int arr2D[3][3], int Row, int Column) {
	int Sum = 0;
	for (int j = 0; j < Column;j++) {
		Sum += arr2D[Row][j];
	}
	return Sum;
}
void PrintSumofRows(int arr2D[3][3], int Row, int Column) {
	for (int i = 0; i < Row;i++) {
		cout << "Sum of Row " << i + 1 << " = " << RowSum(arr2D,i,Column) << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#3/3 Sum Each Row in Matrix in Single Array 
void SumMatrixRowinArray(int singlearr[],int arr[3][3],int Row,int Column) {
	for (int i = 0; i < 3;i++) {
		singlearr[i] = RowSum(arr, i, Column);
		//cout << "Sum of Row " << i + 1 << " = " << singlearr[i] << endl;
	}
}
void PrintRowsSumArray(int arr[3],int Rows) {
	for (int i = 0; i < Rows;i++) {
		cout << "Sum of Row " << i + 1 << " = " << arr[i] << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#4/3 Sum Each Column in Matrix
int ColumnSum(int arr2D[3][3],int Row,int Column){
	int Sum = 0;
	for (int i = 0; i < Row;i++) {
		Sum += arr2D[i][Column];
	}
	return Sum;
}
void PrintSumOfColumn(int arr2D[3][3],int Row,int Column) {
	for (int j = 0; j < Column;j++) {
		cout << "Sum of Column " << j + 1 << " = " << ColumnSum(arr2D, Row, j) << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#5/3 Sum Each Column in Matrix In Another Single Array
void ColumnSumArray(int arrTranspose[3][3],int arr[3], int Row, int Column) {
	for (int j = 0; j < Column;j++) {
		arr[j] = ColumnSum(arrTranspose,Row,j);
	}
}
void PrintColumnSumArray(int arr[],int Column) {
	for (int j = 0; j < Column;j++) {
		cout << "Sum of Column " << j + 1 << " = " << arr[j] << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#6/3 3x3 Ordered Matrix
void FillMatrixOrderedNumber(int arr[3][3],int Row ,int Column) {
	int Counter = 0;
	for (int i = 0; i < Row;i++) {
		for (int j = 0; j < Column;j++) {
			Counter++;
			arr[i][j] = Counter;
		}
	}
}
void PrintMatrixOrdered(int arr[3][3],int Row,int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			cout <<setw(3) <<arr[i][j] << "	";
		}
		cout << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#7/3 Traspose Matrix
void TransposeMatrix(int arr[3][3],int arrTrasposed[3][3], int Row, int Column) {
	for (int i = 0; i < Row;i++) {
		for (int j = 0; j < Column; j++) {
		 arrTrasposed[i][j]=arr[j][i];
	}
	}
}
void PrintTransposeMatrix(int arr[3][3],int Row ,int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			cout << arr[i][j] << "	";
		}
		cout << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#8/3 Multiply Two Matrix
void FillMatrixFrom1to10(int arr1[3][3],int Row,int Column) {
	for (int i = 0; i < Row;i++) {
		for (int j = 0; j < Column;j++) {
			arr1[i][j] = RandomNumbers(1,10);
		}
	}
}
void Result(int arr1[3][3], int arr2[3][3],int Result[3][3], int Row, int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			Result[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}
void PrintResultMatrix(int Result[3][3], int Row, int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			cout << setw(3) << Result[i][j] << "	";
		}
		cout << endl;
	}
}
/*=====================================================*/
/*=====================================================*/
//#9/3 Print Middle Row and Middle Column of Matrix 
void PrintMiddleRow(int arr[3][3],int Row,int Column) {
	int MiddleRow = Row / 2;
	for (int j = 0; j < Column; j++) {
		printf(" %0*d ", 2, arr[MiddleRow][j]);
	}
	cout << "\n";
}

void PrintMiddleColumn(int arr[3][3],int Row,int Column) {
	int MiddleColumn = Column / 2;
	for (int i = 0; i < Row;i++) {
		printf(" %0*d ",2,arr[i][MiddleColumn]);
	}
	cout << "\n";
}
/*=====================================================*/
/*=====================================================*/
//#10/3 Sum of Matrix 
int SumofMatrix(int arr[3][3],int Row,int Column) {
	int Sum = 0;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			Sum += arr[i][j];
		}
	}
	return Sum;
}
/*=====================================================*/
/*=====================================================*/
//#11/3 Check Matrix Equality
bool CheckMatrixEquality(int arr1[3][3],int arr2[3][3],short Row,short Column) {
	return SumofMatrix(arr1, Row, Column) == SumofMatrix(arr2, Row, Column);
}
int main()
{
	srand((unsigned)time(NULL));
	
	int arr1[3][3],arr2[3][3];
	int arr[3];
	
	FillMatrixFrom1to10(arr1,3,3);
	FillMatrixFrom1to10(arr2,3,3);

	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);
	cout << "Matrix 2 : " << endl;
	PrintMatrix(arr1, 3, 3);
	cout << "The Sum of Matrix 1 = " << SumofMatrix(arr1,3,3) << endl;
	cout << "The Sum of Matrix 2 = " << SumofMatrix(arr2,3,3) << endl;
	if (CheckMatrixEquality(arr1, arr2, 3, 3)) {
		cout << "\nYES: both martices are equal.";
	}
	else {
		cout << "\nNo: martices are NOT equal.";
	}
	system("pause>0");
}
	
		



	/*
	FillMatrixOrderedNumber(arr1,3,3);
	cout << "The Following is a 3x3 Ordered Matrix : " << endl;
	PrintMatrixOrdered(arr1,3,3);
	cout << "The Following is a Transpose Matrix : " << endl;
	TransposeMatrix(arr1,arrTranspose,3,3);
	PrintTransposeMatrix(arrTranspose,3,3);
	*/
	

	/*
	cout << "The Matrix 3x3 after Sum Rows:" << endl;

	PrintSumofRows(arrTranspose,3,3);
	cout << "======== Sum of Row in Single Array : ==========: " << endl;
	SumMatrixRowinArray(arr,arrTranspose,3,3);
	PrintRowsSumArray(arr, 3);
	cout << "======== Sum of Column : ==========" << endl;
	PrintSumOfColumn(arrTranspose,3,3);
	cout << "======== Sum of Column in Single Array : ==========" << endl;
	ColumnSumArray(arrTranspose,arr,3,3);
	PrintColumnSumArray(arr,3);*/


	



