## CODE EXPLANATION 

<P>This code implements a pathfinding algorithm to find the shortest path from a given source cell to the destination cell in a 2D grid. This code is written in C++ and uses a breadth-first search (BFS) approach to explore the grid and calculate the distance of each cell from the source. IT also shows the successor function as in which neighbouring cells did the bfs traversed.</P>

## Table of contents 
 <ul>
 <li>Input Format</li>
 <li>Code Explanation</li>
 <li>Implementaiton details</li>
 <li>Successor function</li>
 <li>Example</li>
 <li>Output</li>
 </ul>

### Input Format
This code accepts 2-D grid as input, where each cell is either:
<ul><li>'1': A free cell that can be traversed.</li><li>'0': The cell where obstacles are located and cannot be traversed.</li></ul>

You can modify the "`vector<vector<int>>grid`" in the main function to define your own grid. The "`possiblePath()`" function takes the grid dimensions ('n' and 'm') and the grid itself as input.

## Code Explanation
The code works as follows:
<ol><li>It starts from the specified source cell or start node.</li><li>It uses a queue to perform BFS traversal of the grid.</li><li>For each cell, it calculates the coordinates of neighbouring cells in all the eight possible directions.</li><li>If the neighbouring cell is within the grid boundaries and has not been visited before, and if it's a free cell(it's marked as '1'), it calculates and the stores the distance of that cell from the source.</li><li>At the same time, it also keeps on printing the neighbouring cells it is traversing, thus giving us the required successor function as well.</li><li>The code conitnues exploring neighbouring cells in a BFS manner until it reaches the destination or exhausts all the possibilities.</li><li>Finally, it returns the shortest distance of the destination cell from the source cell and provides  information about the paths taken.</li></ol>

## Implementation details

The algorithm implemented in this code utilizes a breadth-first search (BFS) approach to explore the grid, BFS ensures that shortest path is found becuase it explores nodes in the order of their distance from the source. The code maintains a queue to keep track of cells to be explored and uses a 2D vector dp to store the distance of each cell from the source.

## Successor function
The "successor function" in this context refers to the exploration of neighbouring cells during the BFS traversal. The code prints the coordinates of cells that are visited during the search, Showing all possible successors at each step. This information can be helpful in understanding the algorithm's behaviour and how it explores the grid.

## Example 
in the provided example, the code uses a 10*10 grid with the following structure:

<table border="1">
   <tr>
      <th></th>
      <th>0</th>
      <th>1</th>
      <th>2</th>
      <th>3</th>
      <th>4</th>
      <th>5</th>
      <th>6</th>
      <th>7</th>
      <th>8</th>
      <th>9</th>
   </tr>
   <tr>
      <th>0</th>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>1</th>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>2</th>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>3</th>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>4</th>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>1</td>
   </tr>
   <tr>
      <th>5</th>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>6</th>
      <td>1</td>
      <td>1</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>0</td>
      <td>1</td>
   </tr>
   <tr>
      <th>7</th>
      <td>1</td>
      <td>0</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>8</th>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
   </tr>
   <tr>
      <th>9</th>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
   </tr>
</table>


The source cell is [4,0] and the destination cell is [4,9].

## Output
 The code calculates and prints the shortest distance from the source to the destination along with all the paths taken to reach various cells on the grid. These paths represent the possible successors or neighbouring cells explored during the search.