# RValue , LValue

## LValue 참조
LValue  는 객체를 참조하는 표현식 
```cpp
    int n = 1;
    int& r = n;         // lvalue ref
```

## RValue 참조
```cpp
    int&& rr = 1;       // rvalue ref
```

## auto&& (보편 참조)
* 모양은 rvalue 참조인데 auto&& 는 보편 참조라고 한다.
rvalue, lvalue 둘다 올 수 있다. 
* modern cpp 에서 들어온 자동참조
* 두가지 참조 타입 다 하나로 받을 수 있음.
```cpp
    auto&& rrr = n;     // lvalue ref
    auto&& rrr = 1;     // rvalue ref
```

## foward<T>(val)