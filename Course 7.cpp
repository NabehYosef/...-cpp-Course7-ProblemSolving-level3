
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
/*=====================================================*/
/*=====================================================*/
//#12/3 Check Matrix Typical
bool CheckMatrixTypical(int arr1[3][3],int arr2[3][3],int Row,int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (arr1[i][j]!=arr2[i][j]) {
				return false;
			}
		}
	}
	return true;
}
/*=====================================================*/
/*=====================================================*/
//#13/3 Check Identity Matrix (Identity : Diagonal Should be only 1)
void FillMatrix0and1(int arr1[3][3], int Row, int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			arr1[i][j] = RandomNumbers(0,1);
		}
	}
}
//MyCode: this solution only matrix 3x3 (it is not optimal ❌)
bool IdentityMatrix(int arr[3][3],int Row,int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (arr[i][j]==1 && arr[i+1][j+1]==1 && arr[i+2][j+2]==1) { 
				return true;
			}
		}
		return false;
	}
}
//Code My Instructor : is Optimal✅
bool IsIdentityMatrix(int arr[3][3], int Row, int Column) {
	//check Diagonal elements are 1 and rest elements are 0
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			//check for diagonals element
			if (i==j && arr[i][j]!=1) {
				return false;
			}
			//check for rest element
			else if (i != j && arr[i][j] != 0) {
				return false;
			}
		}
	}
	return true;
}
/*=====================================================*/
/*=====================================================*/
//#14/3 Check Scalar Matrix (Scalar : the element in Diagonal Should be Equal)
bool IsScalarMatrix(int arr[3][3], int Row, int Column) {
	int firstdigitelements = arr[0][0];
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (i == j && arr[i][j] != firstdigitelements) {
				return false;
			}
			else if (i != j && arr[i][j]!=0) {
				return false;
			}
		}
	}
	return true;
}

/*=====================================================*/
/*=====================================================*/
//#15/3 Count Number in Matrix
int CountNumberinMatrix(int arr[3][3],int Row,int Column , int Number) {
	int CheckNumber = 0;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Row; j++) {
			if (arr[i][j]==Number) {
				CheckNumber++;
			}
		}
	}
	return CheckNumber;
}

