# C++의 네가지 타입 연산자

## 1. static_cast
static_cast는 C++에서 주로 타입을 변환할 때 사용하는 캐스팅 연산자입니다. 컴파일 타임에 타입을 안전하게 변환하며, 명시적으로 타입을 지정하기 때문에 C-style 캐스팅보다 안전하게 사용할 수 있습니다. static_cast는 주로 다음과 같은 상황에서 사용됩니다:
1. 기본형 타입 간의 변환
```cpp
#include <iostream>

int main()
{
    float pi = 3.14;
    // float 을 int로 변환 
    int intPi = static_cast<int>(pi);

    std::cout << "원래 값: " << pi << std::endl;      // 3.14
    std::cout << "변환 후 값: " << intPi << std::endl; // 3 (소수점이 잘림)

    return 0;
}
```
`float` 타입의 `pi`를 `int`로 변환하여 소수점을 제거한 값을 출력. `static_cast`는 명시적 타입을 변환하는 것이므로, 실수로 인한 타입 변환오류 방지

2. 상속 관계에서 포인터 참조 타입 변환
```cpp
#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base 클래스" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived 클래스" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    // Base* 타입을 Derived* 타입으로 변환
    Derived* derivedPtr = static_cast<Derived*>(basePtr);

    derivedPtr->show();  // Derived 클래스 출력

    delete basePtr;
    return 0;
}
```
예제에서 Base 클래스 포인터 basePtr을 Derived 클래스 포인터로 변환한 후, Derived 클래스의 show 함수가 호출됩니다. static_cast는 상속 관계에서 기본 클래스와 파생 클래스 간의 안전한 캐스팅을 보장합니다.

3. 열거형 타입과 정수형 간의 변환

```cpp
#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color c = Color::Red;

    // 열거형을 int로 변환
    int colorValue = static_cast<int>(c);
    
    std::cout << "Color::Red의 값: " << colorValue << std::endl;  // 0 출력

    return 0;
}
```
여기서는 Color 열거형을 정수형(int)으로 변환하여 열거형의 내부 값인 0을 출력합니다. 이처럼 static_cast는 열거형과 정수형 간의 변환도 안전하게 처리할 수 있습니다.

## 2. dynamic_cast
dynamic_cast는 C++에서 주로 다형성(polymorphism)을 사용하는 상속 관계에서 안전하게 타입 변환을 수행할 때 사용되는 캐스팅 연산자입니다. 주로 런타임에 타입 정보를 확인하여 안전하게 다운캐스팅을 수행하며, RTTI(Run-Time Type Information)을 기반으로 작동합니다.
1. 상속관계에 있는 포인터 또는 차조 타입을 변환하는 데 사용됨.
2. 주로 다운캐스팅(기본 클래스 -> 파생 클래스)에서 안정성 보장.
3. 성공 여부를 확인할 수 있음. 포인터 변환에 실패하면 nullptr을 반환하고, 참조 변환에 실패하면 std::bad_cast 예외를 던짐.
4. 클래스가 가상 함수를 포함하고 있어야함.(dynamic)_
## 3. reinterpret_cast

## 4. const_cast