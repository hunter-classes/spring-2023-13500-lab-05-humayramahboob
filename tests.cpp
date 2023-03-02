#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Is Divisible By Cases") {
  CHECK(isDivisibleBy(100,25) == 1); //test when IsDivisibleBy is true
  CHECK(isDivisibleBy(10,3) == 0); //test when IsDivisibleBy is false
}

TEST_CASE ("Is Prime Cases") {
  CHECK (isPrime (2) == 1); //test when the number IS prime
  CHECK (isPrime (9) == 0); //test when the number IS NOT prime
}

TEST_CASE("Is Next Prime Cases"){
  CHECK(isNextPrime(14) == 17); //test if the smallest prime num
                                    // after 14 is 17 == TRUE (true)
  CHECK(isNextPrime(17) == 19); //test if the smallest prime num
                                    // after 17 is 19 == TRUE (true)
}

TEST_CASE("Count Primes Cases"){
  CHECK(countPrimes(10,20)==4); //test if that there are 4 expected 
                                      //prime values (true)
  CHECK(countPrimes(20,30)==2); //test if that there are 2 expected 
                                      //prime values (true)
}

TEST_CASE("Twin Primes Cases"){
  CHECK(isTwinPrime(17)==1); //test if 17 (a prime num) has a twin prime (true)
  CHECK(isTwinPrime(4)==0); //test if 4 (not a prime num) is a twin prime (false)
  CHECK(isTwinPrime(79)==0); //test if 79 (a prime num) has a twin prime (false)
}

TEST_CASE("Next Twin Prime Cases"){
  CHECK(nextTwinPrime(7)==11); //check if 7's twin prime is 11
  CHECK(nextTwinPrime(11)==13); //check if 11's twin prime is 13
}

TEST_CASE("Largest Twin Prime Cases"){
  CHECK(largestTwinPrime(5,18)==17); //checks if largest twin prime btwn 5 and 18 == 17
  CHECK(largestTwinPrime(1,31)==31); //checks if largest twin prime btwn 1 and 31 == 31
  CHECK(largestTwinPrime(14,16)==-1); //checks if there is no largest twin prime btwn 14 and 16
}