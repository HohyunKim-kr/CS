# ���ø� Ư��ȭ

- Ư�� ��Ŀ� ���� ���ø��� Ư��ȭ�� ������ �� ����. 
- Ư�� ���Ŀ� ���ؼ��� ������ ����� �����ؾ��ϴ� ���.
- template <> ���� ��, Ư�� Ÿ���� ���� �Լ� �ۼ�.

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

���� ���� template�� ������� ���� Ư�� ���Ŀ� ���� ������ ����� �� �� �ִ�.