#include <iostream>

using namespace std;

int gcd(int a, int b) //greatest common divisor
{
	//function use Euclidean algorithm
    int r;
    do
    {
        r = a%b;
        a = b;
        b = r;
    }
    while(r!=0);

    return a;
}

int lcm(int a, int b) //least common multiple
{
	return (a*b)/gcd(a,b);
}

//egzample of use

int main()
{
    cout<<gcd(24, 36)<<endl;
	cout<<lcm(24,36)<<endl;

    return 0;
}
