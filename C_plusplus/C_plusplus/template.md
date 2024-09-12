# 템플릿
- 사용자가 원하는 타입을 넣어주면 알아서 코드를 찍어내는 틀.
- 매개변수의 다형성 - 타입이 다른 동일한 코드를 컴파일러가 자동으로 생성
- 템플릿 함수는 함수를 호출할 때 실 매개변수가 전달되어, 템플릿의 타입이 컴파일 시에 결정된다.
- 컴파일러는 템플릿 함수를 기반으로 같은 형태의 함수를 생성.
- 이를 템플릿 인스턴스화라고 함.
- 함수 템플릿 : 템플릿 함수를 찍어내는 틀.

## 일반화 프로그래밍 (Generic Programming)
- 효과적인 알고리즘에 대한 가장 추상적인 표현 형태를 찾기 위한 일반적인 파라미터를 가진 프로그래밍
- 템플릿을 사용하지 않고 여러 타입에 대해서 동작하는 함수를 만들려면, 각 타입에 대해 함수를 오버로딩을 해야함.
- 하나의 템플릿만으로 함수를 오버로딩하는 효과를 가질 수 있다면, 일반화 프로그래밍이라고 함.

## C언어에서 일반화 - STL (템플릿으로 일반화를 구현한 표준 라이브러리)
- Standard Template Library : 표준 템플릿 라이브러리
- STL은 알고리즘이라 불리는 유용한 수많은 컨테이너라 불리는 여러가지 객체를 모으기 위한 다양한 선형 데이터형 구조를 제공하는 프레임워크.

## 클래스 템플릿 선언
- 멤버 변수의 자료형과 멤버함수를 통해 전달되는 매개변수의 자료형이 다른 경우가 있다.
- 이럴 경우 둘이상의 자료형에 대해서 템플릿을 선언.

```cpp
template <typename TYPE, typename ARG_TYPE>
class Data
{
    Type value;
public :
    Data(TYPE v);
    void CopyData(ARG_TYPE v);
    TYPE GetData();
}
```

## 템플릿 클래스 정의하기
```cpp
#include <iostream>
using namespace std;

class Test {
    int value;
public :
    Test(int v);
    void SetValue(int v);
    int GetValue();
}

Test::Test(int v) { value = v; }

void Test::SetValue(int v) { value = v;}

int Test::GetValue() {return value;}

void main()
{
    Test obj1(10);
    obj1.SetValue(); cout << obj1.GetValue() << endl;

    Test obj2(5.7); cout << obj2.GetValue() << endl;
}
```

위 코드 처럼  Test obj(10), int형과 Test obj(5.7)을 둘다 생성한 경우 생성자 오버로딩을 하여 일일이 정의해 주어야한다.
하지만, 적은 타입갯수만 있을때는 편할 수 도 있지만, 타입이 많아지면 일일이 생성자 오버로딩을 해주어야하는 불편함이 있기 때문에 아래와 같이 
클래스 템플릿을 선언하고 정의해준다.

```cpp
#include <iostream>
using namespace std;

template <typename T>
class Test {
    T value;
public :
    Test(T v);
    void SetValue(T v);
    T GetValue();
};

template<typname T>
Test<T>::Test(T v) { value = v;}
template <typname T>
void Test<T>::SetValue(T v) { value = v;}
template <typname T>
T Test<T>::GetValue() { return value;}

int main()
{
    Test<int> obj1(10);
    obj1.SetValue(10); cout << obj1.GetValue() << endl;
    Test<double> obj2(5.7); cout << obj2.GetValue() <<endl;
}
```