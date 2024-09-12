# ���ø�
- ����ڰ� ���ϴ� Ÿ���� �־��ָ� �˾Ƽ� �ڵ带 ���� Ʋ.
- �Ű������� ������ - Ÿ���� �ٸ� ������ �ڵ带 �����Ϸ��� �ڵ����� ����
- ���ø� �Լ��� �Լ��� ȣ���� �� �� �Ű������� ���޵Ǿ�, ���ø��� Ÿ���� ������ �ÿ� �����ȴ�.
- �����Ϸ��� ���ø� �Լ��� ������� ���� ������ �Լ��� ����.
- �̸� ���ø� �ν��Ͻ�ȭ��� ��.
- �Լ� ���ø� : ���ø� �Լ��� ���� Ʋ.

## �Ϲ�ȭ ���α׷��� (Generic Programming)
- ȿ������ �˰��� ���� ���� �߻����� ǥ�� ���¸� ã�� ���� �Ϲ����� �Ķ���͸� ���� ���α׷���
- ���ø��� ������� �ʰ� ���� Ÿ�Կ� ���ؼ� �����ϴ� �Լ��� �������, �� Ÿ�Կ� ���� �Լ��� �����ε��� �ؾ���.
- �ϳ��� ���ø������� �Լ��� �����ε��ϴ� ȿ���� ���� �� �ִٸ�, �Ϲ�ȭ ���α׷����̶�� ��.

## C���� �Ϲ�ȭ - STL (���ø����� �Ϲ�ȭ�� ������ ǥ�� ���̺귯��)
- Standard Template Library : ǥ�� ���ø� ���̺귯��
- STL�� �˰����̶� �Ҹ��� ������ ������ �����̳ʶ� �Ҹ��� �������� ��ü�� ������ ���� �پ��� ���� �������� ������ �����ϴ� �����ӿ�ũ.

## Ŭ���� ���ø� ����
- ��� ������ �ڷ����� ����Լ��� ���� ���޵Ǵ� �Ű������� �ڷ����� �ٸ� ��찡 �ִ�.
- �̷� ��� ���̻��� �ڷ����� ���ؼ� ���ø��� ����.

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

## ���ø� Ŭ���� �����ϱ�
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

�� �ڵ� ó��  Test obj(10), int���� Test obj(5.7)�� �Ѵ� ������ ��� ������ �����ε��� �Ͽ� ������ ������ �־���Ѵ�.
������, ���� Ÿ�԰����� �������� ���� �� �� ������, Ÿ���� �������� ������ ������ �����ε��� ���־���ϴ� �������� �ֱ� ������ �Ʒ��� ���� 
Ŭ���� ���ø��� �����ϰ� �������ش�.

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