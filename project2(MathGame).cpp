#include <iostream>
#include <ctime>
using namespace std;

enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, Mix = 5 };
enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, MixLevel = 4 };


struct stQuestion {
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};
struct stQuizz {
    stQuestion QuistionList[100];
    short NumberOfQuestion;
    enQuestionLevel QuestionLevel;
    enOperationType OperationType;
    short NumberOfWrongAnswer = 0;
    short NumberOfRightAnswer = 0;
    bool isPass = false;
};
short ReadHowManyQuestion() {
    short Question;
    do {
        cout << "How many Question do you want to answer ? ";
        cin >> Question;
        if (!(int)Question) {
            cout << "!!!Validation !!! Please Enter Positive Number !!!" << endl;
        }
    } while (Question <= 0);
    return Question;
}
enQuestionLevel ReadQuestionLevel() {
    short level;
    do {
        cout << "Enter Question Level [1]Easy, [2]Med,[3] Hard , [4]Mix  ? ";
        cin >> level;
    } while (level < 1 || level>4);
    return (enQuestionLevel)level;
}
enOperationType ReadOperationType() {
    short operation;
    do {
        cout << "Enter OperationType [1]Add, [2]Sub,[3] Mult , [4]Div  ? ";
        cin >> operation;
    } while (operation < 1 || operation>5);
    return (enOperationType)operation;
}
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}
int SimpleCalculator(int Number1, int Number2, enOperationType Operation) {
    switch (Operation) {
    case enOperationType::Add:return Number1 + Number2;
    case enOperationType::Sub:return Number1 - Number2;
    case enOperationType::Mult:return Number1 * Number2;
    case enOperationType::Div:return Number1 / Number2;
    }
}
enOperationType GetRandomOperationType() {
    return (enOperationType)RandomNumber(1, 4);
}
string GetQuestionLevelText(enQuestionLevel Questionlevel) {
    string arrQuestionLevelText[4] = { "Easy","Mid","Hard","Mix" };
    return arrQuestionLevelText[Questionlevel - 1];
}
int ReadQuestionAnswer() {
    int Answer = 0;
    cin >> Answer;
    return Answer;
}
void ResetScreen() {
    system("cls");
    system("color 0F");
}
void SetScreenColor(bool Right) {
    if (Right) {
        system("color 2F");
    }
    else {
        system("color 4F");
        cout << "\a";
    }
}
void CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber) {
    if (Quizz.QuistionList[QuestionNumber].PlayerAnswer != Quizz.QuistionList[QuestionNumber].CorrectAnswer) {
        Quizz.QuistionList[QuestionNumber].AnswerResult = false;
        Quizz.NumberOfWrongAnswer++;

        cout << "Wrong Answer :-(\n";
        cout << "The RightAnswer is :";
        cout << Quizz.QuistionList[QuestionNumber].CorrectAnswer;
        cout << endl;
    }
    else {
        Quizz.QuistionList[QuestionNumber].AnswerResult = true;
        Quizz.NumberOfRightAnswer++;
        cout << "Right Answer :-)\n";
    }
    SetScreenColor(Quizz.QuistionList[QuestionNumber].AnswerResult);
}
string GetOpTypeSymbol(enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Sub:
        return "-";
    case enOperationType::Mult:
        return "x";
    case enOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}
void PrintTheQuestion(stQuizz& Quizz, short QuestionNumber) {
    cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestion << "] \n \n";
    cout << Quizz.QuistionList[QuestionNumber].Number1 << endl;
    cout << GetOpTypeSymbol(Quizz.QuistionList[QuestionNumber].OperationType);
    cout << Quizz.QuistionList[QuestionNumber].Number2 << endl;
    cout << "-----------\n";

}

