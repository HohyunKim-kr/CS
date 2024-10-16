# template Stack 구현
https://wikidocs.net/416

클래스 템플릿도 함수 템플릿과 마찬가지로 하나 이상의 데이터형으로 파라미터화 될 수 있음.
일반 함수와 같이 템플릿 함수가 오버로딩을 통해 동일한 함수명으로 여러 구현을 표현하는 것 같이 클래스 템플릿에서는 특수화라는 기법으로 동일한 이름의 클래스가 다른 방식으로 작동하는 것을 지원.

#### stack의 클래스 템플릿 구현.
```cpp
template<typename T>
class Stack
{
public:
    void Push(T const& elem)
    {
        elems.push_back(elem);
    }
    void Pop()
    {
        if(elems.empty())
            throw std::out_of_range("Stack<>::pop() : empty stack");
        elems.pop_back();
    }
    T Top const
    {
        if(elems.empty())
            throw std::out_of_range("Stack<>::pop() : empty stack");
        return elems.back();
    }
    bool empty() const
    {
        return elems.empty();
    }
private:
    std::vector<T> elems;
}
```