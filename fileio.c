#include <stdio.h>
// Reading a File..
/*
int main() {
    FILE *fptr;
    fptr = fopen("test.txt","r");

    int r;
    fscanf(fptr, "%d", &r);
    printf("CHARACTER = %d\n", r);

    fclose(fptr);
}
*/

//Writing a file (creating and writing)
/*

int main() {
    FILE *fptr;
    fptr = fopen("test.txt","w");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    fclose(fptr);
}

*/

//Printing the characters from the file...
/*
int main() {
    FILE *fptr;
    fptr = fopen("test.txt","r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');
    fclose(fptr);
}
*/

//Printing all the characters at one time from the file...
/*
int main() {
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    ch = fgetc(fptr);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
*/


// Q. Program to print all the info of a student and enter it to a file...
/*
int main() {
    FILE *fptr;
    fptr = fopen("stud.txt", "w"); //it will create a new file and write all the content in it..

    char name[100];
    int age;
    float cgpa;

    printf("ENTER YOUR NAME : ");
    scanf("%s", name);
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);
    printf("ENTER YOUR CGPA SCORE : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);
}
*/

// Q. Program to print the sum of 2 numbers which are already mentioned in a file..
/*
int main() {
    FILE *fptr;
    fptr = fopen("num.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("num.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    
}
*/
