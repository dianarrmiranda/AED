#include <math.h>
#include <stdio.h>

void do_it(int N)



{
    int i;
    FILE * file = fopen ("Table2.txt", "w");

    fprintf(file, " n sin(n) cos(n)\n");
    fprintf(file, "-- --- -----------------\n");
    
    
    for(i = 1;i <= N;i++){
        fprintf(file, "%2d %17.15f %17.15f\n",i,sin((double)i * (M_PI/180)), cos((double)i * (M_PI/180)));
    }

    fclose(file);

}

int main(void)
{
    do_it(90);
    return 0;
}
