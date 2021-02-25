/* Given a 2d grid map of 1 and 0 count the number of islands.
 An island is surrounded by water and is formed by connecting adjacent lands 
 horizontally or vertically */

/*
Input:  
11110
11010
11000
00000

output:
1

Input:
11000
11000
00010
000011

output:
3
*/

#include<iostream>
#include<vector>

class solution{
void mark_current_island(vector<vector<char>> &matrix,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')  //Boundary case for matrix
            return;
        
        //Mark current cell as visited
        matrix[x][y] = '2';
        
        //Make recursive call in all 4 adjacent directions
        mark_current_island(matrix,x+1,y,r,c);  //DOWN
        mark_current_island(matrix,x,y+1,r,c);  //RIGHT
        mark_current_island(matrix,x-1,y,r,c);  //TOP
        mark_current_island(matrix,x,y-1,r,c);  //LEFT
}
public:
int numIslands(vector<vector<char>>& grid){
//For FAST I/O
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int row = grid.size();
        if(row==0){
            return 0;
        }
        int cols = grid[0].size();

        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    mark_current_island(grid,i,j,row,cols);
                    count +=1;
                }
            }
        }
return count;
}
};


