#include <iostream>
#include <cstring>
using namespace std;

// Declaring a global board
int board[10][10];

// Function to check if queen can be placed in given cell
bool isSafe(int row, int col,int n)
{
    // Checking for other queen vertically in each column
    for(int i=0;i<col;i++)
        if (board[row][i])
            return false;
    
     // Checking for other queen horizontally in each row
    for(int i=row, j=col;i>=0 && j>=0 ;i-- , j--)
        if (board[i][j])
            return false;
    
     // Checking for other queen diagonally
    for(int i=row, j=col;i<n && j>=0 ;i++ , j--)
        if (board[i][j])
            return false;
    
}

// Function to place n Queens on the board 
void NQueenRec(int col,int n)
{
    // Returning -1 as no solution exists for n = 2 and n = 3
    if(n==2 || n==3)
    {
        cout<<-1;
        return;
    }
    if(col>=n)
    {
        //Printing the board
        cout<<"[";
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++){
                    if(board[j][i] == 1)
                        cout<<j+1<<" ";}
            }
            cout<<"]"<<" ";
            return;
    }
    
    // Placing Queens on the board recursively
    for(int i=0;i<n;i++)
    {
        if(isSafe(i,col,n))
        {
            board[i][col]=1;
            NQueenRec(col+1,n);
            board[i][col]=0;

        }
    }
    return ;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;

        // Initializing board values to 0 before solving 
	    memset(board,0,sizeof(board));
	    NQueenRec(0,n);
	    cout<<endl;
	}
	return 0;
}