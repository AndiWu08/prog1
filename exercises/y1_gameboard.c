#include <stdio.h>

void init_board(char board[][100], int height, int width, char defaultChar, char borderChar) {
    // Initialize the board with a default character 
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            board[i][j] = defaultChar; // Fill each cell with the default character
        }
    }

    // Add a border around the board
    for (int i = 0; i < width; i++) {
        board[0][i] = borderChar;              // Top border
        board[height - 1][i] = borderChar;     // Bottom border
    }
    for (int i = 0; i < height; i++) {
        board[i][0] = borderChar;             // Left border
        board[i][width - 1] = borderChar;     // Right border
    }
}

void show_game_board(char board[][100], int height, int width) {
    // Print the board
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n"); // New line after each row
    }
}

int main() {   
    int height = 20;
    int width = 60;
    char defaultChar = ' ';
    char borderChar = '#';
    char board[100][100];

    init_board(board, height, width, defaultChar, borderChar);    

    show_game_board(board, height, width);

    return 0;
}
