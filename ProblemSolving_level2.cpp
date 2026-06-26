// Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
//#include "Libc5.h"
using namespace std;
//using namespace mylib5;

#pragma once

#include <iostream>
using namespace std;

namespace mylib5 {

    //#1/2 MultiPlicationTable
    void PrintTitle() {
        cout << endl;
        cout << endl;
        cout << "            " << "Multiplication Table From 1 to 10" << endl;
    }


    void PrintHeader() {
        cout << "        ";
        for (int i = 1; i <= 10; i++) {
            cout << i << "\t";
        }

        cout << "\n________________________________________________________________________________________\n";
    }
    string ColumnSperator(int i) {
        if (i < 10) {
            return "   |";
        }
        else {
            return "  |";
        }
    }
    void MultiplicationTable() {
        for (int i = 1; i <= 10; i++) {
            cout << " " << i << ColumnSperator(i) << "\t";
            for (int j = 1; j <= 10; j++) {
                cout << i * j << "\t";
            }
            cout << endl;
        }
    }
    //====================================================================
    //====================================================================
    //#2/2 Print All Prime Numbers (1 to N)
    enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

    int ReadPositiveNumber(string message) {
        int n;
        do {
            cout << message << endl;
            cin >> n;
        } while (n <= 0);
        return n;
    }

    int ReadNumber() {
        int n;
        do {
            //   cout << "Enter " << endl;
            cin >> n;
        } while (n <= 0);
        return n;
    }

    enPrimeNotPrime CheckNumber(int number) {
        int M = round(number / 2);
        for (int i = 2; i <= M; i++) {
            if (number % i == 0) {
                return enPrimeNotPrime::NotPrime;
            }
        }
        return enPrimeNotPrime::Prime;
    }

