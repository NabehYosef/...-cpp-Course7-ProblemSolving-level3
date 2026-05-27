
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
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
bool IsPalidromeMatreces(int arr[3][3], int Row, int Column) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Column; j++) {
			if (arr[i][j] != arr[i][Column - 1 - j]) {
				return false;
			}
		}
	}
	return true;
}
// /*=====================================================*/
/*=====================================================*/
//#21/3 Fibonacci Series UsingLoop
void PrintFebonacciUsingForLoop(int Number, int Prev1, int Prev2) {
	int FebNumber = 0;
	for (int i = 0; i < Number; i++) {
		FebNumber = Prev1 + Prev2;
		Prev1 = Prev2;
		Prev2 = FebNumber;
		cout << FebNumber << "	";
	}
}
// /*=====================================================*/
/*=====================================================*/
//#22/3 Fibonacci Series with Recursion
void PrintFebonacciUsingRecursion(int Number, int Prev1, int Prev2) {
	int FebNumber = 0;
	if (Number > 0) {
		FebNumber = Prev1 + Prev2;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "	";
		PrintFebonacciUsingRecursion(Number - 1, Prev1, Prev2);
	}
}
// /*=====================================================*/
/*=====================================================*/
//#23/3 Print First Letter of Each Word
string ReadString() {
	string S1;
	cout << "\nPlease Enter Your String :\n";
	getline(cin, S1);
	return S1;
}

