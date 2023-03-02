#include <iostream>
#include "funcs.h"
using namespace std;

// Task A. Write a program that if n is
// divisible by d, the function should return 
// true, otherwise return false.

bool isDivisibleBy(int n, int d) {
	if (n%d != 0) {
		return false;
	}
	return true;
}

// Task B. A function that returns true if n
// is prime, otherwise return false.

bool isPrime(int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	for (int i=2; i<= n-1; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

// Task C: Add a function that returns the 
// smallest prime greater than n.

int isNextPrime(int n) {
	int i = n+1;
	while (!isPrime(i)) {
		i++;
	}
	return i;
}

// Task D: Add a function that returns the 
// number of prime numbers in the interval
// [a,b].

int countPrimes(int a, int b) {
	int count = 0;
	for (int i= a; i<=b; i++) {
		if (isPrime(i)) {
			count = count + 1;
		}
	}
	return count; 
}

// Task E. Add a function that determines whether
// or not its argument is a twin prime. 

bool isTwinPrime(int n) {
	if (isPrime(n) && (isPrime(n-2) || isPrime(n+2))) {
		return true;
	}
	return false;
}

// Task F. Add a function that returns the smallest
// twin prime greater than n.

int nextTwinPrime(int n) {
	int i = n+1;
	while (!isTwinPrime(i)) {
		i++;
	}
	return i;
}

// Task G. Add a function that returns the 
// largest twin prime in the range [a,b]. If
// no twin primes, return -1.

int largestTwinPrime(int a, int b) {
	int num = -1;
	for (int i=a; i<=b; i++) {
		if (isTwinPrime(i)){
			num = i;
		}
	}
	return num; 
}