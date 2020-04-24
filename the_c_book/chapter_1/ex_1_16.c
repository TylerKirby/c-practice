#include <stdio.h>
#define MAX_LINE 1000

int get_line(char line[], int max_line);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    max = 0;
    while ((len = get_line(line, MAX_LINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Printing longest line of length %d\n", max);
        printf("%s", longest);
    }
    return 0;
}

// get_line: read a line into s, return length
int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}