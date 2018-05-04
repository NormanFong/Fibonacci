#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int n)
{
    if(n < 0 ){
       return n;	
	}
    if (n <= 2) {
            return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(int argc, char** argv) {
	 clock_t start = clock();
	long N=45;
	for (int i = 1; i <= N; i++) {
		long fibonacci_ = fibonacci(i);
		cout<<i<< " => "<<fibonacci_<<"\n"; 
	
	}
	printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
	return EXIT_SUCCESS;
}
