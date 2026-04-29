
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



//#1/3 Random Matrix 3x3


/*=====================================================*/
/*=====================================================*/
//#2/3 Sum Each Row in Matrix
//MyCode :


//AboHadhoud Code :


/*=====================================================*/
/*=====================================================*/
//#3/3 Sum Each Row in Matrix in Array 


/*=====================================================*/
/*=====================================================*/
//#4/3 Sum Each Column in Matrix


/*=====================================================*/
/*=====================================================*/
//#5/3 Sum Each Column in Matrix In Another Array
int main()
{
	srand((unsigned)time(NULL));
	int arrstore[3];
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr,3,3);

	cout << "The Following is a 3x3 Random Matrix :\n";
	PrintMatrix(arr,3,3);

	cout << "\n The Following are the Sum of each Row in the Matrix :\n";
	PrintEachRowSum(arr,3,3);

	cout << "Arr Store :" << endl;
	StoreArraysSum(arrstore,arr,3,3);
	PrintOneDimentionalArray(arrstore,3);

	system("pause>0");
}


