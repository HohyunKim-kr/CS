# 템플릿 특수화

- 특정 향식에 대한 템플릿의 특수화를 정의할 수 있음. 
- 특정 형식에 대해서는 별도의 기능을 수행해야하는 경우.
- template <> 선언 후, 특정 타입의 개별 함수 작성.

## example 
```cpp
template <typname T>
T MAX (T a, T b)
{ 
    return a > b ? a : b;
}
template <>
char* MAX(char* a, char* b)
{
    cout << "char * MAX<char*>(char* a, char* b) << endl";
    return strlen(a) > strtlen(b) ? a : b;
}
```

위와 같이 template을 사용하지 않을 특정 형식에 대해 별도의 기능을 줄 수 있다.