#include <iostream>
#include <ctime>
using namespace std;

enum enWinner { Player, Computer, Draw };
enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };

struct stRoundInfo {
    short RoundNumber;
    enGameChoice PlayerChoice;
    enGameChoice ComputerChoice;
    enWinner RoundWinner;
    string WinnerName;
};

struct stGameResult {
    short GameRounds;
    short PlayerWonTimes;
    short ComputerWonTimes;
    short DrawTimes;
    enWinner Winner;
    string WinnerName;
};

int ReadHowManyRounds() {
    int x;
    do {
        cout << "How Many Rounds From 1 to 10 ? ";
        cin >> x;
    } while (x < 1 || x > 10);
    return x;
}

string ChoiceName(enGameChoice choice) {
    switch (choice) {
    case Stone: return "Stone";
    case Paper: return "Paper";
    case Scissors: return "Scissors";
    default: return "Unknown";
    }
}

string GetWinnerName(enWinner Winner) {
    switch (Winner) {
    case Player: return "Player";
    case Computer: return "Computer";
    case Draw: return "No Winner (Draw)";
    default: return "Unknown";
    }
}

int RandomChoice(int From, int To) {
    return rand() % (To - From + 1) + From;
}

enGameChoice ReadPlayerChoice() {
    int choice;
    do {
        cout << "Your Choice [1]Stone, [2]Paper, [3]Scissors ? ";
        cin >> choice;
    } while (choice < 1 || choice > 3);

    return (enGameChoice)choice;
}

enGameChoice GetComputerChoice() {
    return (enGameChoice)RandomChoice(1, 3);
}

enWinner WhoWonTheGame(short PlayerTimes, short ComputerTimes) {
    if (PlayerTimes > ComputerTimes) return Player;
    else if (ComputerTimes > PlayerTimes) return Computer;
    else return Draw;
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {

    if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
        return Draw;

    switch (RoundInfo.PlayerChoice) {
    case Stone:
        return (RoundInfo.ComputerChoice == Paper) ? Computer : Player;
    case Paper:
        return (RoundInfo.ComputerChoice == Scissors) ? Computer : Player;
    case Scissors:
        return (RoundInfo.ComputerChoice == Stone) ? Computer : Player;
    default:
        return Draw;
    }
}

void PrintRoundInfo(stRoundInfo RoundInfo) {
    cout << "\n________ Round [" << RoundInfo.RoundNumber << "] ________\n";
    cout << "Player Choice   : " << ChoiceName(RoundInfo.PlayerChoice) << endl;
    cout << "Computer Choice : " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner    : " << RoundInfo.WinnerName << endl;
    cout << "________________________________________\n";
}

void SetScreenColor(enWinner winner) {
    switch (winner) {
    case Player:
        system("color A0");
        break;
    case Computer:
        system("color C0");
        break;
    case Draw:
        system("color E0");
        break;
    }
}

stGameResult PlayGame(short GameRounds) {

    stRoundInfo RoundInfo;
    short PlayerWonTimes = 0, ComputerWonTimes = 0, DrawTimes = 0;

    for (int i = 1; i <= GameRounds; i++) {

        cout << "\n________ Game Round [" << i << "] ________\n";

        RoundInfo.RoundNumber = i;
        RoundInfo.PlayerChoice = ReadPlayerChoice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.RoundWinner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = GetWinnerName(RoundInfo.RoundWinner);

        if (RoundInfo.RoundWinner == Player)
            PlayerWonTimes++;
        else if (RoundInfo.RoundWinner == Computer)
            ComputerWonTimes++;
        else
            DrawTimes++;

        SetScreenColor(RoundInfo.RoundWinner);

        PrintRoundInfo(RoundInfo);
    }

    enWinner FinalWinner = WhoWonTheGame(PlayerWonTimes, ComputerWonTimes);

    return {
        GameRounds,
        PlayerWonTimes,
        ComputerWonTimes,
        DrawTimes,
        FinalWinner,
        GetWinnerName(FinalWinner)
    };
}

void StartGame() {

    char Y = 'Y';

    do {
        stGameResult GameResult = PlayGame(ReadHowManyRounds());
        cout << "\n     __________________________________________________________________________________\n";
        cout << "       _______________________________** [ G a m e   O v e r ] **_______________________________\n";
        cout << "       __________________________________________________________________________________\n";
        cout << "       _______________________________** [ Game Result ] **_______________________________\n";
        cout << "       Game Rounds        :" << GameResult.GameRounds << endl;
        cout << "       PlayerWonTimes     :" << GameResult.PlayerWonTimes << endl;
        cout << "       ComputerWonTimes   :" << GameResult.ComputerWonTimes << endl;
        cout << "       DrawTimes          :" << GameResult.DrawTimes << endl;
        cout << "       Winner             : " << GameResult.WinnerName << endl;
        cout << "________________________________________________________________________________________________" << endl;
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> Y;

        system("color 07");
    } while (Y == 'Y' || Y == 'y');
}

int main() {
    srand(time(0));
    StartGame();
}