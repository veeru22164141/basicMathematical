#include<bits/stdc++.h>
#include <vector>
using namespace std;
class MathCommonProblem
{
    public:
    int countDigits(int n);
    bool checkPalindrome(int n);
    int gcd(int a, int b);
    int gcd1(int a, int b);
    int gcd2(int a, int b);
    int lcm(int a, int b);
    void printDivisors(int n);
    void printDivisors1(int n);
    void sieveOfEratosthenes(int n);
    vector<int> quadraticRoots(int a, int b, int c);
    long long factorial(int n);
    long long factorial1(int n);
    int digitsInFactorial(int n);
    int power(int x, int n);
    int power1(int base, int exp);
    int obsulate(int n);
    double celciusToFahrenheit(double c);
    void primeFactors(int n);
    void primeFactors1(int n);
    bool isPrime(int n);
    bool isPrime1(int n);
    int numbersWithExactlyThreeDivisors(int N);
    double nthTermOfGeometricSeries(int a, int r, int n);
    double nthTermOfGeometricSeries1(int a, int r, int n);
    int sumModulo(long long a, long long b);
    int multiplyModulo(long long a, long long b);

    int extendedGcd(int a, int b, int &x, int &y);

    int modInverse(int a, int m);
};