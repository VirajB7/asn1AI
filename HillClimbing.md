## Hill climbing Pathfinding Algorithm

 This C++ code implements the Hill Climbing algorithm to find the path from starting point to a destination on a 2D grid. The grid contains obstacles, tand the goal is to find the with the lowest cost while avoiding obstacles. The code uses a heuristic function to estimate the cost of reaching the goal from each possible neighbour and selects the neighbour with the lowest estimated cost.

 ### Table of contents
 <ul><li>Input format</li><li>Code Explanation</li><li>Implementaion Details</li><li>Example</li><li>Output</li></ul>

 ### Input format
 <ul><li>The code accepts a 2-D grid represented as a vector of vectors, where:<ul><li>'1' represents free cells</li><li>'0' represents obstacles</li</ul</li></ul>

 ### Code Explanation
 The code works as follows:
 <ol><li>It starts from a specified starting point and uses the Hill Climbing algorithm to find the path to the destination point on a 2D grid.</li><li>The distance heuristic takes into consideration shortest distance to the goal and moves towards that path</li><li>The Hill Climbing algorithm explores neighbouring cells to find the one with the lowest estimated cost using a heuristic function</li><li>If a path is found, it is displayed. If no path is found, a message indicating that is shown along with the cell it reached before not moving further.</li></ol>

 ### Implementation Details 
 <ul><li>It uses Hill Climbing to find the shortest path to the goal node. Note that hill climbing does not guarantee a solution always so we have to also maintain track of the cases where it does not find solution</li><li>The heuristic function estimates the cost of reaching the goal from a given cell. It uses the Manhattan distance between the cell and the goal, with an adjustment for the diagonal movement (The euclidean distance).</li><li>The code maintains a vector of visited cells to ensure that each cell is visited only once.</li><li>It also handles the cases where no path is found due to being stuck in a local maximum.</li></ul>

 ### Example
 In the provided example, the code uses a 10*10 grid with obstacles and specifies the starting and destination points. It calculates and displays the path from the starting point to the destination while avoiding obstacles, by taking the path which have the lowest cost.

 ### Output
 <ul><li>If the path from the starting point to the destination is found, it is displayed as a list of (row,column) coordinates.</li><li>If no path is found due to being stuck in local maximum , a message indicating that is shown.</li><li>In our example, it gets stuck at a local maximum due to obstacles and unavailability of a neighbour with lower cost. The path traversed by it before termination is: (4,0), (3, 1)
(2, 2)
(2, 3)
(2, 4)
(2, 5)</li></ul>