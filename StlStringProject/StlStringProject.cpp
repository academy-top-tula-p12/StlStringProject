#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string str_replace(string source, string dist, string repl)
{
	while (1)
	{
		int index = source.find(dist);
		if (index == string::npos) break;
		source.replace(index, dist.length(), repl);
	}
	return source;
}

int main()
{
	string s1 = "Hello world";
	string s2 = "Good by world";


	//cout << typeid(s1.c_str()).name() << "\n";
	/*
	for (auto it = s1.rbegin(); it != s1.rend(); it++)
		cout << *it << " ";
	cout << "\n";
	for(auto c : s1)
		cout << c << " ";
	*/

	//insert
	/*cout << s1.insert(3, 2, '$') << "\n";
	cout << s1.insert(6, "****") << "\n";
	cout << s1.insert(11, s2) << "\n";*/

	// erase
	/*cout << s1 << "\n";
	cout << s1.erase(3, 5) << "\n";*/

	// compare
	/*s1 = "abc";
	s2 = "abcde";
	cout << s1.compare(0, 3, s2, 1, 3);*/

	/*s1 = "** Hello &&";
	cout << s1.starts_with(" ") << "\n";
	cout << s1.ends_with("&&") << "\n";
	cout << s1.contains("abc") << "\n";*/


	s1 = "wow hello world, hello people";
	//cout << s1.replace(6, 5, "man");
	//cout << s1.replace("people", "man");
	/*
	int i = s1.find("hello", 10);
	if (i == string::npos)
		cout << "not found\n";
	else
		cout << i << "\n";
	*/

	cout << str_replace("I say hello world and hello people", "hello", "good by");
	// I say good by world and good by people
}