// /*=====================================================*/
/*=====================================================*/
//#16/3  Check Sparse Matrix (Sparse : Zeros Count >any Numbers count)
/* My Code :
bool IsSparseMatrix(int arr[3][3],int Row,int Column) {
	int CountZeros=0, CountNumbers=0;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Row; j++) {
			if (arr[i][j]==0) {
				CountZeros++;
			}
			else {
				CountNumbers++;
			}
		}
	}
	if (CountZeros > CountNumbers) {
		return true;
	}
	else {
		return false;
	}
}*///Code My Instructor Check Sparse Matrix (Sparse : Zeros Count >any Numbers count)
bool IsSparseMatrix(int arr[3][3], int Row, int Column) {
	short MatrixSize = Row * Column;
	return (CountNumberinMatrix(arr, 3, 3, 0)) >= ceil((float)(MatrixSize / 2));	
}
// /*=====================================================*/
/*=====================================================*/
//#17/3 Number Exists in Matrix 
bool SearchForNumber(int arr[3][3], int Row, int Column, int Number) {
	for (int i = 0; i < Row;i++) {
		for (int j = 0; j < Column; j++) {
			if (arr[i][j]==Number) {
				return true;
			}
		}
	}
	return false;
}
// /*=====================================================*/
/*=====================================================*/
//#18/3 Intersected Number in Matrces
void IntersectedNumberInMatrices(int arr1[3][3], int arr2[3][3], int Row, int Column) {
	int Number;
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			Number = arr1[i][j];
			if (SearchForNumber(arr2, 3, 3, Number)) {
				cout << setw(3) << Number << "	";
			}
		}
	}
}
// /*=====================================================*/
/*=====================================================*/
//#19/3 Min/Max Number in Matrces
int MinNumber(int arr[3][3],int Row,int Column) {
	int MinNum=arr[0][0];
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (arr[i][j]  < MinNum) {
				MinNum = arr[i][j];
			}
		}
	}
	return MinNum;
}
int MaxNumber(int arr[3][3], int Row, int Column) {
	int MaxNum = arr[0][0];
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (arr[i][j] > MaxNum) {
				MaxNum = arr[i][j];
			}
		}
	}
	return MaxNum;
}
// /*=====================================================*/
/*=====================================================*/
//#20/3 Palindrome Matrices
bool IsPalidromeMatreces(int arr[3][3],int Row ,int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (arr[i][j] != arr[i][Column-1-j]) {
				return true;
			}
		}
	}
	return false;
}
// /*=====================================================*/
/*=====================================================*/
//#21/3 Fibonacci Series UsingLoop
void PrintFebonacciUsingForLoop(int Number,int Prev1,int Prev2) {
	int FebNumber = 0;
	for (int i = 0; i < Number;i++) {
		FebNumber = Prev1 + Prev2;
		Prev1 = Prev2;
		Prev2 = FebNumber;
		cout << FebNumber << "	";
	}
}
// /*=====================================================*/
/*=====================================================*/
//#22/3 Fibonacci Series with Recursion
void PrintFebonacciUsingRecursion(int Number ,int Prev1 ,int Prev2) {
	int FebNumber = 0;
	if (Number>0) {
		FebNumber = Prev1 + Prev2;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "	";
		PrintFebonacciUsingRecursion(Number-1,Prev1,Prev2);
	}
}
// /*=====================================================*/
/*=====================================================*/
//#23/3 Print First Letter of Each Word
string ReadString() {
	string S1;
	cout << "\nPlease Enter Your String :\n";
	getline(cin,S1);
	return S1;
}
void PrintFirstNumberofEachWord(string S1) {
	bool isFirsNumber=true;
	for (int i = 0; i < S1.length();i++) {
		if (S1[i] != ' ' && isFirsNumber) {
			cout << S1[i] << endl;
		}
		isFirsNumber = (S1[i] == ' ' ? true : false);
	}
}
// /*=====================================================*/
/*=====================================================*/
//#24/3 Upper First Letter of Each Word
string UpperFirstLetterofEachWord(string S1) {
	bool isFirstLetter=true;
	for (int i = 0; i < S1.length();i++) {
		if(S1[i] != ' ' && isFirstLetter) {
			S1[i] = toupper(S1[i]);
		}
		isFirstLetter = (S1[i]==' '?true : false);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//#25/3 Lower First Letter of Each Word
string LowerFirstLetterofEachWord(string S1) {
	bool isFirstLetter = true;
	for (int i = 0; i < S1.length();i++) {
		if (S1[i]!=' '&&isFirstLetter) {
			S1[i] = tolower(S1[i]);
		}
		isFirstLetter = (S1[i]==' '?true:false);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//#26/3 Upper/Lower All Letters of a String
string UpperAllString(string S1) {
	for (int i = 0; i < S1.length();i++) {
		S1[i] = toupper(S1[i]);
	}
	return S1;
}
string LowerAllstring(string S1) {
	for (int i = 0; i < S1.length();i++) {
		S1[i] = tolower(S1[i]);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//#27/3 Invert Charcter Case 
char ReadChar() {
	char Ch1;
	cout << "Please Enter Your Char :\n";
	cin >> Ch1;
	return Ch1;
}
char InvertedLetterCase(char Ch1) {
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}
///*=====================================================*/
/*=====================================================*/
//#28/3 Invert All Letter Case
string InvertedAllLetterCase(string S1) {
	for (int i = 0; i < S1.length();i++) {
		S1[i] = InvertedLetterCase(S1[i]);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//Enum Method
enum enWhatToCount  {SmallLetters=0,CapitalLetters=1,All=2};

short CountLetters(string S1,enWhatToCount WhattoCount=enWhatToCount::All) {
	short Counter = 0; 
	if (WhattoCount==enWhatToCount::All) {
		return S1.length();
	}
	for (int i = 0; i < S1.length(); i++) {
		if (WhattoCount==enWhatToCount::CapitalLetters&&isupper(S1[i])) {
			Counter++;
		}
		if(WhattoCount==enWhatToCount::SmallLetters&&islower(S1[i])) {
			Counter++;
		}
	}
}
/*=====================================================*/
//#29/3 Count Small/Capital Letters
int CountCapitalLetters(string S1) {
	int CountCapitalLetters=0;
	for (int i = 0; i < S1.length();i++) {
		if (isupper(S1[i])) {
			CountCapitalLetters++;
		}
	}
	return CountCapitalLetters;
}
int CountSmallLetters(string S1) {
	int CountSmallLetters = 0;
	for (int i = 0; i < S1.length(); i++) {
		if (islower(S1[i])) {
			CountSmallLetters++;
		}
	}
	return CountSmallLetters;
}
///*=====================================================*/
/*=====================================================*/
//#30/3 Count Letters
int CountLetter(string S1,char letter) {
	int count = 0;
	for (short i = 0; i < S1.length();i++) {
		if (S1[i]==letter) {
			count++;
		}
	}
	return count;
}
int main()
{
	//srand((unsigned)time(NULL));
	string S1=ReadString();
	char c = ReadChar();
	cout << "\n Letter " << c << "\n Count = " << CountLetter(S1,c);
		

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


	



