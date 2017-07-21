/* Short test program to test sched_setaffinity
* (which sets the affinity of processes to processors).
* Compile: gcc sched_setaffinity_test.c
*              -o sched_setaffinity_test -lm
* Usage: ./sched_setaffinity_test
*
* Open a "top"-window at the same time and see all the work
* being done on CPU 0 first and after a short wait on CPU 1.
* Repeat with different numbers to make sure, it is not a
* coincidence.
*/

#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
#include <sched.h>
 
double waste_time(long n)
{
    double res = 0;
    long i = 0;
    while(i <n * 200000) {
        i++;
        res += sqrt (i);
    }
    return res;
}
 
int main(int argc, char **argv)
{
    unsigned long mask = 1; /* processor 0 */
 
    /* bind process to processor 0 */
    if (sched_setaffinity(0, sizeof(mask), &mask) <0) {
        perror("sched_setaffinity");
    }
 
    /* waste some time so the work is visible with "top" */
    printf ("result: %f\n", waste_time (2000));
 
    mask = 2; /* process switches to processor 1 now */
    if (sched_setaffinity(0, sizeof(mask), &mask) <0) {
        perror("sched_setaffinity");
    }
 
    /* waste some more time to see the processor switch */
    printf ("result: %f\n", waste_time (2000));
}
