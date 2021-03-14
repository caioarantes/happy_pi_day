#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    
    int iterations;
    double sum = 0;
    double pi;
    
    cout << "Leibniz formula for pi C++.\n\nEnter number of iterations: ";
    cin >> iterations;
	
    double j = -1;
    for (double i = 1; i < 2*iterations; i= i+2) {
    j = -j;
	sum = sum + j*(1/i);
	}
	
	pi = sum*4;
	
	cout << "Pi: ";
	cout<<fixed<<setprecision(8)<<pi;
	cout << " with " << iterations << " iterations.\n";
	
    return 0;
}