    void PrintPrimeNumbersFrom1toN(int number) {
        cout << "::: Prime Number From 1 to " << number << " are :::" << endl << endl;
        for (int i = 1; i <= number; i++) {
            if (CheckNumber(i) == enPrimeNotPrime::Prime) {
                cout << i << endl;
            }
        }
    }
    //====================================================================
    //====================================================================
    //#3/2 Perfect Number      //PerfectNumber = Sum of Numbers (numbers that have no remainder)
    bool isPerfrctNumber(int number) {
        int Sumdivisors = 0;
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                Sumdivisors += i;
            }
        }
        // cout << "SumDivisors = " << Sumdivisors << endl;

        return Sumdivisors == number;
    }

    void PrintPerfectNumberResult(int number) {
        if (isPerfrctNumber(number)) {
            cout << "is PerfectNumber" << endl;
        }
        else {
            cout << "is not PerfectNumber" << endl;
        }
    }
    //====================================================================
    //====================================================================
    //#4/2 Perfect Number from 1 to N 
    void PrintPerfectNumberFrom1toN(int number) {
        for (int i = 1; i <= number; i++) {
            if (isPerfrctNumber(i)) {
                cout << i << endl;
            }
        }
    }
    //=====================================================================
    //=====================================================================
    //#5/2 Print Digit in a Reversed Order
    void PrintDigit(int Number) {
        int Reminder = 0;

        while (Number > 0) {
            Reminder = Number % 10;
            Number = Number / 10;
            cout << Reminder << endl;
        }
    }
    //=====================================================================
    //=====================================================================
    //#6/2 Sum of Digits 
    void PrintSumDigits(int Number) {
        int Sum = 0;
        int Reminder = 0;
        while (Number > 0) {
            Reminder = Number % 10;
            Number = Number / 10;
            Sum += Reminder;
        }
        cout << "Sum of Digits = " << Sum << endl;
    }
    //=====================================================================
    //=====================================================================
    //#7/2 Reverse Number
    int PrintReverseNumber(int Number) {
        int Reminder = 0;
        int Number2 = 0;
        while (Number > 0) {
            Reminder = Number % 10;
            Number = Number / 10;
            Number2 = Number2 * 10 + Reminder;
        }
        return Number2;
    }
    //=====================================================================
    //=====================================================================
    //#8/2 Digit Frequency // #9/2 Digit Frequency2
    int PrintFrequencyNumber(int Number, int NumFrequency) {
        int Reminder = 0;
        int Counter = 0;
        while (Number > 0) {
            Reminder = Number % 10;
            Number = Number / 10;
            if (Reminder == NumFrequency) {
                Counter++;
            }
        }
        return Counter;
    }

    void PrintAllFrequencyDigit(int Number) {
        for (int i = 0; i < 10; i++) {
            short DigitFrequency = 0;
            DigitFrequency = PrintFrequencyNumber(Number, i);
            if (DigitFrequency > 0)
            {
                cout << "Digit " << i << " Frequencey is "  // Print the digit and its frequency.
                    << DigitFrequency << " Time(s).\n";
            }
        }
    }
    //=====================================================================
    //=====================================================================
    //#10/2 Print Digit in Order (Read + Reverse + printDigit)
    //=====================================================================
    //=====================================================================
    //#11/2 Plindrome Number
    bool PlindromeNumber(int Number) {
        return Number == PrintReverseNumber(Number);
    }
    //=====================================================================
    //=====================================================================
    //#12/2 Inverted Number Pattern   /*
    // 55555
    // 4444
    // 333
    // 22
    // 1
    void InvertedNumberPattern(int Number) {
        for (int i = Number; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }
    //=====================================================================//1
    // 1
    // 22
    // 333
    // 4444
    // 55555
    //=====================================================================
    //#13 Number Pattern
    void NumberPattern(int Number) {
        for (int i = 1; i <= Number; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }
    //=====================================================================
    //=====================================================================
    //#14/2 Inverted letter pattern
    void InvertedLetterPattern(int Number) {
        for (int i = 65 + Number - 1; i >= 65; i--) {
            for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++) {//4 - [ (65+4-1) - (65 + 4 -1) ] = 4 
                cout << char(i);
            }
            cout << endl;
        }
    }
    //=====================================================================
    //=====================================================================
    //#15/2 Letter Pattern
    void LetterPattern(int Number) {
        for (int i = 65; i <= 65 + Number - 1; i++) { // Number =4 -> i=68
            for (int j = 1; j <= i - 65 + 1; j++) {
                cout << char(i);
            }
            cout << endl;
        }
    }

    //=====================================================================
    //=====================================================================
    //#16/2 All Words From AAA to ZZZ
    void AllWordsFromAAAtoZZZ() {
        string word = "";
        for (int i = 65; i <= 90; i++) {
            for (int j = 65; j <= 90; j++) {
                for (int k = 65; k <= 90; k++) {
                    word += char(i);
                    word += char(j);
                    word += char(k);
                    cout << word << endl;

                    word = "";
                }
            }
        }
    }
    //=====================================================================
    //=====================================================================
    //17/2 Guess a 3-Letter Password
    string ReadPassword() {
        string password;
        cout << "Please enter a 3-Letter Password (all capital)?\n";
        cin >> password;
        return password;
    }

    bool GuessThreeLetter(string password) {
        string word = "";
        int counter = 1;
        for (int i = 65; i <= 90; i++) {
            for (int j = 65; j <= 90; j++) {
                for (int k = 65; k <= 90; k++) {
                    word += char(i);
                    word += char(j);
                    word += char(k);

                    cout << "Trail[" << counter++ << "]:" << word << endl;

                    if (password == word) {
                        cout << "\n \n";
                        cout << "Password is: " << word << endl;
                        cout << "Found After " << counter << "Trail(s)" << endl;

                        return true;
                    }
                    word = "";
                }
            }
        }
        return false;
    }
    //=====================================================================
    //=====================================================================
    //18/2  Encrypt/Decrypt Text
    string ReadText() {
        string Text;
        cout << "Please Enter Text :";
        cin >> Text;
        return Text;
    }

    string Encryption(string Text, int EncryptKey) {
        for (int i = 0; i <= Text.length(); i++) {

            Text[i] = char((int)Text[i] + EncryptKey);
        }

        return Text;
    }

    string Decryption(string Text, int EncryptKey) {
        for (int i = 0; i <= Text.length(); i++) {
            Text[i] = char((int)Text[i] - EncryptKey);
        }
        return Text;
    }
    //=====================================================================
    //=====================================================================
    //#19/2 Random 3 Numbers From 1 to 10
    int Randomnumber(int From, int To) {
        int random = rand() % (To - From + 1) + From;  //rand % 51  
        return random;
    }
    //=====================================================================
    //=====================================================================
    //#20 Random Sall letter , capital letter , Special Character ,and Digit in Order
    enum enCharType {
        SmallLetter = 1,
        CapitalLetter = 2,
        SpecialCharacter = 3,
        Digit = 4,
    };
    char GetRandomChar(enCharType CharType) {
        switch (CharType) {
        case enCharType::SmallLetter: {
            return Randomnumber(97, 122);
            break;
        }
        case enCharType::CapitalLetter: {
            return Randomnumber(65, 90);
            break;
        }
        case enCharType::SpecialCharacter: {
            return Randomnumber(33, 47);
            break;
        }
        case enCharType::Digit: {
            return Randomnumber(48, 57);
            break;
        }
        }
    }
    //=====================================================================
    //=====================================================================
    //#21 Generate Word
    string GenerateWord(enCharType CharType, short length) {
        string word;
        for (int i = 1; i <= length; i++) {
            word += GetRandomChar(CharType);
        }
        return word;
    }
    string GenerateKey() {
        string key = "";
        key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
        key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
        key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
        key += GenerateWord(enCharType::CapitalLetter, 4);
        return key;
    }

    void PrintGenerateKeys(int NumberOfKeys) {
        for (int i = 1; i <= NumberOfKeys; i++) {
            cout << "Key[" << i << "]:" << GenerateKey() << endl;
        }
    }
    //=====================================================================
    //=====================================================================
    //#22 Repeated Elements Count In Array  
    void EnterElementsOfArray(int arr[100], int Number) {

        cout << "Enter Array Elements:" << endl;
        for (int i = 1; i <= Number; i++) {
            cout << "Enter Element [" << i << "] : ";
            cin >> arr[i];

        }
    }
    void PrintArray(int arr[100], int length) {
        cout << "The Element Of Original Array : " << endl;
        for (int i = 0; i < length; i++) {
            cout << arr[i] << "   ";
        }
        cout << endl;
    }


    int CheckNumberInArray(int arr[100], int length) {
        int check;
        cout << "Enter Your Check Number:" << endl;
        cin >> check;
        int sum = 0;
        for (int i = 1; i <= length; i++) {
            if (check == arr[i]) {
                sum++;
            }
        }
        return sum;
    }
    //=====================================================================
    //=====================================================================
    //#23 Fill Array With Random Numbers From 1 to 100
    int RandomNumbers2(int From, int To) {
        return rand() % (To - From + 1) + From;
    }
    void RandomNumberFromArray(int arr[100], int length) {
        for (int i = 0; i < length; i++) {
            arr[i] = Randomnumber(1, 100);
        }
    }
    void PrintArray2(int arr[100], int length) {
        // cout << endl;
       //  cout << "Array Elements: "<<endl;
        for (int i = 1; i <= length; i++) {
            cout << arr[i] << "   ";
        }
    }
    //=====================================================================
    //=====================================================================
    //#24 Max Of Random Array
    int MaxNumberFromArray(int arr[100], int length) {
        int MaxNumber = 1;
        for (int i = 1; i <= length; i++) {
            if (arr[i] > MaxNumber) {
                MaxNumber = arr[i];
            }
        }
        return MaxNumber;
    }
    //=====================================================================
    //=====================================================================
    //#25 Min Of Random Array
    int MinNumberFromArray(int arr[100], int length) {
        int MinNumber = 100000;
        // MinNumber= arr[0];
        for (int i = 1; i <= length; i++) {
            if (arr[i] < MinNumber) {
                MinNumber = arr[i];
            }
        }
        return MinNumber;
    }
    //=====================================================================
    //=====================================================================
    //#26 Sum Of Random Of Array 
    int SumRandomNumbersOfArray(int arr[100], int length) {
        int sum = 0;
        for (int i = 1; i <= length; i++) {
            sum += arr[i];
        }
        return sum;
    }
    //=====================================================================
    //=====================================================================
    //#27 Average of Random Array
    float AverageRandomArray(int arr[100], int length) {
        // float Avg;
        return (float)SumRandomNumbersOfArray(arr, length) / length;
    }
    //=====================================================================
    //=====================================================================
    //#28  Copy Array
    //1-Print Array 
    //2-Print CopyArray
    void CopyArray(int arr[100], int arrcopy[100], int length) {
        cout << endl;
        //  cout << "Array Element after copy::" << endl;
        for (int i = 1; i <= length; i++) {
            arrcopy[i] = arr[i];
        }
    }
    //=====================================================================
    //=====================================================================
    //#29 Copy Only Prime Numbers From Array

    void CopyOnlyPrimeNumbers(int arr[100], int arr2[100], int arrlength, int& arr2length) {
        int counter = 1;
        for (int i = 1; i <= arrlength; i++) {
            if (CheckNumber(arr[i]) == enPrimeNotPrime::Prime) {
                arr2[counter] = arr[i];
                counter++;
            }
        }
        arr2length = --counter;
    }
    //=====================================================================
    //=====================================================================
    //#30 Sum of 2 Arrays to a Third one
    void SumTwoArrayToThirdOne(int arr1[100], int arr2[100], int arr3[100], short length) {
        for (int i = 1; i <= length; i++) {
            arr3[i] = arr1[i] + arr2[i];
        }
    }
    //=====================================================================
    //=====================================================================
    //#31 shuffle ordered array
    void ArrayForShuffel(int arr[100], int length) {
        int index = 1;
        for (int i = 1; i <= length; i++) {
            arr[i] = index++;
        }
        cout << "Array Before Shuffle:" << endl;
        /* for (int i = 1; i <= length; i++) {
             cout << arr[i]<<"   ";
         }*/
    }
    void ArrayElementsAfterShuffle(int arr[100], int length) {
        for (int i = 1; i <= length; i++) {
            arr[i] = Randomnumber(1, 10);
        }
        cout << "Array After Shuffle:" << endl;
        /* for (int i = 1; i <= length; i++) {
             cout << arr[i] << "   ";
             //::::::::We CAN USE THIS :::::::
             //int index1 = RandomNumber(1, arrLength) - 1;
                int index2 = RandomNumber(1, arrLength) - 1;
             // Swap the elements at the two randomly chosen indices.
             Swap(arr[index1], arr[index2]);
         }*/
    }
    //=====================================================================
    //=====================================================================
    //#32 Copy Array In Reverse Order 
    void ArrayInReverseNumber(int arr1[100], int arr2[100], int length) {
        for (int i = 0; i < length; i++) {
            //cout << "i=" << i << endl;
            arr2[i] = arr1[length - i];
        }
    }
    //=====================================================================
    //=====================================================================
    //#33 Fill Array With Keys
    string GenerateWord22(enCharType CharType, short length) {
        string Word = "";
        for (int i = 1; i <= length; i++) {
            Word += GetRandomChar(CharType);
        }
        return Word;
    }
    string GenerateKeys22() {
        string key = "";
        key = GenerateWord22(enCharType::CapitalLetter, 4) + "-";
        key = key + GenerateWord22(enCharType::CapitalLetter, 4) + "-";
        key = key + GenerateWord22(enCharType::CapitalLetter, 4) + "-";
        key = key + GenerateWord22(enCharType::CapitalLetter, 4);

        return key;
    }
    void GenerateArrayWithKeys(string arr[100], int length) {
        for (int i = 0; i < length; i++) {
            arr[i] = GenerateKeys22();
        }
    }
    void PrintStringArray(string arr1[100], int length) {
        for (int i = 0; i < length; i++) {
            cout << "Array[" << i << "] : " << arr1[i] << endl;;
        }
    }
    //=====================================================================
    //=====================================================================
    //34 Return Number  Index in Array
    int FindNumberPositionInArray(int arr[100], int x, int length) {
        for (int i = 0; i < length; i++) {
            if (arr[i] == x) {
                return i;
                break;
            }
        }
        return -1;
    }

    bool IsNumberINArray(int arr1[100], int x, int length) {

        return FindNumberPositionInArray(arr1, x, length) != -1;
    }

    //=====================================================================
    //=====================================================================
    //35 Check Number In Array
    bool IsNumberINArray(int arr1[100], int x, int length) {
        return FindNumberPositionInArray(arr1, x, length) != -1;
    }
    //=====================================================================
    //=====================================================================
    //#36 Add Array Element Simi Dynamic
    void AddArrayElement(int Number, int arr[100], int& arrlength) {
        arrlength++;
        arr[arrlength - 1] = Number;
    }

    void InputUserNumberInArray(int arr[100], int& arrlength) {
        int AddMore;
        do {
            //  AddArrayElement(ReadNumber(), arr, arrlength);
            cout << "Do You Want to add More Numbers? [0]:No ,[1]:Yes?";
            cin >> AddMore;
        } while (AddMore != 0);

    }
    //=====================================================================
    //=====================================================================
    //#37/2 ReSolve Problem 28/2 Copy Array Using AddArrayElement
    void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {
        // for (int i = 0; i < arrLength; i++)
          //   AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
    //=====================================================================
    //=====================================================================
    void AddElementsToArray(int Number, int arr1[100], int& arr1length) {
        arr1length++;
        arr1[arr1length - 1] = Number;
    }

    void CopyOddNumbers(int arr1[100], int arr2[100], int arr1length, int& arr2length) {
        for (int i = 0; i < arr1length; i++) {
            if (arr1[i] % 2 != 0) {
                AddElementsToArray(arr1[i], arr2, arr2length);
            }
        }
    }

    //=====================================================================
    //=====================================================================
    //#38 Copy Odd Numbers to a new Array 
    void PrintOddNumbersToNewArray(int arr[100], int& length) {
        cout << "Array 2 Odd Numbers:" << endl;
        for (int i = 0; i < length; i++) {
            if (arr[i] % 2 != 0) {
                cout << arr[i] << "   ";
            }
        }
    }
    //=====================================================================
    //=====================================================================
    //#39 Copy Prime Numbers to a new Array  
    enum enPrimNotPrime {
        Prime = 1, NotPrime = 2
    };
    enPrimNotPrime CheckPrime(int Number)
    {
        int M = round(Number / 2);
        for (int Counter = 2; Counter <= M; Counter++)
        {
            if (Number % Counter == 0)
                return enPrimNotPrime::NotPrime;
        }
        return enPrimNotPrime::Prime;
    }

    void CopyPrimeNumber(int arr[100], int length1) {
        cout << "The Prime Number is :" << endl;
        for (int i = 0; i < length1; i++) {
            if (CheckPrime(arr[i]) == enPrimNotPrime::Prime) {
                cout << arr[i] << "    ";
            }
        }
    }
    //=====================================================================
    //=====================================================================
    //#40 Copy Distinct Numbers to Array
    void FillArray(int arr[100], int& arrLength) //Hard Coded
    {
        arrLength = 10;

        arr[0] = 10;
        arr[1] = 10;
        arr[2] = 10;
        arr[3] = 50;
        arr[4] = 50;
        arr[5] = 70;
        arr[6] = 70;
        arr[7] = 70;
        arr[8] = 70;
        arr[9] = 90;
    }
    short FindNumberPosition(int Number, int arr[100], int length) {
        for (int i = 0; i < length; i++) {
            if (arr[i] == Number) {
                return i;
            }
        }
        return -1;
    }
    bool IsNumberInArray(int Number, int arr[100], int length) {
        return  FindNumberPosition(Number, arr, length) != -1;
    }
    void AddArrayElement(int Number, int arr[100], int length) {//length =5 
        length++; //length=6 , length=7 , length = 8 
        arr[length - 1] = Number;  // arr[5]=5  // arr[6]=6 // arr[7]=7
    }
    void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int lengthSource, int& lengthDestination) {
        for (int i = 0; i < lengthDestination; i++) {
            if (!IsNumberInArray(arrSource[i], arrDestination, lengthDestination)) {
                // AddArrayElement(arrSource[i], arrDestination, lengthDestination);
            }
        }
    }

    //=====================================================================
    //=====================================================================
    //#41 PlindRome Array 
    void FillArray2(int arr[100], int& arrLength) //Hard Coded
    {
        arrLength = 6;

        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 30;
        arr[4] = 20;
        arr[5] = 10;
    }
    bool IsPlindRomeArray(int arr[100], int length) {
        for (int i = 0; i < length; i++) {
            if (arr[i] != arr[length - i - 1]) {
                return false;
            }
        }
        return true;
    }
    //=====================================================================
    //=====================================================================
    //#43 Count OddNumbers 
    int CountOddNumbers(int arr[100], int length) {
        int count = 0;
        for (int i = 0; i < length; i++) {
            if (arr[i] % 2 != 0) {
                count++;
            }
        }
        return count;
    }
    //=====================================================================
    //=====================================================================
    //#44 Count EvenNumbers 
    int CountEvenNumbers(int arr[100], int length) {
        int count = 0;
        for (int i = 0; i < length; i++) {
            if (arr[i] % 2 == 0) {
                count++;
            }
        }
        return count;
    }
    //=====================================================================
    //=====================================================================
    //#44 Count PositiveNumbers 
    int CountPositiveNumbers(int arr[100], int length) {
        int count = 0;
        for (int i = 0; i < length; i++) {
            if (arr[i] >= 0) {
                count++;
            }
        }
        return count;
    }
    //=====================================================================
    //=====================================================================
    //#45 Count NegativeNumbers 
    int CountNegativeNumbers(int arr[100], int length) {
        int count = 0;
        for (int i = 0; i < length; i++) {
            if (arr[i] < 0) {
                count++;
            }
        }
        return count;
    }
    //=====================================================================
    //=====================================================================
    //#46 MyABS  |x|    abs(x);
    float MyABS(int number) {
        if (number < 0) {
            return number * -1;
        }
        return number;
    }
    float ReadNumberToABS() {
        float number;
        cout << "Please Enter Number you need to ABS():" << endl;
        cin >> number;
        return number;
    }
    //=====================================================================
    //=====================================================================
    //#47 MyRound
    float GetFractionPart(float Number) { //10.7 -> 0.7
        return Number - (int)Number;
    }

    int MyRound(float Number) {
        int IntPart;
        IntPart = (int)Number;

        float FractionPart = GetFractionPart(Number);

        if (MyABS(FractionPart) > 0.5) {

            if (Number > 0)
                return IntPart + 1;

            else
                return IntPart - 1;
        }
        else {
            return IntPart;
        }
    }
    //=====================================================================
    //=====================================================================
    //#48 MyFloor
    int MyFloor(float Number) {
        if (Number > 0) {
            return int(Number);
        }
        return int(Number) - 1;
    }
    //=====================================================================
    //=====================================================================
    //#49 MyCeil
    int MyCeil(float Number) {

        if (MyABS(GetFractionPart(Number)) > 0) {
            if (Number > 0)
            {
                return (int)Number + 1;
            }
            else {
                return (int)Number;
            }
        }
        else {
            return Number;
        }
    }
    //=====================================================================
    //=====================================================================
    //#50 MySqrt
    int MySqrt(int Number) {
        return pow(Number, 0.5);
    }
}
int main()
{
    srand((unsigned)time(NULL));

    return 0;

}