void CorrectAnswer(stQuizz& Quizz, short QuestionNumber) {
    if (Quizz.QuistionList[QuestionNumber].PlayerAnswer != Quizz.QuistionList[QuestionNumber].CorrectAnswer) {
        Quizz.QuistionList[QuestionNumber].AnswerResult = false;
        Quizz.NumberOfWrongAnswer++;
        cout << "Wrong Answer :-(\n";
        cout << "The Right Answer is :";
        cout << Quizz.QuistionList[QuestionNumber].CorrectAnswer;
        cout << "\n";
    }
    else {
        Quizz.QuistionList[QuestionNumber].AnswerResult = true;
        Quizz.NumberOfRightAnswer++;
        cout << "Right Answer :-)\n";
    }
    cout << endl;
    SetScreenColor(Quizz.QuistionList[QuestionNumber].AnswerResult);
}
void AskAndCorrectQuestionListAnswer(stQuizz& Quizz) {
    for (int QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestion; QuestionNumber++) {
        PrintTheQuestion(Quizz, QuestionNumber);
        Quizz.QuistionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectAnswer(Quizz, QuestionNumber);

    }
    Quizz.isPass = (Quizz.NumberOfRightAnswer >= Quizz.NumberOfWrongAnswer);
    /*.?
        if(Quizz.NumberOfRightAnswer>=Quizz.NumberOfWrongAnswer){
            Quizz.isPass=true;
            else
            Quiz.isPass=false;
        }
    */
}
stQuestion GenerateQuestion(enQuestionLevel QuestionLevel, enOperationType operationType) {
    stQuestion Question;
    if (QuestionLevel == enQuestionLevel::MixLevel) {
        QuestionLevel = (enQuestionLevel)RandomNumber(1, 3);
    }
    if (operationType == enOperationType::Mix) {
        operationType = GetRandomOperationType();
    }
    Question.OperationType = operationType;

    switch (QuestionLevel) {
    case enQuestionLevel::Easy:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionLevel = QuestionLevel;
        return Question;
    case enQuestionLevel::Med:
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionLevel = QuestionLevel;
        return Question;
    case enQuestionLevel::Hard:
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);
        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionLevel = QuestionLevel;
        return Question;
    }
    return Question;
}

void GenerateQuizzQuestion(stQuizz& Quizz) {
    for (short Question = 0; Question < Quizz.NumberOfQuestion; Question++) {
        Quizz.QuistionList[Question] = GenerateQuestion(Quizz.QuestionLevel, Quizz.OperationType);
    }
}


string GetFinalResultText(bool Pass) {
    if (Pass) {
        return "Pass :-)";
    }
    else {
        return "Fail :-(";
    }
}
void PrintQuizzResult(stQuizz Quizz) {
    cout << "\n";
    cout << "________________________________\n\n";
    cout << "Final Result is " << GetFinalResultText(Quizz.isPass);
    cout << "\n________________________________\n";
    cout << "Number Of Question   : " << Quizz.NumberOfQuestion << endl;
    cout << "QuestionLevel        : " << GetQuestionLevelText(Quizz.QuestionLevel) << endl;
    cout << "Operation Type       :" << GetOpTypeSymbol(Quizz.OperationType) << endl;
    cout << "Number Of Right Answer :" << Quizz.NumberOfRightAnswer << endl;
    cout << "Number Of Wrong Answer :" << Quizz.NumberOfWrongAnswer << endl;
    cout << "________________________________\n";
}

void PlayMathGame() {
    stQuizz Quizz;
    Quizz.NumberOfQuestion = ReadHowManyQuestion();//?
    Quizz.QuestionLevel = ReadQuestionLevel();//?
    Quizz.OperationType = ReadOperationType();//?

    GenerateQuizzQuestion(Quizz);
    AskAndCorrectQuestionListAnswer(Quizz);
    PrintQuizzResult(Quizz);

}

void StartMathGame() {
    char Playagin;
    do {
        ResetScreen();
        PlayMathGame();
        cout << endl << "Do you want play agin y/n ? ";
        cin >> Playagin;
    } while (Playagin == 'Y' || Playagin == 'y');
}




int main() {
    srand(time(0));
    StartMathGame();

}