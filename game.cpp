#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printPacman(int x, int y);
char getCharAtxy(short int x, short int y);
void showGhost(int x, int y);
void clear(int x, int y, char previous);
void score_update(int score, char nextLocation);
main() {
    int pacmanX = 27;
    int pacmanY = 13;
    bool gameRunning = true;

    int gx = 1;
    int gy = 1;
    int g2x = 57;
    int g2y = 1;
    string direction = "right";
    string direction2 = "downward";
    char previousChar = ' ';
    char previousCharupDown = ' ';
    int score = 0;
    system("cls");
    printMaze();
    printPacman(pacmanX, pacmanY);
    showGhost(gx, gy);
    showGhost(g2x, g2y);

    while (gameRunning) {
        if (GetAsyncKeyState(VK_LEFT)) {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == '.') {
                score = score + 1;
            }
            score_update(score, nextLocation);
            if (nextLocation == ' ' || nextLocation == '.') {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }if (nextLocation == 'G') {
                gotoxy(8, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == '.') {
                score = score + 1;
            }
            score_update(score, nextLocation);
            if (nextLocation == ' ' || nextLocation == '.') {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
            }if (nextLocation == 'G') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }
        if (GetAsyncKeyState(VK_UP)) {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == '.') {
                score = score + 1;
            }
            score_update(score, nextLocation);
            if (nextLocation == ' ' || nextLocation == '.') {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
            }if (nextLocation == 'G') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == '.') {
                score = score + 1;
            }
            score_update(score, nextLocation);
            if (nextLocation == ' ' || nextLocation == '.') {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
            }if (nextLocation == 'G') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            gameRunning = false;
        }


        if (direction == "right") {
            char nextLocation = getCharAtxy(gx + 1, gy);
            if (nextLocation == '|') {
                direction = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.') {
                clear(gx, gy, previousChar);
                gx = gx + 1;
                previousChar = nextLocation;
                showGhost(gx, gy);
            }if (nextLocation == 'P') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }

        if (direction == "left") {
            char nextLocation = getCharAtxy(gx - 1, gy);
            if (nextLocation == '|') {
                direction = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.') {
                clear(gx, gy, previousChar);
                gx = gx - 1;
                previousChar = nextLocation;
                showGhost(gx, gy);
            }if (nextLocation == 'P') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }
        if (direction2 == "downward") {
            char nextLocation = getCharAtxy(g2x, g2y + 1);
            if (nextLocation == '#') {
                direction2 = "upward";
            }
            else if (nextLocation == ' ' || nextLocation == '.') {
                clear(g2x, g2y, previousCharupDown);
                g2y = g2y + 1;
                previousCharupDown = nextLocation;
                showGhost(g2x, g2y);
            }if (nextLocation == 'P') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }

        if (direction2 == "upward") {
            char nextLocation = getCharAtxy(g2x, g2y - 1);
            if (nextLocation == '#') {
                direction2 = "downward";
            }
            else if (nextLocation == ' ' || nextLocation == '.') {
                clear(g2x, g2y, previousCharupDown);
                g2y = g2y - 1;
                previousCharupDown = nextLocation;
                showGhost(g2x, g2y);
            }if (nextLocation == 'P') {
                gotoxy(18, 26);
                cout << "GAMEOVER:)";
                return 0;
            }
        }

        Sleep(100);
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = { 0,0 };
    SMALL_RECT rect = { x,y,x,y };
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int x, int y) {
    gotoxy(x, y);
    cout << " ";
}
void printPacman(int x, int y) {
    gotoxy(x, y);
    cout << "P";
}
void printMaze() {
    cout << "#######################################################################" << endl;
    cout << "||.. ......................................................  ......  ||" << endl;
    cout << "||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%   |%|..   %%%%   || " << endl;
    cout << "||..        |%|   |%|     |%|...     |%|       |%|    |%|..    |%|   ||" << endl;
    cout << "||..        |%|   |%|     |%|...     |%|       |%|    |%|..    |%|   ||" << endl;
    cout << "||..        %%%%%%%%% . . |%|...     %%%%%%%%%%%%%%      ..   %%%%.  ||" << endl;
    cout << "||..        |%|       . . |%|...     ..............  |%| ..       .  ||" << endl;
    cout << "||..        %%%%%%%%%%. . |%|...     %%%%%%%%%%%     |%| ..   %%%%.  ||" << endl;
    cout << "||..               |%|.              |%|.....        |%| ..    |%|.  ||" << endl;
    cout << "||..     ......... |%|.              |%|.....|%|               |%|.  ||" << endl;
    cout << "||..|%|  |%|%%%|%|.|%|. |%|             .....|%|         ..|%| |%|.  ||" << endl;
    cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%%  .....|%|          .|%|.      ||" << endl;
    cout << "||..|%|  |%|   |%|..            ...|%|     %%%%%         . |%|.      ||" << endl;
    cout << "||..|%|            .            ...|%|               |%| ..|%|.      ||" << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%         ...|%|%%%%%%%%%      |%| ..|%|%%%%%  ||" << endl;
    cout << "||...............................................    |%| ..........  ||" << endl;
    cout << "||   ............................................           .......  ||" << endl;
    cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%   .....|%|      |%| ..|%|.     ||" << endl;
    cout << "||..|%|  |%|   |%|..            ...|%|      %%%%%     |%| ..|%|.     ||" << endl;
    cout << "||..|%|            .            ...|%|                |%| ..|%|.     ||" << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%         ...|%|%%%%%%%%%%      |%| ..|%|%%%%  ||" << endl;
    cout << "||...............................................     |%| .........  ||" << endl;
    cout << "||  .............................................            ......  ||" << endl;
    cout << "#######################################################################" << endl;
}
void clear(int x, int y, char previous) {
    gotoxy(x, y);
    cout << previous;
}
void showGhost(int x, int y) {
    gotoxy(x, y);
    cout << "G";
}
void score_update(int score, char nextLocation) {
    gotoxy(1, 26);
    cout << "Score = " << score;

}
