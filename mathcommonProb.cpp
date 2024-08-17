#include"mathcommonProb.h"

int MathCommonProblem::countDigits(int n)
{
    //Count digits of a number
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

bool MathCommonProblem::checkPalindrome(int n)
{
    //Check palindrome number
    int temp=n;
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return temp==rev;
}
bool MathCommonProblem::isPrime(int n)
{
    //Basic method to check prime number
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool MathCommonProblem::isPrime1(int n)
{
    //Optimized method to check prime number
    if(n<=1)
    {
        return false;
    }
    if(n<=3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}

int MathCommonProblem::gcd(int a, int b)
{
    //Basic method to find gcd
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}

int MathCommonProblem::gcd1(int a, int b)
{
    //Optimized method to find gcd
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
 int MathCommonProblem::gcd2(int a, int b)
 {
     //Euclidean algorithm to find gcd
     if(b==0)
     {
         return a;
     }
     return gcd2(b,a%b);
 }

 int MathCommonProblem::lcm(int a, int b)
 {
     //Formula to find lcm
     return (a*b)/gcd2(a,b);
 }

 void MathCommonProblem::primeFactors(int n)
 {
     //Prime factorization of a number
     while(n%2==0)
     {
         cout<<2<<" ";
         n=n/2;
     }
     for(int i=3;i*i<=n;i=i+2)
     {
         while(n%i==0)
         {
             cout<<i<<" ";
             n=n/i;
         }
     }
     if(n>2)
     {
         cout<<n<<" ";
     }
 }

 void MathCommonProblem::primeFactors1(int n)
 {
     //Prime factorization of a number
     while(n%2==0)
     {
         cout<<2<<" ";
         n=n/2;
     }
     while(n%3==0)
     {
         cout<<3<<" ";
         n=n/3;
     }
     for(int i=5;i*i<=n;i=i+6)
     {
         while(n%i==0)
         {
             cout<<i<<" ";
             n=n/i;
         }
         while(n%(i+2)==0)
         {
             cout<<i+2<<" ";
             n=n/(i+2);
         }
     }
     if(n>2)
     {
         cout<<n<<" ";
     }
 }
 void MathCommonProblem::printDivisors(int n)
 {
     //Print all divisors of a number
     for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             cout<<i<<" ";
         }
     }
 }

 void MathCommonProblem::printDivisors1(int n)
 {
     //Print all divisors of a number
     int i;
     for(i=1;i*i<n;i++)
     {
         if(n%i==0)
         {
             cout<<i<<" ";
         }
     }
     for(;i>=1;i--)
     {
         if(n%i==0)
         {
             cout<<n/i<<" ";
         }
     }
 }

 void MathCommonProblem::sieveOfEratosthenes(int n)
 {
     //Sieve of Eratosthenes
     bool prime[n+1];
     memset(prime,true,sizeof(prime));
     for(int p=2;p*p<=n;p++)
     {
         if(prime[p]==true)
         {
             for(int i=p*p;i<=n;i=i+p)
             {
                 prime[i]=false;
             }
         }
     }
     for(int p=2;p<=n;p++)
     {
         if(prime[p])
         {
             cout<<p<<" ";
         }
     }
 }

 int MathCommonProblem::power(int x, int n)
 {
     //Power function
     if(n==0)
     {
         return 1;
     }
     int temp=power(x,n/2);
     if(n%2==0)
     {
         return temp*temp;
     }
     else
     {
         return x*temp*temp;
     }
 }

 int MathCommonProblem::power1(int base, int exp)
 {
     //Power function
     int result=1;
     while(exp > 0)
     {
        if(exp%2==1)
        {
            result=result*base;
        }
        exp = exp/2;
        base = base*base;
        
     }
     return result;
 }

 int MathCommonProblem::obsulate(int n)
 {
     //Obsulate function
     return n<0?n*-1:n;
 }

    double MathCommonProblem::celciusToFahrenheit(double c)
    {
        //Celcius to Fahrenheit conversion
        return (c*9.0/5.0)+32;
    }

vector<int> MathCommonProblem::quadraticRoots(int a, int b, int c)
{
    //Quadratic roots
     std::vector<int> roots;
    int d = b * b - 4 * a * c;

    if (d < 0)
    {
        roots.push_back(-1);
    }
    else if (d == 0)
    {
        int root = std::floor(-b / (2.0 * a));
        roots.push_back(root);
        roots.push_back(root);
    }
    else
    {
        int root1 = std::floor((-b + std::sqrt(d)) / (2.0 * a));
        int root2 = std::floor((-b - std::sqrt(d)) / (2.0 * a));
        if (root1 > root2)
        {
            roots.push_back(root1);
            roots.push_back(root2);
        }
        else
        {
            roots.push_back(root2);
            roots.push_back(root1);
        }
    }

    return roots;
}

long long MathCommonProblem::factorial(int n)
{
    //Factorial function
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

long long MathCommonProblem::factorial1(int n)
{
    //Factorial function
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int MathCommonProblem::digitsInFactorial(int n)
{
    //Digits in factorial
      // code here
       if (n == 0 || n == 1) {
        return 1;
    }

    double digits = 0;
    for (int i = 2; i <= n; ++i) {
        digits += std::log10(i);
    }

    return static_cast<int>(digits) + 1;
}

int MathCommonProblem::numbersWithExactlyThreeDivisors(int N)
{
    //Numbers with exactly three divisors
  int count = 0;
    for (int i = 2; i * i <= N; ++i) {
        if (isPrime1(i) && i * i <= N) {
            ++count;
        }
    }
    return count;
}
double MathCommonProblem::nthTermOfGeometricSeries(int A, int B, int N)
{
    //Nth term of geometric series
     if (N == 1) {
        return A;
    }
    if (N == 2) {
        return B;
    }

    double r = static_cast<double>(B) / A;
    double term = A;
    for (int i = 1; i < N; ++i) {
        term *= r;
    }
    return term;
}
double MathCommonProblem::nthTermOfGeometricSeries1(int A, int B, int N)
{
    //Nth term of geometric series
   if (N == 1) {
        return A;
    }
    if (N == 2) {
        return B;
    }

    double r = static_cast<double>(B) / A;
    return static_cast<int>(A * pow(r, N - 1));
}
int MathCommonProblem::sumModulo(long long a, long long b)
{
    //Sum modulo
    //Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 109+7.
    const int MOD = 1000000007;
    return (a % MOD + b % MOD) % MOD;
}

int MathCommonProblem::multiplyModulo(long long a, long long b)
{
    //Multiply modulo
    //Given two numbers a and b, find the product of a and b. Since the product can be very large, find the product modulo 109+7.
    const int MOD = 1000000007;
    return (a % MOD * b % MOD) % MOD;
}

int extendedGCD(int a, int b, int &x, int &y)
{
    //Extended GCD
    //Given two integers a and b, find the greatest common divisor of a and b along with the values of x and y in the equation ax + by = gcd(a, b).
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return gcd;
}

int MathCommonProblem::modInverse(int a, int m)
{
    //Modulo inverse
    //Given two integers a and m, find the modulo inverse of a under modulo m.
     if (m == 1) {
        return -1; // Inverse does not exist when modulus is 1
    }
    int x, y;
    int gcd = extendedGCD(a, m, x, y);
    if (gcd != 1) {
        return -1; // Inverse doesn't exist
    } else {
        // m is added to handle negative x
        return (x % m + m) % m;
    }
}