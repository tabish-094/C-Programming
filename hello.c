#include<stdio.h>
#include<math.h>
#include<conio.h>



/*
int main() {
    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum is : %d", sum);
    return 0;


}

*/



/*
//Area of Square...
int main() {

    int side;
    printf("enter side");
    scanf("%d", &side);

    printf("THE AREA OF SQUARE IS : %d", side * side);
    return 0;

}

*/

/*
// Radius of a circle

int main() {

    float radius;
    printf("ENTER THE RADIUS OF THE CIRCLE : ");
    scanf("%f", &radius);

    printf("THE AREA OF THE CIRCLE IS : %f ", 3.14 * radius * radius);
    return 0;

}


*/




/*
int main() {

    int a = (int) 1.999999;
    printf("%d", a);
    return 0;
}

*/


/*
int main() {

    int a = 4 + 5 * 9;
    printf("%d", a);
    return 0;
}


*/

/*
int main() {

    int a = 4 * 3 / 6 * 2;
    printf("%d", a);
    return 0;
}

*/
/*
int main() {

    int a = 5 * 2 / 2 * 3 ;
    printf("%d", a);
    return 0;

}

*/


/*
int main() {

    int a = 5>2 && 5>4; ;
    printf("%d", a);
    return 0;

}


*/



/*

// TO CHECK WHETHER THE GIVEN NUMBER IS DIVISIBLE BY 2 OR NOT....
int main()
{
    int x = 6;
    printf("ENTER A NUMBER : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
// this code can also be used for checking even or odd numbers...

}

*/

/*
int main() {

    
    printf("%d", 8^8);
    return 0;


}

*/


//CONDITIONAL STATEMENTS
/*
int main() {

    int age;
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);

    if(age > 18) {
        printf("YOU ARE ADULT \n");
        
            }

    else {
        printf("NOT ADULT \n");

    }        

    return 0;

}
*/

//               OR
/*
int main() {
    int age;
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);

    age >= 18 ? printf("ADULT \n") : printf("NOT ADULT \n ");
    return 0;
}
*/

/*
int main()
{
    int day; 
    printf("ENTER THE DAY : ");
    scanf("%d", &day);

    switch (day)
    {
        case 1: printf("ITS MONDAY \n");
                 break;
        case 2 : printf("ITS TUESDAY \n");
                 break;

        case 3 : printf("ITS WEDNESDAY \n");
                 break;
        case 4 : printf("ITS THURSDAY \n");
                 break;
        case 5 : printf("ITS FRIDAY \n");
                 break;

        case 6 : printf("ITS SATURDAY \n");
                 break;

        case 7 : printf("ITS SUNDAY \n");
                 break;
        default : printf("NOT A VALID DAY \n");

    }
}
*/

// TO CHECK WHETHER THE GIVEN CHARACTER IS AN UPPER CASE OR LOWER CASE....
/*
int main()
{
    char ch;
    printf("ENTER THE CHARACTER : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("THE CHARACTER IS AN UPPER CASE \n");
    }
    else if(ch>='a' && ch<='z') {
        printf("THE GIVEN CHARACTER IS A LOWER CASE \n");
    }
    else {
        printf("INVALID CHARACTER");
    }

    return 0;
}
*/


// LOOPS
// FOR loop..


/*
int main()
{
    for(int i=1; i<=100; i=i+1) {
        printf("%d \n", i);
    }
        return 0;
    
}

*/


// PRINT NUMBERS FROM 0 TO n...

/*
int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    // int i = 0;
    // while(i <= n) {     //while 
    // printf("%d \n", i);
    // i++;
    // }

    // for(int i=0; i<=n; i++){   // for
    //     printf("%d \n", i);
    // }

    int i = 0;
    do {                // do while
        printf("%d \n", i);
        i++;
    } while(i<=n);
    
    
    return 0;

}

*/


// PRINTING THE SUM OF A GIVEN NUMBER AND PRINTING REVERSE ORDER SEQUENCE FROM THAT NUMBER TILL THE CONDITION..
/*
int main() {
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum = sum + i;

    }   
    printf("THE SUM IS : %d \n", sum);

    // REVERSE PRINTING
    for (int i=n; i>=1; i--) {
        printf("THE REVERSE ORDER IS : %d \n", i);
    }

    return 0;
}
*/




