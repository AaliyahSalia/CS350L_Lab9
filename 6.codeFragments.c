//a) 

#include <stdio.h>

int main() {
    int i = -23;
    int *p = &i;
    printf("*p = %i\n", *p);
    return 0;
}

//Output: *p = -23
// p is pointing to i, which has the value -23.

//------------------------------------------------------------

//b)

int main() {
    int i;
    int *p = &i;
    printf("*p = %i\n", *p);
    return 0;
}

//output: *p = 72122192 (points to memory location of i)

//------------------------------------------------------------

//c)

int main() {
    int i = 48;
    int *p;
    printf("*p = %i\n", *p);
    return 0;
}

//Output: *p = -5182328  (garbage output)


//------------------------------------------------------------
//d

int main() {
    int i = 10;
    int *p = &i;
    int j;
    j = ++*p;

    printf("j = %i\n", j);
    printf("i = %i\n", i);
    return 0;
}

//Output:
// j = 11, i = 11 
// (The value of i has also been incremented along with the value pointed to by p, since p points to i.)

//------------------------------------------------------------
//e)

int main() {
    int i = 10; int j = 20;
    int *p = &i;
    int *q = &j;
    *p = *q;
    printf("i = %i, j = %i\n", i, j);
    printf("*p = %i, *q = %i\n", *p, *q);

//*p = *q assigns the value pointed to by q to the value pointed to by p. Therefore, i and j will have the value '20'.

    i = 10; j = 20;
    p = q;
    printf("9 = %i, j = %i\n", i, j);
    printf("*p = %i, *q = %i\n", *p, *q);
    return 0;

}

//i = 10; j = 20; p = q; assigns the values 10 and 20 to i and j respectively and then assigns the value of q (which is the address of j) to p. This means that p now points to j instead of i.

//Output: 
// i = 20, j = 20
// *p = 20, *q = 20


//------------------------------------------------------------
//f)

int main() {
    int i = 10; int j = 0;
    int *p = &i;
    int *q = &j;
    p = q;
    printf("i = %i, j = %i\n", i, j);
    printf("*p = %i, *q = %i\n", *p, *q);

    *p = *q;
    printf("i = %i, j = %i\n", i, j);
    printf("*p = %i, *q = %i\n", *p, *q);
    return 0;
}

//Output: 
// i = 10, j = 0
// *p = 0, *q = 0
// i = 10, j = 0
// *p = 0, *q = 0

// since p and q point to j at the end of the program, changing the value of *p (or *q) also changes the value of j.


//------------------------------------------------------------
//g)

int main() {
    float ten = 10.0F;
    float hundred = 100.0F;
    float *fp0 = &ten, *fp1 = &hundred;

    fp1 = fp0;
    fp0 = &hundred;
    *fp1 = *fp0;

    printf("ten/hundred = %f\n", ten/hundred);
    return 0;
}

//Output: ten/hundred = 1.000000

// The value pointed to by fp1 (which is ten) is assigned the value pointed to by fp0 (which is hundred). So, ten now holds the value of hundred.
// Lastly, the value of ten/hundred is printed, which should be 1.0, since ten now holds the value of hundred.

//------------------------------------------------------------
//h)


int main() {
    char a = 'b', b = 'c', c, d = 'e';
    char *l = &c, *m = &b, *n, *o = &a;

    n = &b; *m = ++*o; m = n; *l = 'a';

    printf("a = %c, b = %c, c = %c, d = %c\n", a, b, c, d);
    printf("*l = %c, *m = %c, *n = %c, *o = %c\n", *l, *m, *n, *o);
    return 0;
}

//Output: 
// a = c, b = c, c = a, d = e
// *l = a, *m = c, *n = c, *o = c

// The value of b is updated to 'd' because of the statement *m = ++*o;, which increments the value pointed to by o and assigns it to the value pointed to by m. Since *o points to 'b' initially, it is incremented to 'c', and this value is assigned to *m, which points to 'c'. The value of c is updated to 'c' because of the statement *l = 'a';, which assigns the value 'a' to the value pointed to by l, which points to c.

//------------------------------------------------------------
//i)

int main() {
    int i = 2; int j = 3; int k;
    int *p = &i, *q = &j;
    int **r;

    r = &p;
    printf("**r = %i\n", **r);
    k = *p**q;
    printf("k = %i\n", k);
    *p = *q;
    printf("**r = %i\n", **r);
    k = **r**q;
    printf("k = %i\n", k);
    k = *p/ *q;
    printf("k = %i\n", k);
    return 0;
}

//Output: 
// **r = 2
// k = 6
// **r = 3
// k = 9
// k = 1

