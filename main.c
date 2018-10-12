#include <stdio.h>
#include <stdbool.h>

int main()
{

    int a=4, b=7;
    printf(" postinkrementacja :%i a=%i\n", a++ + b, a);
    printf(" preinkrementacja :%i a=%i\n", ++a + b,a);

    printf(" predekrementacja : %i a=%i\n", --a +b, a);
    printf(" postdekrementacja : %i a=%i\n", a-- + b, a);

    int c =5, d=7;
    printf("%i\n", c==d);
    printf("%i\n", c<=d);
    printf("%i\n", c>=d);

    double f = 0.00000001;
    double g = 0.000000000001;
    double eps = 0.001;
    printf("%i\n", a==b);
    printf("%lf\n", ((f-g)*(f-g))<eps);

    int rok;
    bool przestepny;
    printf("Podaj rok: ");
    scanf("%i", &rok);

    przestepny = !(rok % 400) || rok % 100 && !(rok % 4);
    printf("%i\n", przestepny);



    int h = 7 , i = 3, max, min;
    max = h > i ? h : i;
    printf("maksimum: %i\n", max);
    min = h < i ? h : i;
    printf ("minimum : %i", min);





    return 0;
}