
#pragma warning(disable:4996) //Disable Warning C4996 : 'function': was declared deprecated
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <ctime>
using namespace std;


int ReadNumber() {
	int Number;
	cin >> Number;
	return Number;
}

//function declaratoin
void add(int, int);


int MySum(int a, int b, int c = 0, int d = 0) {
	return (a + b + c + d);
}

//declaration
void Function2();

void Function4()
{
	cout << "Hi I'm function4 " << endl;
}
void Function3()
{
	Function4();
}
//defintion
void Function2()
{
	Function3();
}

void Function1()
{

	Function2();
}


//Recursion  (Recurcive Call)
void PrintNumber(int N, int M) {
	if (N <= M) {
		cout << N << endl;
		PrintNumber(N + 1, M);
	}
}

//#Recursion Print Numbers From M down To N
void PrintNumberDown(int M, int N) {
	if (M >= N) {
		cout << M << endl;
		PrintNumberDown(M - 1, N);
	}
}
//#Recursion Calculate Power N^M
int CalculatePower(int Base, int Power) {

	if (Power == 0) return  1;

	else {
		return Base * CalculatePower(Base, Power - 1);
	}
}

void MyFunc() {
	static int Number = 1;
	cout << "Value of Number : " << Number << endl;

	Number++;
}

void ExampleIntegerPrintF() {
	int page = 1, totalpage = 10;
	//print string and int variable
	printf("The Page Number = %d \n", page);
	printf("You are in page %d of %d \n", page, totalpage);

	//width specification
	printf("The page number = 0%d \n", 1, page);
	printf("The page number = 0%d \n", 2, page);
	printf("The page number = 0%d \n", 3, page);
	printf("The page number = 0%d \n", 4, page);

	int Number1 = 10, Number2 = 20;
	printf("The Result of %d + %d = %d", Number1, Number2, Number1 + Number2);

}


void ExampleFloatPrintF() {
	float PI = 3.14159265;
	//Precision specification
	printf("Precision specification of %.*f\n", 1, PI);
	printf("Precision specification of %.*f\n", 2, PI);
	printf("Precision specification of %.*f\n", 3, PI);
	printf("Precision specification of %.*f\n", 4, PI);
	printf("Precision specification of %.*f\n", 5, PI);

	float x = 7.0, y = 9.0;
	printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);

	double d = 12.45;
	printf("The double value is : %.3f \n", d);
	printf("The double value is : %.4f \n", d);
}

void ExampleStringCharPrintF() {
	char Name[] = "Nabeh-Yousef";
	char SchoolName[] = "Programming Advices";

	printf("Dear %s, How are you ? \n\n", Name);
	printf("Welcome to %s School! \n\n", SchoolName);

	char c = 'S';
	printf("Setting the width of c : %*c \n", 1, c);
	printf("Setting the width of c : %*c \n", 2, c);
	printf("Setting the width of c : %*c \n", 3, c);
	printf("Setting the width of c : %*c \n", 4, c);
}

void StewPrintF() {
	cout << "---------|--------------------------------|---------\n| " << endl;
	cout << " Code | Name | Mark| " << endl;
	cout << "---------|--------------------------------|---------| " << endl;
	cout << setw(9) << "C101" << "|" << setw(32) << "introductionto Programming 1" << " | " << setw(9) << "95" << " | " << endl;
	cout << setw(9) << "C102" << "|" << setw(32) << "ComputerHardware" << " | " << setw(9) << "88" << " | " << endl;
	cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
	cout << "---------|--------------------------------|---------| " << endl;
}
void TwoDimenstionalArrays() {
	//int x[Rows][Column] ; 
	int x[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << x[i][j] << "	";
		}
		cout << endl;
	}
	/*Multiplication
	* int arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = (i+1) * (j+1);
		}

	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%0*d ",2,arr[i][j]);
		}
		cout << endl;
	}
	*/
	//Vector
	void CollectionofVectors(); {
		vector<int> vNumbers = { 10,20,30,40,50 };

		cout << "Nuber Vector =";

		for (int& Number : vNumbers) {
			cout << Number << " ";
		}
	}
}

int ReadNumberVec() {
	int x;
	cout << "Enter your number : " << endl;
	cin >> x;
	return x;
}
void PrintVectorNumber(vector<int>& vNumbers) {
	for (int& Numbers : vNumbers) {
		cout << Numbers << " ";
	}
}
void addNumber(vector<int>& vNumber) {
	char Readmore;
	do {
		vNumber.push_back(ReadNumberVec());
		cout << "Do you want to add Number if yes Enter Y/y :";
		cin >> Readmore;
	} while (Readmore == 'Y' || Readmore == 'y');
}

