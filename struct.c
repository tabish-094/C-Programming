#include <stdio.h>
#include <string.h>


// Q. Program to store data of 3 students...
/*
struct student {
    int roll;
    float cgpa;
    char name[100];

};

int main() {
    struct student s1;
    s1.roll = 1943;
    s1.cgpa = 9;
   // s1.name = Tabish;
    strcpy(s1.name, "Tabish");
    printf("Student's name: %s\n", s1.name);
    printf("Student's roll no: %d\n", s1.roll);
    printf("Student's cgpa: %f\n", s1.cgpa);


    struct student s2;
    s2.roll = 1944;
    s2.cgpa = 9;
    strcpy(s2.name, "Dikshita");
    printf("Student's name: %s\n", s2.name);
    printf("Student's roll no: %d\n", s2.roll);
    printf("Student's cgpa: %f\n", s2.cgpa);

    return 0;
}

*/
//same question using functions
/*
struct student {
    int roll;
    float cgpa;
    char name[100];

};

void printinfo(struct student s1);

int main() {
    struct student s1 = {1943, 9.0 , "Tabish"};
    printinfo(s1);

}
void printinfo(struct student s1) {
    printf("STUDENT'S INFORMATION :\n");
    printf("Student's name: %s\n", s1.name);
    printf("Student's roll no: %d\n", s1.roll);
    printf("Student's cgpa: %f\n", s1.cgpa);

}
    
*/

// Q. Print address (house no, block, city, state) of 5 people
/*
struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
} add;

void printadd(struct address add);

int main() {
    struct address add[2];
    
    printf("ENTER INFORMATIONS FOR PERSON 1: ");
    scanf("%d", &add[0].houseno);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("ENTER INFORMATIONS FOR PERSON 2: ");
    scanf("%d", &add[1].houseno);
    scanf("%d", &add[1].block);
    scanf("%s", &add[1].city);
    scanf("%s", &add[1].state);
    
    printadd(add[0]);
    printadd(add[1]);
    return 0;
    
}

void printadd(struct address add) {
    printf("THE ADDRESS IS : %d, %d, %s, %s\n", add.houseno, add.block, add.city, add.state);
}

*/

// Q. Create a structre to store vectors, then make a function to return the sum of 2 vectors..
/*
struct vec {
    int x;
    int y;
};
void calcsum (struct vec v1, struct vec v2, struct vec sum);

int main() {
    struct vec v1 = {5,10};
    struct vec v2 = {6,12};
    struct vec sum = {0};

    calcsum(v1, v2, sum);
    return 0;

}

void calcsum (struct vec v1, struct vec v2, struct vec sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("THE SUM OF x IS : %d\n", sum.x);
    printf("THE SUM OF y IS : %d\n", sum.y);
}
*/

// Q. Create a structre to store complex numbers..Use ARROW OPERATOR..
/*

struct complex {
    int real;
    int img;
};

int main() {
    struct complex num = {8, 71};
    struct complex *ptr = &num;
    printf("real = %d\n", ptr->real);
    printf("img = %d\n", ptr->img);
}

*/


//Q. Make a structure to store Bank acc details of a customer of abc bank, make alias for it...
/*
typedef struct BankAccount {
    int accno;
    char name[100];
} acc ;

int main() {
    acc acc1 = {123, "Tabish"};
    acc acc2 = {444, "Tabishhhh"};

    printf("ACCOUNT NO : %d\n", acc1.accno);
    printf("ACCOUNT NAME : %s", acc1.name);
}
*/