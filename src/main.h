#ifndef PROJECT_EULER_MAIN_H
#define PROJECT_EULER_MAIN_H

#include <vector>
#include <map>

#include "bignumber.h"

class IAnswer {
public:
    virtual std::string getAnswer() = 0;
};

class Problem001 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem002 : public IAnswer {
public:
    bool isOdd(int i);
    std::vector<int> getFibNumbers(int max);
    std::string getAnswer();
};

class Problem003 : public IAnswer {
public:
    long getGreatestPrimeFactor(long long num);
    std::string getAnswer();
};

class Problem004 : public IAnswer {
public:
    bool isPalindrome(int num);
    int getLargestPalindrome();
    std::string getAnswer();
};

class Problem005 : public IAnswer {
public:
    int getSmallestNumberDividedByRange(int begin, int end);
    std::string getAnswer();
};

class Problem006 : public IAnswer {
public:
    int solveProblem(int numNaturalNumbers);
    std::string getAnswer();
};

class Problem007 : public IAnswer {
public:
    int getNthPrimeNumber(int n);
    std::string getAnswer();
};

class Problem008 : public IAnswer {
public:
    long getGreatestProduct(int howMany);
    std::string getAnswer();
};

class Problem009 : public IAnswer {
public:
    double getProductOfPythagoreanTriplet(int sumOfABC);
    std::string getAnswer();
};

class Problem010 : public IAnswer {
public:
    long getSumOfPrimesBelowNum(int num);
    std::string getAnswer();
};

class Problem011 : public IAnswer {
public:
    long getGreatestProductOfXAdjacentNumbers(int x);
    std::string getAnswer();
};

class Problem012 : public IAnswer {
public:
    int getNumberOfDivisors(int x);
    int getFirstTriangleNumberWithGreaterThanNDivisors(int n);
    std::string getAnswer();
};

class Problem013 : public IAnswer {
public:
    std::string numberToString(int number);
    std::string getFirstNDigitsFromSumOfNumbers(int n, std::string nums);
    std::string getAnswer();
};

class Problem014 : public IAnswer {
public:
    long getNextNumInSequence(long curNum);
    int getStartingNumberUnder(int max);
    std::string getAnswer();
};

class Problem015 : public IAnswer {
public:
    long calculateNumRoutes(int gridSize);
    std::string getAnswer();
};

class Problem016 : public IAnswer {
public:
    long sumOfDigits(BigNumber number, int power);
    std::string getAnswer();
};

class Problem017 : public IAnswer {
public:
    long getNumLetters(int startNum, int endNum);
    std::string getAnswer();
};

class Problem018 : public IAnswer {
public:
    int getMaxSum();
    std::string getAnswer();
};

class Problem019 : public IAnswer {
public:
    int getDayOfWeek(int year, int month, int day);
    int getDaysInMonth(int month, int year);
    int getNumSundaysBetweenDates();
    std::string getAnswer();
};

class Problem020 : public IAnswer {
public:
    BigNumber factorial(int n);
    std::string getAnswer();
};

class Problem021 : public IAnswer {
public:
    long sumOfProperDivisors(int n);
    bool isAmicable(int a);
    std::string getAnswer();
};

class Problem022 : public IAnswer {
public:
    inline int getAlphabetPos(char c) { return (c - 'a' + 1);}
    std::string getAnswer();
};

class Problem023 : public IAnswer {
public:
    long sumOfProperDivisors(int n);
    bool isAbundant(long n);
    std::string getAnswer();
};

class Problem024 : public IAnswer {
public:
    std::vector<std::string> getPermutations(std::vector<int> numbers, int limit = 0);
    std::string getAnswer();
};

class Problem025 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem026 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem027 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem028 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem029 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem030 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem031 : public IAnswer {
public:
    unsigned int denomFunc(int n, std::vector<int> &denoms);
    std::string getAnswer();
};

class Problem032 : public IAnswer {
public:
    bool isPandigital(std::string n);
    std::string getAnswer();
};

class Problem033 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem034 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem035 : public IAnswer {
public:
    bool isCircularPrime(int n);
    std::string getAnswer();
};

class Problem036 : public IAnswer {
public:
    bool isPalindrome(std::string n);
    std::string getAnswer();
};

class Problem037 : public IAnswer {
public:
    bool isTruncatable(int n);
    std::string getAnswer();
};

class Problem038 : public IAnswer {
public:
    bool isPandigital(std::string n);
    std::string getAnswer();
};

class Problem039 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem040 : public IAnswer {
public:
    int getDigitInChampernowneConstant(int n);
    std::string getAnswer();
};

class Problem041 : public IAnswer {
public:
    bool isPandigital(long n);
    std::string getAnswer();
};

class Problem042 : public IAnswer {
public:
    inline int getAlphabetPos(char c) { return (c - 'a' + 1);}
    std::string getAnswer();
};

class Problem043 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem044 : public IAnswer {
public:
    bool isPentagonal(int x);
    int pentagonalNumber(int n);
    std::string getAnswer();
};

class Problem045 : public IAnswer {
public:
    bool isPentagonal(int x);
    bool isTriangle(int x);
    std::string getAnswer();
};

class Problem046 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem047 : public IAnswer {
public:
    int getDistinctPrimeFactors(int n, std::vector<long> primes);
    std::string getAnswer();
};

class Problem048 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem049 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem050 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem051 : public IAnswer {
public:
    struct NumberInfo {
    public:
        unsigned long Number;
        std::map<unsigned int, std::vector<unsigned int>> DigitPositions;
        NumberInfo(unsigned long number, std::map<unsigned int, std::vector<unsigned int>> digitPositions) {
            this->Number = number;
            this->DigitPositions = digitPositions;
        }
    };
    std::vector<long> calculate(std::vector<NumberInfo>& numbers, int familySize);
    std::string getAnswer();
};

class Problem052 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem053 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem054 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem055 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem056 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem057 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem058 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem059 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem060 : public IAnswer {
public:
    std::string getAnswer();
};

class Problem061 : public IAnswer {
public:
    std::string getAnswer();
private:
    bool isTriangle(unsigned int x);
    bool isNgonal(unsigned int n, unsigned int &x) const;
    bool isCyclic(int x, int y) const;
};

#endif