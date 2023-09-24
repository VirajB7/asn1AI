#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//define a funciton to calculate the heuristic
int heuristic(pair<int,int>& cell,pair<int,int>& goal){
    int dx=abs(cell.first-goal.first);
    int dy=abs(cell.second-goal.second);
    return max(dx,dy)+(sqrt(2)-1)*min(dx,dy);
}

vector<pair<int,int>> hillClimbing(vector<vector<int>>&grid, pair<int,int>& start, pair<int,int>& goal,vector<vector<bool>>&visited){
    pair<int,int> current=start;
    visited[current.first][current.second]=true;
    vector<pair<int,int>> path;
    
    while(current.first!=goal.first || current.second!=goal.second){
        vector<pair<int,pair<int,int>>>neighbours;

        // Generate neighboring cells (up, down, left, right,upper-left,upper-right,lower-left,lower-right)
        int dx[] = {0, 0, 1, -1, -1, -1, 1, 1};
        int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

        for(int i=0;i<8;i++){
            int newx=current.first+dx[i];
            int newy=current.second+dy[i];
            // cout<<newx<<" "<<newy<<endl;

            //Check if the adjacent cells are in the grid and are not blocked and are not already visited
            if (newx >= 0 && newx < 10 && newy >= 0 && newy < 10 && grid[newx][newy] == 1 && visited[newx][newy]==false) {
                pair<int,int> neighbour{newx, newy};
                int cost = heuristic(neighbour, goal);
                visited[newx][newy]=true;
                neighbours.push_back({cost, neighbour});
            }

        }

        if(neighbours.empty()){
            //stuck in a local maximum. Path not found
            cout<<"Could not reach destination"<<endl;
            return path;
        }

        // Select the neighbor with the lowest heuristic value
        sort(neighbours.begin(), neighbours.end());
        current = {neighbours[0].second.first,neighbours[0].second.second};

        //Add the current cell to the path
        path.push_back(current);
    }

    return path;
}

int main(){
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
    pair<int,int> start=make_pair(4,0);
    pair<int,int>goal=make_pair(4,9);
    vector<vector<bool>>visited(10,vector<bool>(10,false));
    vector<pair<int,int>> result =hillClimbing(grid, start, goal,visited);

    if (result.empty()) {
        cout << "No path found." << endl;
    } else {
        cout << "Path traversed:" << endl;
        for (auto cell: result) {
            cout << "(" << cell.first << ", " << cell.second << ")" << endl;
        }
    }

    return 0;
}