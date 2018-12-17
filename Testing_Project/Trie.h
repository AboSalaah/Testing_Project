#pragma once
#include<string>
using namespace std;
class trie {
private:
	const static int MaxNode = 1e5 * 26;
	const static int SizeAlpha = 26;
	int trie_nodes[MaxNode][SizeAlpha];
	int freq[MaxNode];
	int NodeCnt;
	int isEnd[MaxNode];
	int NumberOfDistinctWords;
public:
	trie();
	void Insert(const char* s);
	bool Search(const char*s);	bool DeleteOccurance(const char*s);	int getNumberOfDistinctWords();
	int getNumberOfNodes();
	string getLongestPrefix(const char* s);
};