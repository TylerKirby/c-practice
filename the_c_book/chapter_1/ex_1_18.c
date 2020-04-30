/* Write a program to remove trailing blacks and tabs from each line of input, and
 * to delete entirely blank lines.
 */
#include <stdio.h>

#define MAX_LINE_LENGTH 100
#define MAX_NUMBER_OF_LINES 10

int remove_trailing_space(const char line[]);

int main() {
    char curr_char;
    int line_incr, lines_incr, new_eol;
    char lines[MAX_NUMBER_OF_LINES][MAX_LINE_LENGTH] = {0};

    line_incr = lines_incr = 0;

    while ((curr_char = getchar()) != EOF) {
        if (curr_char != '\n') {
            lines[lines_incr][line_incr] = curr_char;
            ++line_incr;
        } else {
            lines[lines_incr][line_incr] = '\0';
            ++lines_incr;
            line_incr = 0;
        }
    }

    for (int i = 0; i < lines_incr; ++i) {
        if (lines[i][0] != '\0') {
            new_eol = remove_trailing_space(lines[i]);
            lines[i][new_eol + 1] = '\0';
            printf("%s\n", lines[i]);
        }
    }
}

// Return index of new EOL
int remove_trailing_space(const char line[]) {
    for (int i = MAX_LINE_LENGTH-1; i > 0; --i) {
        if ((line[i] > 32) && (line[i] < 127)) {
            return i;
        }
    }
    return 0;
}
