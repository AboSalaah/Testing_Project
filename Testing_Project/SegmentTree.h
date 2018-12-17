#pragma once
#include<vector>
using namespace std;
struct node {
	int max, sum, min, gcd,mul;
    node(int mx,int s,int mn,int g,int mu):max(mx),sum(s),min(mn),gcd(g),mul(mu){}
};
class SegmentTree {
private :
	static int leavesCnt;
	vector<node>tree;
public :
	SegmentTree(int n);
	void Update(int x, int y,node val, int l = 1, int r = leavesCnt, int idx = 1);
	int getMax(int x, int y, int l = 1, int r = leavesCnt, int idx = 1);
	int getMin(int x, int y, int l = 1, int r = leavesCnt, int idx = 1);
	int getSum(int x, int y, int l = 1, int r = leavesCnt, int idx = 1);
	int getGcd(int x, int y, int l = 1, int r = leavesCnt, int idx = 1);
	int getMul(int x, int y, int l = 1, int r = leavesCnt, int idx = 1);
};
