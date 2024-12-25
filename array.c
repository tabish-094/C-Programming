
#include<stdio.h>


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
/*


int main() {
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %udifference = %u\n", ptr , _ptr, ptr - _ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
}
*/



// Transverse an Array...
// aadhar
/*

int main()
{
    int aadhar[5];

    // input
    int *ptr = &aadhar[0];
    for (int i=0; i<5; i++) {
        printf("%d index = ", i);
        scanf("%d", (ptr+i));

    }

    // output
    for (int i=0; i<5; i++) {
        printf("%d inde = %d\n",i ,*(ptr+i));
    }
}
*/

// q. Counting the odd numbers using arrays and functions..

/*
int countodd(int arr[], int n);

int main() {
    int arr[] = {1,2,3,4,5,6};
    printf("%d", countodd(arr, 6));
    return 0;
}

int countodd(int arr[], int n) {
    int count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] % 2 != 0) { // means it is odd
            count++;
        }
    }
    return count;
}

*/

// Q. Program to store the 1st n fibonacci sequence...

/*
int main() {
    int n;
    printf("ENTER N VALUE: ");
    scanf("%d", &n);
    
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
}

*/



// Q. Program to store tables of 2 and 3..

void storetables(int arr[][10], int n, int m, int number);

int main() {
    int tables[2][10];
    storetables(tables, 0, 10, 2);
    storetables(tables, 1, 10, 3);

    for(int i=0; i<10; i++) {
        printf("%d\t", tables[0][i]);
    }

    for(int i=0; i<10; i++) {
        printf("%d\t", tables[1][i]);
    }
    return 0;
}   

void storetables(int arr[][10], int n, int m, int number) {
    for(int i=0; i<m; i++)  {
        arr[n][i] =  number * (i+1);

    }
}