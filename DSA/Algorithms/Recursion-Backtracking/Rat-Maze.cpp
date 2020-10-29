 Problem Statement:
 Rat In A Maze Problem

You are given a N*N maze with a rat placed at maze[0][0]. Find and print all paths that rat can follow to reach its destination i.e. maze[N-1][N-1]. Rat can move in any direc­tion ( left, right, up and down).
Value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked means rat can­not enter into those cells and those with value 1 are open.
Input Format
The first line of input contains an integer 'N' representing 
the dimension of the maze.
The next N lines of input contain N space-separated 
integers representing the type of the cell.
Output Format :
For each test case, print the path from start position to destination position and only cells that are part of the solution path should be 1, rest all cells should be 0.

Output for every test case will be printed in a separate line.
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
0 < N < 11 0 <= Maze[i][j] <=1

Time Limit: 1sec
Sample Input 1 :
3
1 0 1
1 0 1
1 1 1
Sample Output 1 :
1 0 0 1 0 0 1 1 1 
Sample Output 1 Explanation :
Only 1 path is possible

1 0 0
1 0 0
1 1 1
Which is printed from left to right and then top to bottom in one line.

Sample Input 2 :
3
1 0 1
1 1 1
1 1 1
Sample Output 2 :
1 0 0 1 1 1 1 1 1 
1 0 0 1 0 0 1 1 1 
1 0 0 1 1 0 0 1 1 
1 0 0 1 1 1 0 0 1 
Sample Output 2 Explanation :
4 paths are possible which are printed in the required format.



  Code:



#include<bits/stdc++.h>
using namespace std;

void print(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
    cout << endl;
}
bool checker(int maze[][20],int **arr,int row,int col,int n)
{
    if(row<0 || col<0)
    {
        return false;
    }
    if(row>n-1 || col>n-1)
    {
        return false;
    }

    int k=maze[row][col];
    if(k==1 && arr[row][col]==0 )
    {
        return true;
    }
    return false;

}

void placer(int maze[][20] , int** arr, int row,int col, int n)
{
	if (row == (n-1) && col==(n-1))
	{
		print(arr, n);
		return;
	}
	int j=col;
    while(j<col+1)
   {
        // for right check
        if(checker(maze,arr,row,j+1,n))
        {
            arr[row][j+1] = 1;
            placer(maze,arr,row,j+1,n);
            arr[row][j+1] = 0;
        }
        // for left check
        if(checker(maze,arr,row,j-1,n))
        {
            arr[row][j-1] = 1;
            placer(maze,arr,row,j-1,n);
            arr[row][j-1] = 0;
        }
        //for down check
         if(checker(maze,arr,row+1,j,n))
        {
            arr[row+1][j] = 1;
            placer(maze,arr,row+1,j,n);
            arr[row+1][j] = 0;
        }
        // for up check
          if(checker(maze,arr,row-1,j,n))
        {
            arr[row-1][j] = 1;
            placer(maze,arr,row-1,j,n);
            arr[row-1][j] = 0;
        }
       j++;

    }
    return;
}

void ratInAMaze(int maze[][20], int n)
{

    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
			arr[i][j] = 0;
		}
	}
    arr[0][0]=1;
    // arr[n-1][n-1]=1;
    placer(maze,arr, 0,0, n);  

    for(int i=0; i<n; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;


}
int main()
{

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}