struct stEmployee {
	string FirstName;
	string LastName;
	double Salary;
};
stEmployee ReadEmployeeInfo() {
	stEmployee tempEmployee;
	cout << "\nEnter FirstName : ";
	cin >> tempEmployee.FirstName;
	cout << "\nEnter LastName : ";
	cin >> tempEmployee.LastName;
	cout << "\nEnter Salary : ";
	cin >> tempEmployee.Salary;
	return tempEmployee;
}
void addEmployee(vector<stEmployee>& vEmployee) {
	char readmore = 'Y';
	do {
		vEmployee.push_back(ReadEmployeeInfo());
		cout << "\n Do You want to add Employee Y/N ? ";
		cin >> readmore;
	} while (readmore == 'Y' || readmore == 'y');
}
void PrintEmployee(vector<stEmployee>& vEmployee) {
	for (stEmployee Employee : vEmployee) {

		cout << "\nFirstName : " << Employee.FirstName << endl;
		cout << "LastName : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
	}
}


void function1(int& x) {
	x++;
}

void arrayHomwWork() {
	int arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}
void pointers() {
	int a = 10;
	int* p;
	p = &a;
	cout << " a = " << a << endl;//10
	cout << "p = " << p << endl;   ///Address a  eqwdwedfqwefq 
	cout << "*p=" << *p << endl; //10

	*p = 20;
	cout << " a = " << a << endl; //20
	cout << "p = " << p << endl;  //Address a eqwdwedfqwefq
	cout << "*p=" << *p << endl; //20

	a = 30;
	cout << " a = " << a << endl; //30
	cout << "p = " << p << endl;   ///Address a  eqwdwedfqwefq 
	cout << "*p=" << *p << endl; //30
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//#40
void PointersAndAraay() {
	int arr[4] = { 10,20,30,40 };

	int* ptr;
	ptr = arr;
	cout << "Addresses arr : \n";
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;

	cout << "Values are : \n";
	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;

	cout << "Values are With ForLoop: \n";
	for (int i = 0; i < 4; i++) {
		cout << *(ptr + i) << endl;
	}
}

//#41 Pointers And  Structure
struct stEmployeeEX {
	string Name;
	int Salary;
};

void PointersAndStructure() {
	stEmployeeEX employee, * ptr;

	employee.Name = "Nabeh";
	employee.Salary = 5000;

	cout << employee.Name << endl;
	cout << employee.Salary << endl;

	ptr = &employee;
	cout << "\nUsing pointers : \n";
	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;

}

//#44 Dynamic Arrays New and Delete 
void DynamicArrays() {
	int length;
	cout << "Enter length of array : \n";
	cin >> length;

	//Memory Allocation of num number of floats
	float* ptr;
	ptr = new float[length];

	cout << "Enter Grade Students : \n ";
	for (int i = 0; i < length; i++) {
		cout << "Student : " << i + 1 << " : \n";
		cin >> *(ptr + i);
	}
	cout << "Displaying Students grades  : \n";
	for (int i = 0; i < length; i++) {
		cout << "Student : " << i + 1 << "	" << *(ptr + i) << "	";
	}
	//dont forget : : Every new thing is met with a deletion
	delete[] ptr;
}
//=========================================================
// //======================================================
//#46 Vector Part 2 Access Elements
void AccessElement() {
	vector<int> num{ 1,2,3,4,5 };

	cout << "\n using.at(i) \n";
	cout << "Element at index 0 : " << num.at(0) << endl;
	cout << "Element at index 2 : " << num.at(2) << endl;
	cout << "Element at index 4 : " << num.at(4) << endl;

	cout << "\n using[i] \n";
	cout << "Element at index 0 : " << num[0] << endl;
	cout << "Element at index 2 : " << num[2] << endl;
	cout << "Element at index 4 : " << num[4] << endl;
}
//=========================================================
// //======================================================
//47 Vector Part 2 Change Elements
void ChangeElement() {
	vector<int> num{ 1, 2, 3, 4, 5 };
	cout << "Initial Vector: ";
	for (const int& i : num) {
		cout << i << " ";
	}
	cout << "\n\nUpdated Vector: ";
	for (int& i : num) {
		i = 20;
		cout << i << " ";
	}
	num[1] = 40;
	num.at(2) = 80;
	num.at(4) = 90;
	cout << "\n\nUpdated Vector: ";
	for (const int& i : num) {
		cout << i << " ";
	}
}
//=========================================================
// //======================================================
//#48 Vectoor Iterators
void VectorIterators() {
	vector<int> num{ 1,2,3,4,5 };

	//declare iterator
	vector<int>::iterator iter;
	for (iter = num.begin(); iter != num.end(); iter++) {
		cout << *iter << "	";
	}
}
//=========================================================
// //======================================================
//#49 Exception Handling
void ExceptionHandling() {
	vector<int> num{ 1,2,3,4,5 };

	try {
		cout << num.at(7);
	}
	catch (exception e) {
		cout << "Array Out of Bounds\n";
	}
}

///#50 String Object : (Common Methods)
void StringObject() {
	string S1 = "My Name is Nabeh-Yosef , I Love Programming";
	//Prints the length of the string
	cout << S1.length() << endl;

	//Returns the letter at position 3
	cout << S1.at(3) << endl;
	//Adds @ProgrammingAdvices to the end of string
	S1.append("@ProgramminAdvices");
	cout << S1 << endl;

	//inserts Ali at position 7
	S1.insert(7, "Ali");
	cout << S1 << endl;
	//Prints all the next 8 letters from position 16.
	cout << S1.substr(16, 8) << endl;
	//Adds one character to the end of the string
	S1.push_back('X');
	cout << S1 << endl;
	//Removes one character from the end of the string
	S1.pop_back();
	cout << S1 << endl;
	//Finds Ali in the string
	cout << S1.find("Ali") << endl;
	//Finds ali in the string
	cout << S1.find("ali") << endl;
	if (S1.find("ali") == S1.npos)  //npos = not position
	{
		cout << "ali is not found";
	}
	//clears all string letters.
	S1.clear();
	cout << S1 << endl;
}
//=========================================================
// //======================================================
//#51 Some CCTYPE Funvtions 
void CCTYPEfUNCTIONS() {
	char x;
	char w;
	x = toupper('a');
	w = tolower('B');
	cout << "Converting a to upper case : " << x << endl;
	cout << "Conveting B to lower case : " << w << endl;
	// Digits(A to Z)
	// returns zero if not, and non zero of yes
	cout << "isupper('A') " << isupper('A') << endl;
	// lower case (a to z)
	// returns zero if not, and non zero of yes
	cout << "islower('a') " << islower('a') << endl;
	// Digits (0 to 9)
	// returns zero if not, and non zero of yes
	cout << "isdigit('9') " << isdigit('9') << endl;
	// punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
	// returns zero if not, and non zero of yes
	cout << "ispunct(';') " << ispunct(';') << endl;


}

//#52 Write Mode : Write Data to file
void WriteFileWriteMode() {
	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out);//Write Mode

	if (MyFile.is_open()) {
		MyFile << "Hi , Nabeh" << endl;
		MyFile << "Hi , This is second line" << endl;
		MyFile << "Hi , This is third line" << endl;

		MyFile.close();
	}
}
//=========================================================
// //======================================================
//#53 Append Mode :Append Data To File
void FileAppendMode() {
	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out | ios::app); //Append Mode 

	if (MyFile.is_open()) {
		MyFile << "Hi , First Line" << endl;
		MyFile << "Hi , First Line" << endl;

		MyFile.close();
	}
}
//=========================================================
// //======================================================
//#54 Read Mode : Read Data From File (Print File Content)
void PrintFileContent(string FileName) {
	fstream MyFile;

	MyFile.open(FileName, ios::in);//Read Mode

	if (MyFile.is_open()) {
		string Line;
		while (getline(MyFile, Line)) {
			cout << Line << endl;
		}
		MyFile.close();
	}
}
//=========================================================
// //======================================================
//#55 Load Data From File To Vector 
void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) {
	fstream MyFile;

	MyFile.open(FileName, ios::in);//read mode

	if (MyFile.is_open()) {
		string Line;

		while (getline(MyFile, Line)) {
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
//=========================================================
// //======================================================
//#56 Save Vector To File
void SaveVectorToFile(string FileName, vector<string> vFileContent) {
	fstream MyFile;
	MyFile.open(FileName, ios::out);//write mode

	if (MyFile.is_open()) {
		string Line;

		for (string& Line : vFileContent) {
			if (Line != "") {
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}
//=========================================================
// //======================================================
//#57 Delete Record From File 
void DeleteRecordFromFile(string FileName, string Record) {
	vector<string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Line : vFileContent) {
		if (Line == Record) {
			Line = "";
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}
//=========================================================
// //======================================================
//#58 Update Record In File	
void UpdateRecordInFile(string FileName, string Record, string UpdateTo) {
	vector<string>vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Line : vFileContent) {
		if (Line == Record) {
			Line = UpdateTo;
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}
//=========================================================
// //======================================================
//#59 Local/UTC DataTime
/*
int tm_sec; // seconds of minutes from 0 to 61
int tm_min; // minutes of hour from 0 to 59
int tm_hour; // hours of day from 0 to 24
int tm_mday; // day of month from 1 to 31
int tm_mon; // month of year from 0 to 11
int tm_year; // year since 1900
int tm_wday; // days since sunday
int tm_yday; // days since January 1st
int tm_isdst; // hours of daylight savings time
*/
int main() {

	time_t t = time(0); // get time now
	char* dt = ctime(&t); // convert in string form
	cout << "Local date and time is: " << dt << "\n";
	// converting now to tm struct for UTC date/time
	tm* gmtm = gmtime(&t);
	dt = asctime(gmtm);
	cout << "UTC date and time is: " << dt;

	cout << "\n\n//======================================================\n\n";
	time_t t = time(0); // get time now
	tm* now = localtime(&t);
	cout << "Year: " << now->tm_year + 1900 << endl;
	cout << "Month: " << now->tm_mon + 1 << endl;
	cout << "Day: " << now->tm_mday << endl;
	cout << "Hour: " << now->tm_hour << endl;
	cout << "Min: " << now->tm_min << endl;
	cout << "Second: " << now->tm_sec << endl;
	cout << "Week Day (Days since sunday): " << now->tm_wday << endl;
	cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
	cout << "hours of daylight savings:" << now->tm_isdst << endl;

}



// function defintion
void add(int a, int b) {
	cout << (a + b);
}