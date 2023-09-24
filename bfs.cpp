#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int possiblePath(int n, int m, vector<vector<int> >& grid)
{
    // Create a queue to store the
    // cells to explore
    queue<pair<int, int> > q;
 
    // Add the source cell to the queue
    // and mark its distance as 0
    q.push({ 3, 2 });
    
    // Define two arrays to represent the
    // four directions of movement
    int dx[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
    int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
 
    // Create a 2D vector to store the
    // distance of each cell
    // from the source
    vector<vector<int> > dis(n, vector<int>(m, -1));
 
    // Set the distance of the source
    // cell as 0
    dis[3][2] = 0;
 
    // Loop until the queue is empty or
    // the destination is reached
    while (!q.empty()) {
 
        // Get the front cell from the
        // queue and remove it
        pair<int, int> p = q.front();
        q.pop();
        // cout<<"("<<p.first<<","<<p.second<<")"<<" ";
 
        // Loop through the eight directions
        // of movement
        for (int i = 0; i < 8; i++) {
 
            // Calculate the coordinates
            // of the neighboring cell
            int x = p.first + dx[i];
            int y = p.second + dy[i];
            // Check if the neighboring
            // cell is inside the grid
            // and not visited before
            if (x >= 0 && x < n && y >= 0 && y < m
                && dis[x][y] == -1) {
 
                // Check if the neighboring
                // cell is free or special
                if (grid[x][y] == 1) {
 
                    // Set the distance of the
                    // neighboring cell as one
                    // more than the current cell
                    dis[x][y] = dis[p.first][p.second] + 1;
 
                    // Add the neighboring cell
                    // to the queue for
                    // further exploration
                    q.push({ x, y });
                    cout<<"("<<x<<","<<y<<")"<<" ";
                }
            }
        }cout<<endl;
    }
 
    // Return the distance of the
    // destination cell from the source
    return dis[4][9];
}
 
// Drivers code
int main()
{
 
    // int n = 3;
    // int m = 4;
vector<vector<int>>grid={{1,1,1,1,1,1,0,1,1,1},
                        {1,1,1,1,1,1,0,1,1,1},
                        {1,1,1,1,1,1,0,0,1,1},
                        {1,1,0,1,1,1,0,0,1,1},
                        {1,1,0,0,0,1,1,1,0,1},
                        {1,1,0,0,0,0,0,1,1,1},
                        {1,1,0,0,0,0,0,0,0,1},
                        {1,0,1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1,1,1},
                        {1,1,1,1,1,1,1,1,1,1} };
 
    int result = possiblePath(10, 10, grid);
 
    // Function Call
    cout<< "Output: " << result << endl;
 
    return 0;
}