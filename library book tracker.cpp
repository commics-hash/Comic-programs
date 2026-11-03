#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char title[100];

    // Open file in append mode ("a") to keep existing records
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error: Could not open or create the file.\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    // Read string including spaces, removing the newline character
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0; 

    // Write the title to the file followed by a new line
    fprintf(file, "%s\n", title);
    
    // Close the file connection
    fclose(file);

    // Confirmation message
    printf("Success: The book title has been successfully stored!\n");

    return 0;
}