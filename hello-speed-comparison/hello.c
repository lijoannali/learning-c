#include <stdio.h>
#include <time.h>
int main(void)
{ 
    int reps = 100000; 
    long double start, end; 
    start = clock(); 
    for (int i = 0; i < reps; i++) 
    {
      printf("hello, world\n");    
    }
    end = clock(); 
      printf("The time spent printing with printf was %f\n", (end - start) / CLOCKS_PER_SEC);    
    return 0; 
}
