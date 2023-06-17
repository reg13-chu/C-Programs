#include <stdio.h>
#include <stdlib.h>

struct students {

    char name[20];
    float midterm;
    float finals;

};

void getGrades(const struct students *student) {

    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                STUDENT GRADES                     *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");

    printf("\t\tEnter name of student: ");
    scanf("%s", &student->name);

    printf("\t\tEnter midterm grade: ");
    scanf("%f", &student->midterm);

    printf("\t\tEnter final grade: ");
    scanf("%f", &student->finals);

}

void computeGrades(const struct students *student) {

    system("cls");

    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t*                STUDENT GRADES                     *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");

    float avg;

    struct students grades;

    FILE *fp;

    fp = fopen("records.txt", "a");

    avg = (student->midterm + student->finals) / 2;

    printf("\t\tName: %s\n", student->name);
    printf("\t\tMidterm Grade: %.2f\n", student->midterm);
    printf("\t\tFinal Grade; %.2f\n", student->finals);

    printf("\t\tAverage: %.2f\n\n", avg);
    printf("\t\tGrades has been recorded.\n\n");

    fprintf(fp, "%s", student->name);
    fprintf(fp, "   %.2f", student->midterm);
    fprintf(fp, "   %.2f", student->finals);
    fprintf(fp, "   %.2f\n", avg);

    fclose(fp);

}

void openData() {

    system("cls");

    printf("\t\t\t\t\t===== STUDENT RECORDS =====\n\n");

    float avg;

    struct students data;

    FILE *ofp = fopen("records.txt", "rt");

    if(ofp == NULL) {
        printf("\t\tError in opening the file");
        exit(1);
    }

    printf("\t\tName \t\tMidterm Grade \t\tFinal Grade \t\tAve. Grade\n\n");
    while(fscanf(ofp, "%s%f%f%f", data.name, &data.midterm, &data.finals, &avg)!= EOF) {
        printf("\t\t%s", data.name);
        printf("\t\t   %.2f", data.midterm);
        printf("\t\t\t   %.2f", data.finals);
        printf("\t\t\t   %.2f\n", avg);
    }

    fclose(ofp);
}

int main() {

    struct students student;

    getGrades(&student);
    computeGrades(&student);

    int choice;

    do{
    printf("\t\t[1] Yes \t [2] No\n");
    printf("\t\tDo you want to enter another data?: ");
    scanf("%d", &choice);

    if (choice == 2) {
        openData();
    } else {
        system("cls");
        getGrades(&student);
        computeGrades(&student);
      }
    } while(choice != 2);
}
