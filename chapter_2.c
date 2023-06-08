// every type in C is either an object type or a function type

// ## TYPE QUALIFIERS
// const, restrict and volatile

// ## DERIVED TYPES

// a struct contains sequentially allocated memory objects.

// unions are similar to structures, except that the memory used by the objects overlap

// ## FUNCTION TYPES

//int f(void);
//int *fip();
//void g(int a, int b);
//void h(int, int)

// function types are derived types / the return of a function cannot be
// an array type.

// never declare functions with an empty parameter list in c

// ## OBJECT TYPES

// char / signed char / unsigned char / wchar_t

//enum day {sun, mon, tue, wed, thu, fri, sat};
//enum day {sun, mon, tue, wed, thu, fri, sat};

//#include <stdbool.h>
//
//int main(void) {
//    _Bool flag1 = 0;
//    bool flag2 = false;  // preferred
//    return 0;
//}

// ## SCOPE x STORAGE DURATION

// scope and lifetime are different concepts. scope applies to identifiers,
// whereas lifetime applies to objects.

//#include <stdio.h>
//
//void increment(void) {
//    static unsigned int counter = 0;
//    counter++;
//    printf("%d ", counter);
//}
//
//int main(void) {
//    for (int i = 0; i < 5; i++) {
//        increment();
//    }
//    return 0;
//}

// > 1 2 3 4 5

// ## DECLARING VARIABLES

// ATTEMPT 2

//#include <stdio.h>
//
//void swap(int *a, int *b) {
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//int main(void) {
//    int a = 21;
//    int b = 17;
//
//    swap(&a, &b);
//    printf("main a = %d, b = %d\n", a, b);
//
//    return 0;
//}

// ATTEMPT 1 - FAIL

// c is a call-by-value lang, which means that when you provides
// an arg to a function, the value of that argument is copied into
// distinct variable for use within the function.

//
//void swap(int a, int b) {
//    int t = a;
//    a = b;
//    b = t;
//    printf("swap a = %d, b = %d\n", a, b);
//}
//
//int main(void) {
//    int a = 21;
//    int b = 17;
//
//    swap(a, b);
//    printf("main a = %d, b = %d\n", a, b);
//
//    return 0;
//}

