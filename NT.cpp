#include <iostream>


int gcdEuclidianAlgorithm(int a, int b) {
	// I'm gonna supose that a > b here.
	if (b==0) return a;
	return gcdEuclidianAlgorithm(b, a%b)
}

int modularPow(int a, unsigned int exp, int mod) {
	if (a == 0) return 0;
	else if (mod<2 || exp == 0) return 1;
	
	a = a%mod;
	
	c = modularPow(a,exp/2,mod)
	z = c*c;
	
	if (exp%2 == 0) return z%mod;
	else return a*z%mod;
}

int intSqrt(int n) {
	if (n==1) return 1;
	
	int c = n;
	
	while (c*c>n) {
		c = (c+n/c)/2;
	}
	
	return c;
}

bool ingenuousPrimeVerifier(int n) {
	// Works, but it's slow.
	if (n==1) return false;
	
	int squareRoot = intSqrt(n);
	
	while(squareRoot) {
		if (n%squareRoot == 0 && squareRoot != 1) return true;
		else squareRoot--;
	}
	
	return false;
} 

bool wilsonPrimeVerifier(int n) {
	
	
	
}

bool randomPrimeVerifier(int n) {
	
	
	
}