// Author: Humayra Mahboob
// Course: CS-135
// Instructor: Michael Zamansky
// Assignment: Lab 5

// Testing Tasks A-G
#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
	cout << " 100 is divisible by 25:" << isDivisibleBy(100,25) << endl;
	cout << " 35 is divisible by 17:" << isDivisibleBy(35,17) << endl;
	cout << " 2 is a prime number:" << isPrime(2) << endl;
	cout << "6 is a prime number:" << isPrime(6) << endl;
	cout << "The next prime number after 2 is " << isNextPrime(2) << endl;
	cout << "The next prime number after 6 is " << isNextPrime(6) << endl;
	cout << "The number of prime numbers between 1 and 10 are " << countPrimes(1,10) << endl;
	cout << "5 is a twin prime:" << isTwinPrime(5) << endl;
	cout << " 2 is a twin prime: " << isTwinPrime(2) << endl;
	cout << " The next twin prime after 2 is " << nextTwinPrime(2) << endl;
	cout << " The next twin prime after 10 is " << nextTwinPrime(10) << endl;
	cout << " The largest twin prime between 1 and 10 is " << largestTwinPrime(1,10) << endl;
  return 0;
}
