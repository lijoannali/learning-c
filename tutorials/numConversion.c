#include <stdio.h>

int main()
{ 
    //This will output 4.00 since original numbers are ints
    float num = 9/2; 
    float num2 = (float) 9/2; //setting either only 2 or 9 to int still gives 4.50
    printf("%.2f\n", num); 
    printf("Now cast to float %.2f", num2); 
    return 0; 
}

/* NOTES
    char can be converted to ASCII value if you do (some number thing) x = 'a' + 1
*/