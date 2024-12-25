#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
void printHello(); //DECLARATION / PROTOTYPE

int main() {
    printHello(); //FUNCTION CALL
    printHello();

    return 0;

}

void printHello() {  // FUNCTION DEFINITION
    printf("Hello! \n"); 

}
*/


/*
void printhello();
void printGoodbye();

int main {
    printhello();
    printGoodbye();

    return 0;
}

void printhello() {
    printf("hello \n");
}
void printGoodbye() {
    printf("good bye \n");
}
}
*/



/// FUNCTION, THAT PRINTS NAMASTE IF USER IS INDIAN
/// OR PRINTS BONJOUR IF USER IS FRENCH

void namaste();
void bonjour();

int main() {
    printf("ENTER F FOR FRENCH AND I FOR INDIAN : ");
    char ch;
    scanf("%c", &ch);

    if (ch == "i") {
        namaste();
    }
    else {
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("NAMASTE \n");
}

void bonjour() {
    printf("BONJOUR \n");
}


