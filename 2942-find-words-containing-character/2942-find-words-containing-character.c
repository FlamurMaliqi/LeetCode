#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    // Allocate memory for the result array
    int* result = (int*)malloc(wordsSize * sizeof(int));
    *returnSize = 0;

    // Iterate through each word
    for (int i = 0; i < wordsSize; i++) {
        // Check if the word contains the character x
        if (strchr(words[i], x) != NULL) {
            // Store the index of the word containing x
            result[(*returnSize)++] = i;
        }
    }

    return result;
}