//PRINT TABLE OF GIVEN INPUT NUMBER
/*
int main() {

    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++) {
        printf("%d \n", n*i);
    }

    return 0;
}
*/



// PRINT THE NUMBER UNTIL THE NUMBER ENTERED IS ODD..
/*
int main() {
    int n;
    do {
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    printf("%d \n", n);

    if (n % 2 != 0) {
        break;
        }


    } while (1);
    printf("THANK YOU..");

    return 0;
}
*/


// KEEP TAKING NUMBER AS INPUT FROM THE USER UNTIL THE USER INPUTS A NUMBER WHICH IS MULTIPLE OF 7...
/*
int main() {
    int n;
    do {
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    printf("%d \n", n);

    if (n % 7 == 0) { //MULTIPLE OF 7
        break;
        }


    } while (1);
    printf("THANK YOU..");

    return 0;

}

*/






// PRINT ALL THE NUMBERS FROM 1 TO 10 EXCEPT 6...
/*
int main()
{
    for (int i=1; i<=10; i++) {
        if(i == 6) { //skip
            continue;
        }
    
        printf("%d \n", i);
    }
    return 0;
}
*/



// FINDING THE FACTORIAL OF A NUMBER..
/*
int main() {
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    }

    printf("THE FACTORIAL OF THE NUMBER IS : %d ", fact);

    return 0;

}
*/
/*
#include<stdio.h>

void printHello();

int main() {
    printHello();
    printHello();

    return 0;

}

void printHello() {
    printf("Hello! \n");
    
}
*/



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

/*
void namaste();
void bonjour();

int main() {
    printf("ENTER F FOR FRENCH AND I FOR INDIAN : ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i') {
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
*/

// SUM OF 2 NUMBERS USING FUNCTION (STUDYING PARAMETERS AND RETURN VALUE..)

/*
int sum(int a, int b);

int main () {
    int a, b;
    printf("ENTER 1ST NUMBER : ");
    scanf("%d", &a);
    printf("ENTER 2ND NUMBER : ");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("THE SUM IS : %d \n", s);
    return 0;
}

int sum (int a, int b) {
    return a + b;
} 

*/

// printing table

/*
void table(int n);
int main() {
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    table(n); // argument(actual parameter)

    return 0;

}

void table(int n) { // parameter (formal parameter)
    for (int i=1; i<=10; i++) {
        printf("%d \n", i*n);
    }
}
*/



// USE LIBRARY FUNCTION TO CALCULATE THE SQUARE OF A NUMBER GIVEN BY USER...
/*
int main() {

    int n = 4;
    printf("%f", pow(n,2));
    return 0;
}
*/


// FUNCTIONS TO CALCULATE AREA OF A SQUARE, A CIRCLE, AND A RECTANGLE...
/*
float areasq(float side);
float areacircle (float radius);
float arearect(float a, float b);


int main() {
    float side = 4;
    printf("THE AREA OF SQUARE IS : %f \n", areasq(side));

    return 0;
}

float areasq(float side) {
    return side * side;
}

float areacircle(float radius) {
    return 3.14 * radius * radius;
}

float arearect(float a, float b) {
    return a*b;
}

*/




//RECURSION...




// PRINT HELLO WORLD 10 TIMES..USING RECURSIVE FUNCTION
/*
void helloworld(int count);

int main() {
    helloworld(10); // calling 10 times
    return 0;

}

void helloworld(int count) {  // recursive function
    if(count == 0) {
        return;

    }
    printf("HELLO WORLD\n");
    helloworld(count - 1);
}
*/

// PRINT SUM OF 1ST N NATURAL NUMBERS...USING RECURSION

/*
int sum(int n);

int main() {
    printf("THE SUM IS : %d", sum(5));
    return 0;

}

int sum(int n) {
    if (n == 1) {
        return 1;
    }



   int sumNm1 = sum (n-1); //sum of 1 to n..
   int sumN = sumNm1 + n;
   return sumN;
}
*/