void PrintFirstLetterofString(string S1) {
	bool isFirstLetter = true;
	for (int i = 0; i <= S1.length();i++) {
		if (S1[i]!=' '&&isFirstLetter) {
			cout << S1[i] << endl;
		}
		isFirstLetter = (S1[i]!=' ' ? true : false);
	}
}
// /*=====================================================*/
/*=====================================================*/
//#24/3 Upper First Letter of Each Word
string UpperFirstLetterofEachWord(string S1) {
	bool isFirstLetter = true;
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] != ' ' && isFirstLetter) {
			S1[i] = toupper(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//#25/3 Lower First Letter of Each Word
string LowerFirstLetterofEachWord(string S1) {
	bool isFirstLetter = true;
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] != ' ' && isFirstLetter) {
			S1[i] = tolower(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//#26/3 Upper/Lower All Letters of a String
string UpperAllString(string S1) {
	for (int i = 0; i < S1.length(); i++) {
		S1[i] = toupper(S1[i]);
	}
	return S1;
}
string LowerAllstring(string S1) {
	for (int i = 0; i < S1.length(); i++) {
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
	for (int i = 0; i < S1.length(); i++) {
		S1[i] = InvertedLetterCase(S1[i]);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//Enum Method
enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 2 };

short CountLetters(string S1, enWhatToCount WhattoCount = enWhatToCount::All) {
	short Counter = 0;
	if (WhattoCount == enWhatToCount::All) {
		return S1.length();
	}
	for (int i = 0; i < S1.length(); i++) {
		if (WhattoCount == enWhatToCount::CapitalLetters && isupper(S1[i])) {
			Counter++;
		}
		if (WhattoCount == enWhatToCount::SmallLetters && islower(S1[i])) {
			Counter++;
		}
	}
}
/*=====================================================*/
//#29/3 Count Small/Capital Letters
int CountCapitalLetters(string S1) {
	int CountCapitalLetters = 0;
	for (int i = 0; i < S1.length(); i++) {
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
int CountLetter(string S1, char letter) {
	int count = 0;
	for (short i = 0; i < S1.length(); i++) {
		if (S1[i] == letter) {
			count++;
		}
	}
	return count;
}
///*=====================================================*/
/*=====================================================*/
//#31/3 Count Letter (Match Case)
short CountLetter(string S,char letter,bool MatchCase=true) {
	int counter = 0;
	for (int i = 0; i < S.length();i++) {
		if (MatchCase) {
			if (S[i]==letter) {
				counter++;
			}
			else {
				if (tolower(S[i]==tolower(letter))) {
					counter++;
				}
			}
		}
	}
	return counter;
}
///*=====================================================*/
/*=====================================================*/
//32/3 Is Vowel ?
bool isVowel(char Ch1) {
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') ||
		(Ch1 == 'o') || (Ch1 == 'e') || (Ch1 == 'u') || (Ch1 == 'i'));
}
///*==================================================*/
/*=====================================================*/
//33/3 Count Vowel
int CountVowel(string S ) {
	int counter = 0;
	for (int i = 0; i < S.length(); i++) {
		if (isVowel(S[i])) {
			counter++;
		}
	}
	return counter;
}
///*=====================================================*/
/*=====================================================*/
//34/3 print all vowel in string 
void PrintAllVowels(string S) {
	for (int i = 0; i < S.length(); i++) {
		if (isVowel(S[i])) {
			cout << S[i] << "	";
		}
	}
}
///*=====================================================*/
/*=====================================================*/
//35/3 print Each word in string
//Optimal Solution
void PrintEachWordInString(string S1) {
	string sWord; 
	string delim = " ";
	short pos=0;
	while ((pos = S1.find(" ")) != std::string::npos) {
		sWord = S1.substr(0,pos);
		if (sWord!="") {
			cout << sWord << endl;
		}
		S1.erase(0,pos+delim.length());
	}
	if (S1 != "") {
		cout << S1 << endl;
	}
}
///*=====================================================*/
/*=====================================================*/
//36/Count Each word in string
short CountWords(string S1) {
	short counter = 0;
	short pos = 0;
	string sWord;
	string delim = " ";
	while ((pos = S1.find(" ")) != std::string::npos) {
		sWord = S1.substr(0, pos);
		if (sWord!="") {
			counter++;
		}
		S1.erase(0,pos+delim.length());
	}
	if (S1 != "") {
		counter++;
	}
	return counter;
}
///*=====================================================*/
/*=====================================================*/
//37/3 split string 
vector <string> SplitString(string S1,string delim ) {
	vector<string>vString;
	string sWord;
	short pos=0;
	while ((pos=S1.find(delim))!=std::string::npos) {
		sWord = S1.substr(0,pos);
		if (sWord!="") {
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "") {
		vString.push_back(S1);
	}
	return vString;
}
///*=====================================================*/
/*=====================================================*/
//38/3 TrimLeft , TrimRight , Trim
string TrimLeft(string S1) {
	for (int i = 0; i < S1.length();i++) {
		if (S1[i]!=' ') {	
			return	S1.substr(i, S1.length() - 1);
		}
	}
	return "";
}
string TrimRight(string S1) {
	for (int i = S1.length()-1 ; i >= 0;i--) {
		if (S1[i]!=' ') {
			return S1.substr(0,i+1);
		}
	}
	return "";
}
string Trim(string S1) {
	return (TrimLeft(TrimRight(S1)));
}
///*=====================================================*/
/*=====================================================*/
//39/3 Join string
string JoinString(vector<string> vString,string Delim) {
	string S1 = "";
	for (string &newS :vString ) {	
		S1 = S1 + newS + Delim;
	}
	return S1.substr(0,S1.length()-Delim.length());
}
//40/3 Join String (OverLoading)
string JoinString(string arrString[],int length , string Delim) {
	string S1 = "";
	for (int i = 0; i < length;i++) {
		S1 += arrString[i] + Delim; 
	}
	return S1.substr(0,S1.length()-Delim.length());
}
///*=====================================================*/
/*=====================================================*/
//41/3 Reverse Word
string ReverseWord(string S1,string Delim) {
	vector<string>vString;
	string word;
	vString = SplitString(S1," ");
	vector <string>::iterator iter = vString.end();

	while (iter!=vString.begin()) {
		--iter;
		word += *iter + " ";
	}
	return word.substr(0,word.length()-1);
}
///*=====================================================*/
/*=====================================================*/
//42/3 Replace Word
string ReplaceWordInStringUsingBuildInFunction(string S1,string StringToReplace,string sReplaceTo) {
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos) {
		S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);
		pos=S1.find(StringToReplace);
	}
	return S1;
}
///*=====================================================*/
/*=====================================================*/
//43/3 Replace Word (Custom)
string ReplaceWordInStringUsingSplit(string S1, string
	StringToReplace, string sRepalceTo, bool MatchCase = true)
{
	vector<string> vString = SplitString(S1, " ");
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sRepalceTo;
			}
		}
		else
		{
			if (LowerAllstring(s) ==
				LowerAllstring(StringToReplace))
			{
				s = sRepalceTo;
			}
		}
	}
	return JoinString(vString, " ");
}
///*=====================================================*/
/*=====================================================*/
//44/3 Remove Punctuations 
string RemovePanctuationsFromString(string S1) {
	string S2 = " ";
	for (int i = 0; i < S1.length(); i++) {
		if (!ispunct(S1[i])) {
			S2 += S1[i];	
		}
	}
	return S2;
}
///*=====================================================*/
/*=====================================================*/
//45/3 Convert Record To line 
struct stClints {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
stClints ReadNewClient() {
	stClints Clint;
	cout << "Enter Accont Number : ";
	getline(cin>>ws,Clint.AccountNumber);
	cout << "Enter Your PinCode : ";
	getline(cin,Clint.PinCode);
	cout << "Enter Your Name : ";
	getline(cin,Clint.Name);
	cout << "Enter Your Phone : ";
	getline(cin, Clint.Phone);
	cout << "Enter AccountBallace : ";
	cin >> Clint.AccountBalance;
	return Clint;
}
string ConvertRecordToLine(stClints Clint , string Seperator="#//#") {
	string stClintRecord = "";
	stClintRecord += Clint.AccountNumber + Seperator;
	stClintRecord += Clint.PinCode + Seperator;
	stClintRecord += Clint.Name + Seperator;
	stClintRecord += Clint.Phone + Seperator;
	stClintRecord += to_string(Clint.AccountBalance);
	return stClintRecord;
}
///*=====================================================*/
/*=====================================================*/
//46/3 Convert Line Data to Record
stClints ConvertLineToRecord(string Line, string Seperator="#//#") {
	stClints Clint;
	vector<string>vClintData;
	vClintData = SplitString(Line,Seperator);

	Clint.AccountNumber = vClintData[0];
	Clint.PinCode = vClintData[1];
	Clint.Name = vClintData[2];
	Clint.Phone = vClintData[3];
	Clint.AccountBalance = stod(vClintData[4]);
}
void PrintClientRecord(stClints Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}
///*=====================================================*/
/*=====================================================*/
//47/3 Add Clients To File
void AddDataLineToFile(string FileName, string stDataline) {
	fstream Myfile;
	Myfile.open(FileName, ios::out | ios::app);
	if (Myfile.is_open()) {
		Myfile << stDataline << endl;
		Myfile.close();
	}
}
const string ClientsFileName = "Clients.txt";
void AddNewClient() {
	stClints Clint;
	Clint = ReadNewClient();
	AddDataLineToFile(ClientsFileName,ConvertRecordToLine(Clint));
}
void AddMoreClients() {
	char Addmore = 'Y';
	do {
		system("cls");
		cout << "Adding New Client:\n\n";
		AddNewClient();
		cout << "Client Added Successfully,do you want to add more Clients 	Y/N	 ?";
		cin >> Addmore;
	} while (toupper(Addmore)=='Y');
}
///*=====================================================*/
/*=====================================================*/
//48/3 Show All Clients

int main()
{
	//srand((unsigned)time(NULL));	
	AddMoreClients();
	system("pause>0");
}
