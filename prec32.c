
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f;
    int ch;
    f = fopen("DEMO.txt", "w");
    if (f == NULL) {
        perror("Error creating file");
        return 1;
    }
    printf("Enter text to save to file\n");
    while ((ch = getchar()) != EOF) {
        putc(ch, f);
    }
    fclose(f);
    
    f = fopen("DEMO.txt", "r");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }

    char word[100];
    int index = 0; 

    while ((ch = getc(f)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            
            for (int i = index - 1; i >= 0; --i) {
                putc(word[i], stdout);
            }
            putc(ch, stdout);
            index = 0; 
        } 
        else {
            if (index < 99) { 
                word[index++] = ch;
            }
        }
    }

    // Edge Case: If the file ends and the last word didn't have a space after it
    if (index > 0) {
        for (int i = index - 1; i >= 0; --i) {
            putc(word[i], stdout);
        }
    }

    fclose(f);

    printf("Name: utsav vara ID: 25CE134\n");
    return 0;
}
