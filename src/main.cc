extern "C" {
    #include "lib/RuleofSarrus.h"
    #include <stdio.h>
    #include <stdlib.h>
}

int main(void)
{
    float mat[][3] = { {1.0, 4.2, 5.0},
                       {1.0, 3.0, 4.0},
                       {5.0, 3.0, 2.0}
                     };
    printf("det(M) = %g\n", RuleofSarrus(mat));
    return 0;
}