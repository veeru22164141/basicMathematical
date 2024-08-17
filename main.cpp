#include "mathcommonProb.h"
#include<bits/stdc++.h>
int main()
{
    MathCommonProblem mcp;
    cout<<"Number of digits in 1234: "<<mcp.countDigits(1234)<<endl;

    cout<<"Is 12321 palindrome: "<<mcp.checkPalindrome(12321)<<endl;
    cout<<mcp.isPrime(7)<<endl;
    cout<<mcp.isPrime1(7)<<endl;
    cout<<"gcd of 10 and 15: "<<mcp.gcd(10,15)<<endl;
    cout<<"gcd of 10 and 15: "<<mcp.gcd1(10,15)<<endl;
    cout<<"gcd of 10 and 15: "<<mcp.gcd2(10,15)<<endl;
    cout<<"lcm of 10 and 15: "<<mcp.lcm(10,15)<<endl;
    cout<<"prime factors of 3150:";
    mcp.primeFactors(3150);
    cout<<endl;
    cout<<"prime factors of 3150:";
    mcp.primeFactors1(3150);
    cout<<endl;
    cout<<"divisor of 3150:";
    mcp.printDivisors(3150);
    cout<<endl;
    cout<<"divisior of 3150:";
    mcp.printDivisors1(3150);
    cout<<endl;
    mcp.sieveOfEratosthenes(65);
    cout<<endl;
    cout<<"2^5: "<<mcp.power(2,5)<<endl;
    cout<<endl;
    cout<<"2^5: "<<mcp.power1(2,5)<<endl;
    cout<<endl;
    cout<<"|10| :"<<mcp.obsulate(10)<<endl;
    cout<<endl;
    cout<<"|-15| : "<<mcp.obsulate(-15)<<endl;
    cout<<endl;
    cout<<"F: "<<mcp.celciusToFahrenheit(32)<<endl;
    cout<<endl;
    vector<int> v=mcp.quadraticRoots(2,8,8);
    cout<<"Roots: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    cout<<"5!: "<<mcp.factorial(5)<<endl;
    cout<<"5!: "<<mcp.factorial1(5)<<endl;
    cout<<"number of digits in 42!: "<<mcp.digitsInFactorial(42)<<endl;
    cout<<"total number with exactly 3 divisor before 10: "<<mcp.numbersWithExactlyThreeDivisors(10)<<endl;
    cout<<"nth term of geometric series: "<<mcp.nthTermOfGeometricSeries(2,2,3)<<endl;
    cout<<"nth term of geometric series: "<<mcp.nthTermOfGeometricSeries1(2,2,3)<<endl;

    cout<<"sum modulo: "<<mcp.sumModulo(9223372036854775807,9223372036854775807)<<endl;
    cout<<"multiply modulo: "<<mcp.multiplyModulo(9223372036854775807,9223372036854775807)<<endl;
    cout<<"mod inverse of 7 and 11: "<<mcp.modInverse(7,11)<<endl;

    return 0;
}