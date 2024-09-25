# RValue , LValue

## LValue ����
LValue  �� ��ü�� �����ϴ� ǥ���� 
```cpp
    int n = 1;
    int& r = n;         // lvalue ref
```

## RValue ����
```cpp
    int&& rr = 1;       // rvalue ref
```

## auto&& (���� ����)
* ����� rvalue �����ε� auto&& �� ���� ������� �Ѵ�.
rvalue, lvalue �Ѵ� �� �� �ִ�. 
* modern cpp ���� ���� �ڵ�����
* �ΰ��� ���� Ÿ�� �� �ϳ��� ���� �� ����.
```cpp
    auto&& rrr = n;     // lvalue ref
    auto&& rrr = 1;     // rvalue ref
```

## foward<T>(val)