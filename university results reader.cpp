/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:University Results Reader
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_number[20];
    int total_marks;
};

int main() {
    FILE *file;
    struct Student student;

    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf("--- Student Examination Results ---\n");
    printf("%-30s | %s\n", "Student Name", "Total Marks");
    printf("---------------------------------------------\n");

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("%-30s | %d\n", student.name, student.total_marks);
    }

    fclose(file);

    return 0;
}