#include "Math_Utils.h"
#include <algorithm>
using namespace std;



Math_Utils::Math_Utils()
{
}

long long Math_Utils::gcd(long long a, long long b)
{
	if (b == 0)return a;
	return gcd(b, a%b);
}

long long Math_Utils::lcm(long long a, long long b)
{
	return a * b / gcd(a, b);
}

long long Math_Utils::powerr(long long base, long long exp)
{
	const int mod = 1e9 + 7;
	base %= mod;
	long long result = 1;
	while (exp > 0) {
		if (exp & 1)
			result = (result * base) % mod;
		base = (base * base) % mod;
		exp >>= 1;
	}
	return result;
}

bool Math_Utils::isPrime(int n)
{
	if (n < 2)
		return 0;
	if (n % 2 == 0)
		return (n == 2);
	for (int i = 3; i * i <= n; i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}

double Math_Utils::circleArea(double r)
{
	return acos(-1)*r*r;
}

int Math_Utils::nCr(int n, int r)
{
	if (n < r)
		return 0;
	if (r == 0)
		return 1;
	return n * nCr(n - 1, r - 1) / r;
}

int Math_Utils::nPr(int n, int r)
{
	if (r == 0)return 1;
	return n * nPr(n - 1, r - 1);
}

vector<int> Math_Utils::getDivisors(int n)
{
	vector<int> divs;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			divs.push_back(i);
			if (i * i != n) {
				divs.push_back(n / i);
			}
		}
	}
	sort(divs.begin(), divs.end());
	return divs;
}


Math_Utils::~Math_Utils()
{
}
