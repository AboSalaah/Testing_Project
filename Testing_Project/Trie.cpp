#include "Trie.h"
#include<cstring>
trie::trie() {
	memset(trie_nodes, -1, sizeof trie_nodes);
	memset(isEnd, 0, sizeof isEnd);
	NumberOfDistinctWords = 0;
	NodeCnt = 0;
}
void trie::Insert(const char* s) {
	int id = 0;
	for (int i = 0; s[i]; ++i) {
		int& nxt = trie_nodes[id][s[i]-'a'];
		++freq[id];
		if (nxt == -1) {
			nxt = ++NodeCnt;
		}
		id = nxt;
	}
	++freq[id];
	NumberOfDistinctWords += (!isEnd[id]);
	++isEnd[id];
}

bool trie::Search(const char*s) {
	int id = 0;
	for (int i = 0; s[i]; ++i)
	{
		if (trie_nodes[id][(s[i] - 'a')] == -1) {
			return false;
		}
		else {
			id = trie_nodes[id][s[i] - 'a'];
		}
	}	return isEnd[id];
}

bool trie::DeleteOccurance(const char * s)
{
	int id = 0;
	for (int i = 0; s[i]; ++i) {
		int &nxt = trie_nodes[id][s[i]-'a'];
		if (nxt == -1)return false;
		--freq[id];
		if (freq[id] == 1) {
			trie_nodes[id][s[i]-'a'] = -1;
		}
		id = nxt;
	}
	--freq[id];
	--isEnd[id];
	NumberOfDistinctWords -= (isEnd[id] == 0);
	return true;
}

int trie::getNumberOfWords()
{
	return NumberOfDistinctWords;
}

int trie::getNumberOfNodes()
{
	return NodeCnt;
}
