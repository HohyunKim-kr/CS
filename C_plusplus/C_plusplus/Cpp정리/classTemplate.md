# 클래스 템플릿

```cpp
#include<iostream>
using namespace std;

template<typename T>
class CTest
{
public:
    CTest(T param) :ndata(param){}
    ~CTest(){}
    
    void SetData(T val){ndata = val;}
    T GetData() { return ndata;};
private:
    T ndata;
}

int main()
{
    CTest<int> a(1);
    cout << a.GetData() << endl;

    CTest<float> b(1.5f);
    cout << b.GetData() << endl;

    return 0;
}
```

###  클래스 템플릿의 선언과 정의의 분리

```cpp
template<typename T>
class Point 
{
private:
    T xpos, ypos;
public:
    Point(T x = 0, T y = 0);
    void ShowPosition() const;
}

template<typename T>
Point<T>::Point(T x, T y) :xpos(x),ypos(y) {}

template<typename T>
void Point<T>::ShowPosition const 
{
    cout << '[' << xpos <<"," << ypos << ']' <<endl;
}

int main()
{
    Point<int> pos1(3,4);
    pos1.ShowPosition();

    Point<int> pos1(3,4);
    pos1.ShowPosition();

    Point<int> pos1(3,4);
    pos1.ShowPosition();
}

```
