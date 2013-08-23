#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct result_t
{
    int result;
    int count;
};

void calc(int x, struct result_t *y, struct result_t *z)
{
    if (x < 0)
    {
        y->result = sqrt(x);
        y->count++;
        z->result = pow(2, x);
        z->count++;
    } else {
        if (x == 0)
        {
            y->result = sqrt(x * 2);
            y->count++;
            z->result = pow(3, x);
            z->count++;
        } else {
            y->result = sqrt(x * 3);
            y->count++;
            z->result = pow(4, x);
            z->count++;
        }
    }
}

int main(int argc, char *argv[])
{
    int x, ret;
    struct result_t y = {0, 0}, z = {0, 0};

    x = atoi(argv[1]);

    calc(x, &y, &z);
    
    ret = printf("%d\n", y.result);
    printf("%d\n", z.result);

    return ret;
}
