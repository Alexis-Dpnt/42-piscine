/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:58:46 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 10:59:09 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    int size;
} Square;

void print_map(char **map, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            putchar(map[i][j]);
        }
        putchar('\n');
    }
}

char **read_map(const char *filename, int *rows, int *cols, char *empty, char *obstacle, char *full) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Could not open file");
        exit(EXIT_FAILURE);
    }

    fscanf(file, "%d %c %c %c\n", rows, empty, obstacle, full);
    *cols = *rows; // Assuming square map for now

    char **map = malloc(*rows * sizeof(char *));
    for (int i = 0; i < *rows; ++i) {
        map[i] = malloc((*cols + 1) * sizeof(char)); // +1 for the newline character
        fgets(map[i], *cols + 2, file); // +2 to include newline and null terminator
    }

    fclose(file);
    return map;
}

Square find_largest_square(char **map, int rows, int cols, char empty, char obstacle) {
    int **dp = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        dp[i] = malloc(cols * sizeof(int));
    }

    Square max_square = {0, 0, 0};

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (map[i][j] == obstacle) {
                dp[i][j] = 0;
            } else if (i == 0 || j == 0) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = 1 + (dp[i-1][j] < dp[i][j-1] ? (dp[i-1][j] < dp[i-1][j-1] ? dp[i-1][j] : dp[i-1][j-1]) : (dp[i][j-1] < dp[i-1][j-1] ? dp[i][j-1] : dp[i-1][j-1]));
            }

            if (dp[i][j] > max_square.size) {
                max_square = (Square){i, j, dp[i][j]};
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        free(dp[i]);
    }
    free(dp);

    return max_square;
}

void draw_square(char **map, Square square, char full) {
    for (int i = square.x; i > square.x - square.size; --i) {
        for (int j = square.y; j > square.y - square.size; --j) {
            map[i][j] = full;
        }
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int rows, cols;
    char empty, obstacle, full;
    char **map = read_map(argv[1], &rows, &cols, &empty, &obstacle, &full);

    Square largest_square = find_largest_square(map, rows, cols, empty, obstacle);
    draw_square(map, largest_square, full);

    print_map(map, rows, cols);

    for (int i = 0; i < rows; ++i) {
        free(map[i]);
    }
    free(map);

    return EXIT_SUCCESS;
}
