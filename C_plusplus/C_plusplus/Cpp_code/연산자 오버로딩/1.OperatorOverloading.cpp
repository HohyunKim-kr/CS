#include <iostrem>
using namespace std;

class MyClass
{
	int num;
public:
	MyClass(int x = 0) : num(x) { }
	void Show() { cout << num << endl; }

	MyClass operator+(const Myconst& ref)
	{
		MyClass pos(num + ref.num);
		return pos;
	}

	friend MyClass operator+(const Myclass& obj1, const MyClass& obj2);
};