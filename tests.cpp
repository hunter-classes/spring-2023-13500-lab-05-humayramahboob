#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Is Divisible By Cases") {
  CHECK(isDivisibleBy(100,25) == 1); //true
  CHECK(isDivisibleBy(35,17) == 0); // false
}

TEST_CASE ("Is Prime Cases") {
  CHECK (isPrime (2) == 1); //true
  CHECK (isPrime (6) == 0); //false
}

TEST_CASE("Is Next Prime Cases"){
  CHECK(isNextPrime(2) == 3); //3 is next prime after 3
  CHECK(isNextPrime(6) == 7); //7 is next prime after 6
}

TEST_CASE("Count Primes Cases"){
  CHECK(countPrimes(1,10)==4); // there are 4 prime numbers
}

TEST_CASE("Twin Primes Cases"){
  CHECK(isTwinPrime(5)==1); //true
  CHECK(isTwinPrime(2)==0); //false
}

TEST_CASE("Next Twin Prime Cases"){
  CHECK(nextTwinPrime(2)==3); //next twin prime is 3
  CHECK(nextTwinPrime(10)==11); //next twim prime is 11
}

TEST_CASE("Largest Twin Prime Cases"){
  CHECK(largestTwinPrime(1,10)==7); // 7 is the largest twin prime
}