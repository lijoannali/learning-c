#include <iostream>
#include <ctime>
using namespace std; 
int main() { 
    int reps = 100000; 
    long double start_a, end_a, start_b, end_b; 
    
    //Test time lapsed with cout
    start_a = clock(); 
    for (int i = 0; i < reps; i++) 
    {
        cout << "hello, world" << endl; 
    }
    end_a = clock(); 
    //Test time lapsed with printf
    start_b = clock(); 
    for (int i = 0; i < reps; i++) 
    {
        cout << "hello, world" << endl; 
    }
    end_b = clock(); 

    //Print results
    cout << "The time spent printing with printf was "; 
    cout << (end_b - start_b) / CLOCKS_PER_SEC << "\n"; 
    cout << "The time spent printing with cout was "; 
    cout << (end_a - start_a) / CLOCKS_PER_SEC << "\n"; 
    return 0; 
} 