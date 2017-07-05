#include<iostream>
using namespace std;
void display();
void player_turn();
bool gameover();
char draw;
bool chance = false;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn;
int main()
{
cout<<"Welcome to Tic Tac Toe Game"<<endl;
cout<<"Player 1 [X] vs Player 2 [O]"<<endl;
turn='X';

while(!gameover())
    {
    display();
    player_turn();
    gameover();
    }

if (turn == 'O' && !draw)
    {
    display();
    cout<<"Player 1 [X] Wins! Game Over! \n";
    }

else if (turn == 'X' && !draw)
    {
    display();
    cout<<"Player 2 [O] Wins! Game Over! \n";
    }

else
    {
    display();
    cout<<"Its a draw man!"<<endl;
    }
}

void display()
    {
    cout<<"---------------------\n"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"   "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"   "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"   "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<endl;
    cout<<"     |     |     "<<endl;
    }

void player_turn()
{
    int choice;
    int row = 0, column = 0;

    if(turn == 'X')
        {
        cout<<"Player 1's turn [X]:'"<<endl;
        }
        else if(turn == 'O')
            {
            cout<<"Player 2's turn [O]:'"<<endl;
            }
                cin>>choice;
        switch(choice)
            {
            case 1: row=0; column=0; break;
            case 2: row=0; column=1; break;
            case 3: row=0; column=2; break;
            case 4: row=1; column=0; break;
            case 5: row=1; column=1; break;
            case 6: row=1; column=2; break;
            case 7: row=2; column=0; break;
            case 8: row=2; column=1; break;
            case 9: row=2; column=2; break;
            default: cout<<"Error reading your choice. Please Try Again!!"<<endl;
            player_turn();
            }
}

bool gameover()
    {
    for(int i;i<3;i++)
    {
        if ((board[i][0] == board[i][1] && board[i][1] == board[1][2] || board[0][i] == board[1][i] && board[1][i] == board[2][i]))
        {
        return true;
        }
    }

for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                {
                return false;
                }
        }
    }
draw = true;
return true;
    }

