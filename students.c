#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char surname[50];
    int id;
    float grade;
} Student;

Student* students = NULL;
int student_count = 0;

void addStudent() {
    students = realloc(students, (student_count + 1) * sizeof(Student));
    printf("Enter name: ");
    scanf("%s", students[student_count].name);
    printf("Enter surname: ");
    scanf("%s", students[student_count].surname);
    printf("Enter ID: ");
    scanf("%d", &students[student_count].id);
    printf("Enter grade: ");
    scanf("%f", &students[student_count].grade);
    student_count++;
}

void removeStudent() {
    int id, i, found = 0;
    printf("Enter ID to remove: ");
    scanf("%d", &id);
    for (i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (int j = i; j < student_count - 1; j++) {
            students[j] = students[j + 1];
        }
        student_count--;
        students = realloc(students, student_count * sizeof(Student));
        printf("Student removed.\n");
    } else {
        printf("Student not found.\n");
    }
}

void searchStudent() {
    int id, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            printf("Name: %s, Surname: %s, ID: %d, Grade: %.2f\n",
                   students[i].name, students[i].surname, students[i].id, students[i].grade);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found.\n");
}

void displayAll() {
    for (int i = 0; i < student_count; i++) {
        printf("Name: %s, Surname: %s, ID: %d, Grade: %.2f\n",
               students[i].name, students[i].surname, students[i].id, students[i].grade);
    }
}

void displayAverage() {
    if (student_count == 0) {
        printf("No students to calculate average.\n");
        return;
    }
    float sum = 0;
    for (int i = 0; i < student_count; i++) {
        sum += students[i].grade;
    }
    printf("Average grade: %.2f\n", sum / student_count);
}

void saveToFile() {
    FILE *f = fopen("group_details.csv", "w");
    for (int i = 0; i < student_count; i++) {
        fprintf(f, "%s,%s,%d,%.2f\n",
                students[i].name, students[i].surname, students[i].id, students[i].grade);
    }
    fclose(f);
    printf("Data saved to group_details.csv\n");
}

void readFromFile() {
    FILE *f = fopen("group_details.csv", "r");
    if (!f) {
        printf("File not found.\n");
        return;
    }
    char line[200];
    student_count = 0;
    while (fgets(line, sizeof(line), f)) student_count++;
    rewind(f);
    students = realloc(students, student_count * sizeof(Student));
    int i = 0;
    while (fgets(line, sizeof(line), f)) {
        sscanf(line, "%[^,],%[^,],%d,%f",
               students[i].name, students[i].surname, &students[i].id, &students[i].grade);
        i++;
    }
    fclose(f);
    printf("Data loaded from file.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Remove Student\n3. Search Student\n4. Display All\n5. Display Average\n6. Save to File\n7. Read from File\n8. Exit\nChoose: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: removeStudent(); break;
            case 3: searchStudent(); break;
            case 4: displayAll(); break;
            case 5: displayAverage(); break;
            case 6: saveToFile(); break;
            case 7: readFromFile(); break;
            case 8: free(students); exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

