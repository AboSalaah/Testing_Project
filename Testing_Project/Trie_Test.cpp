#include "CppUTest\TestHarness.h"
#include "Trie.h"
TEST_GROUP(TrieTestGroup) {
	trie*t;
	void setup() {
		t = new trie();
	}
	void teardown() {
		delete t;
	}
};

TEST(TrieTestGroup, FirstTest) {
	CHECK(t->Search("ahmed"));
}


TEST(TrieTestGroup, SecondTest) {
	t->Insert("ahmed");
	CHECK_EQUAL(t->Search("ahmed"), true);
}

TEST(TrieTestGroup, ThirdTest) {
	t->Insert("ahmed");
	t->Insert("hamada");
	LONGS_EQUAL(2, t->getNumberOfWords());
}
TEST(TrieTestGroup, FourthTest) {
	t->Insert("ahmed");
	t->Insert("aho");
	t->Insert("ahh");
	LONGS_EQUAL(7, t->getNumberOfNodes());
}
TEST(TrieTestGroup, FifthTest) {
	CHECK(t->DeleteOccurance("ahmed"));
}

