# C++�� �װ��� Ÿ�� ������

## 1. static_cast
static_cast�� C++���� �ַ� Ÿ���� ��ȯ�� �� ����ϴ� ĳ���� �������Դϴ�. ������ Ÿ�ӿ� Ÿ���� �����ϰ� ��ȯ�ϸ�, ��������� Ÿ���� �����ϱ� ������ C-style ĳ���ú��� �����ϰ� ����� �� �ֽ��ϴ�. static_cast�� �ַ� ������ ���� ��Ȳ���� ���˴ϴ�:
1. �⺻�� Ÿ�� ���� ��ȯ
```cpp
#include <iostream>

int main()
{
    float pi = 3.14;
    // float �� int�� ��ȯ 
    int intPi = static_cast<int>(pi);

    std::cout << "���� ��: " << pi << std::endl;      // 3.14
    std::cout << "��ȯ �� ��: " << intPi << std::endl; // 3 (�Ҽ����� �߸�)

    return 0;
}
```
`float` Ÿ���� `pi`�� `int`�� ��ȯ�Ͽ� �Ҽ����� ������ ���� ���. `static_cast`�� ����� Ÿ���� ��ȯ�ϴ� ���̹Ƿ�, �Ǽ��� ���� Ÿ�� ��ȯ���� ����

2. ��� ���迡�� ������ ���� Ÿ�� ��ȯ
```cpp
#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base Ŭ����" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived Ŭ����" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    // Base* Ÿ���� Derived* Ÿ������ ��ȯ
    Derived* derivedPtr = static_cast<Derived*>(basePtr);

    derivedPtr->show();  // Derived Ŭ���� ���

    delete basePtr;
    return 0;
}
```
�������� Base Ŭ���� ������ basePtr�� Derived Ŭ���� �����ͷ� ��ȯ�� ��, Derived Ŭ������ show �Լ��� ȣ��˴ϴ�. static_cast�� ��� ���迡�� �⺻ Ŭ������ �Ļ� Ŭ���� ���� ������ ĳ������ �����մϴ�.

3. ������ Ÿ�԰� ������ ���� ��ȯ

```cpp
#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color c = Color::Red;

    // �������� int�� ��ȯ
    int colorValue = static_cast<int>(c);
    
    std::cout << "Color::Red�� ��: " << colorValue << std::endl;  // 0 ���

    return 0;
}
```
���⼭�� Color �������� ������(int)���� ��ȯ�Ͽ� �������� ���� ���� 0�� ����մϴ�. ��ó�� static_cast�� �������� ������ ���� ��ȯ�� �����ϰ� ó���� �� �ֽ��ϴ�.

## 2. dynamic_cast
dynamic_cast�� C++���� �ַ� ������(polymorphism)�� ����ϴ� ��� ���迡�� �����ϰ� Ÿ�� ��ȯ�� ������ �� ���Ǵ� ĳ���� �������Դϴ�. �ַ� ��Ÿ�ӿ� Ÿ�� ������ Ȯ���Ͽ� �����ϰ� �ٿ�ĳ������ �����ϸ�, RTTI(Run-Time Type Information)�� ������� �۵��մϴ�.
1. ��Ӱ��迡 �ִ� ������ �Ǵ� ���� Ÿ���� ��ȯ�ϴ� �� ����.
2. �ַ� �ٿ�ĳ����(�⺻ Ŭ���� -> �Ļ� Ŭ����)���� ������ ����.
3. ���� ���θ� Ȯ���� �� ����. ������ ��ȯ�� �����ϸ� nullptr�� ��ȯ�ϰ�, ���� ��ȯ�� �����ϸ� std::bad_cast ���ܸ� ����.
4. Ŭ������ ���� �Լ��� �����ϰ� �־����.(dynamic)_
## 3. reinterpret_cast

## 4. const_cast