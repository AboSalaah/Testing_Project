#pragma once
#include <vector>
using namespace std;

class Math_Utils
{
public:
	Math_Utils();
	long long gcd(long long a, long long b);
	long long lcm(long long a, long long b);
	long long powerr(long long base, long long exp);
	bool isPrime(int n);
	double circleArea(double r);
	int nCr(int n, int r);
	int nPr(int n, int r);
	vector<int> getDivisors(int n);
	~Math_Utils();
};