#include <Stdio.h>

int Main()
{
    unsigned long double limit = 10;
    for(unsigned long double num = 2; num < limit; num++) {
        for(unsigned long double i = 1; i < num; i++) {
            if(num % i == 0) {
                continue;
            }

        }
        limit = limit * 10;
    }
}

bool prime(unsigned long double x, unsigned long double i)
{
    if(x % i == 0) {

    }
}
