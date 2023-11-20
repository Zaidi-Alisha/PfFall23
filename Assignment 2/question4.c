#include <stdio.h>
#define a 5
#define b 5

// Printing the path from start to end
void printPath(int path[a][b], int x, int y) {
    printf("%d,%d", x, y);
    while (path[x][y] != -1) {
        printf(" <- ");
        if (path[x][y] == 0) {
            x--;
        } else {
            y--;
        }
        printf("%d,%d", x, y);
    }
    printf("\n");
}

// Solving the maze
void solveMaze(char maze[a][b]) {
    int path[a][b];

    // Initialize matrix
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            path[i][j] = -1;
        }
    }

    // Start at the top-left corner
    int x = 0, y = 0;
    path[x][y] = -2;  // Mark the starting point

    // Traverse the maze
    while (x < a && y < b) {
        if (maze[x][y] == 'E') {
            // Reached the exit
            printf("Output Maze after traversal:\n");
            printPath(path, x, y);
            return;
        }

        // Move right
        if (y + 1 < b && maze[x][y + 1] != 'W') {
            path[x][y + 1] = 0;
            y++;
        }
        // Move down
        else if (x + 1 < a && maze[x + 1][y] != 'W') {
            path[x + 1][y] = 1;
            x++;
        }
        // Go back
        else {
            x--;
            y--;
        }
    }
}

int main() {
    char maze[a][b] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'O', 'W'},
        {'O', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'}
    };

    // Solve the maze
    solveMaze(maze);

    return 0;
} //end main
