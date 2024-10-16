# 둘 이상의 Type에 대해 템플릿 선언하기 

```cpp
#include <iostream>
using namespace std;

template <class T1, class T2>
void ShowData(double num)
{
    cout << (T1)num << ", " << (T2)num << endl;
}

int main()
{
    ShowData<char, int>(65);
    ShowData<char, double>(68.9);
    ShowData<short, double>(69.2);

    return 0;
}
```