// PRINT FACTORIAL OF NUMBER USING RECURSION
/*
int fact(int n);

int main() {
    printf("THE FACTORIAL IS : %d\n", fact(5));
    return 0;

}

int fact(int n) {
    if(n == 1) {
        return 1;

    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}

*/


// PROGRAM TO CONVERT CELSIUS TO FAHRENHEIT...

/*
float temp(float celsius);

int main() {
    printf("THE TEMPERATURE IS : %f\n", temp(0));
    return 0;
}

float temp(float celsius) {
    float far = celsius * (9/5) + 32;
    return far;
}
*/

// Calculate the % of science maths and sanskrit...using recursion..
/*
int percent(int science, int maths, int sanskrit);

int main () {
    printf("THE TOTAL PERCENTAGE IS : %d\n", percent(98,95,99));
    return 0;

} 

int percent(int science, int maths, int sanskrit) {
    return ((science + maths + sanskrit) / 3);
}

*/

// print fibonacci sequence
/*
int fib(int n);

int main() {
    printf("%d", fib(10));
    return 0;
}

int fib (int n) {
    if( n == 0) {
        return 0;
    }

    if (n==1) {
        return 1;
    }

    int fibN = fib(n-1) + fib(n-2);
    return fibN;
}
*/






                                // POINTERS....

/*
int main() {
    int age = 22;
    int *ptr = &age;

    // printf("%p\n", &age);  // address
    // printf("%p\n", ptr);

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}

*/

/*

int main() {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}

*/

/*
// q. PRINT VALUE OF I FROM ITS POINTER TO POINTER..
int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
}

*/


//.... combination of function and pointer...

/*
void square (int n);
void sq (int *n);

int main() {
    int number = 4;

    square(number);
    printf("number = %d\n", number);

    sq(&number);
    printf("numberSQ = %d\n", number);

}
            ///call by value..


void square (int n) {
    n = n * n;  // 4 hi aayega...adress ke andar ki value access nhi karre ham..
    printf("square = %d\n", n);
}


            ///call by reference
void sq (int *n) {
    *n = (*n) * (*n);  // address ki andar ki value, i.e 4 * 4 = 16
    printf("sq = %d\n", *n);
}
*/


// q. Swap 2 numbers a and b..

/*
void swap(int a, int b);
void swapp(int *a, int *b);


int main () {

    int x = 3, y = 5;
    swap(x,y);                  // call by value
    printf("x = %d\n & y = %d\n", x, y);  // it wont print swapped value


    
    swapp(&x,&y);                  // cal by reference
    printf("&x = %d\n & &y = %d\n", x, y); // atlast it will print swapped value..

}

            // call by value...
void swap (int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d\n & b = %d\n", a, b);  // it will print swapped value

}
                // call by reference
void swapp(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("*a = %d\n & *b = %d\n", a, b);  // it will print address number 
}
*/


// Print SUM, AVG. PROD of any two numbers using pointers...

/*
void calc(int a, int b, int *sum, int *prod, int *avg);


int main() {
    int a = 3, b = 5;
    int sum, prod, avg;
    calc(a, b, &sum, &prod, &avg);

    printf("THE SUM IS : %d\n, PRODUCT IS : %d\n, AVERAGE IS : %d\n", sum, prod, avg);

}

void calc(int a, int b, int *sum, int *prod, int*avg) { // a aur b ka pass by value  // baaki ka reference..
    *sum= a +b;
    *prod = a*b;
    *avg = (a+b)/2;

}
*/







            // ARRAYS....

// Q. Write a program to print costs of 3 items with gst...
/*
int main() {
    float price[3];
    printf("ENTER PRICES FOR 3 ITEMS : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("TOTAL PRICE 1 = %3.2f\n", price[0] + (0.18*price[0]));
    printf("TOTAL PRICE 2 = %3.2f\n", price[1] + (0.18*price[1]));
    printf("TOTAL PRICE 3 = %3.2f\n", price[2] + (0.18*price[2]));

    return 0;
}
*/

// Pointer Arithmetics

int main() {
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %udifference = %u\n", ptr , _ptr, ptr - _ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
}