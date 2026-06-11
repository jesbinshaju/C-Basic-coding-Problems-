/*****************************************************************

date:5/12/2024
name: jesbin shaju

aim: To write a C program of a menu-driven program to perform operations
        a) Read and display the contents of a file
        b) Append contents to the file
        c) Count the number of characters, words, lines in a file
          and store the result in another file
******************************************************************/
#include <stdio.h>
#include <stdlib.h>

void displayFileContents();
void appendToFile();
void countFileContents();

int main() {
    int choice;

    do {
        printf("\n\n**/MENU/**\n");
        printf("1. Read and display the contents of a text file\n");
        printf("2. Append contents to the file\n");
        printf("3. Count the characters, words, and lines in a file\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayFileContents();
                break;
            case 2:
                appendToFile();
                break;
            case 3:
                countFileContents();
                break;
            case 4:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void displayFileContents() {
    FILE *fp;
    char filename[100], c;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Not able to open file\n");
        return;
    }

    printf("Contents of the file %s:\n", filename);

    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
}

void appendToFile() {
    FILE *fp;
    char filename[100], userContent[1000];
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Not able to open the file\n");
        return;
    }

    printf("Enter contents to append to file: ");
    getchar(); // Consume leftover newline
    fgets(userContent, sizeof(userContent), stdin);
    fprintf(fp, "%s", userContent);

    fclose(fp);

    printf("Contents appended successfully.\n");
}

void countFileContents() {
    FILE *inputFile, *outputFile;
    char inputFilename[1000], outputFilename[1000];
    char c;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // Tracks if we're inside a word

    printf("Enter the input filename: ");
    scanf("%s", inputFilename);

    printf("Enter the output filename: ");
    scanf("%s", outputFilename);

    inputFile = fopen(inputFilename, "r");
    outputFile = fopen(outputFilename, "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("File can't be opened\n");
        return;
    }

    while ((c = getc(inputFile)) != EOF) {
        characters++; // Count every character

        if (c == '\n') {
            lines++; // Increment line count on newline
        }

        // Count words
        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = 0; // Outside a word
        } else if (inWord == 0) {
            inWord = 1; // Entering a new word
            words++;
        }
    }

    // Write results to the output file
    fprintf(outputFile, "Number of characters: %d\n", characters);
    fprintf(outputFile, "Number of words: %d\n", words);
    fprintf(outputFile, "Number of lines: %d\n", lines);

    fclose(inputFile);
    fclose(outputFile);

    printf("Counts have been written to %s\n", outputFilename);
}
