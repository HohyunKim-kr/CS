# auto 변수
* C++ 11에서 타입 추론
* 변수의 자료형을 컴파일 시간에 자동 추론
* auto 는 컴파일 타임에 결정된다. 따라서, 반드시 auto 변수는 초기화가 필요.

```cpp
const int& a = 0; // 자료형 const int&

auto aa = a;      // aa 자료형은?
```
-> aa의 자료형은 int 이다. why? 

## typeid(변수이름).name()
typeid(변수이름).name() 을 사용하면 자료형을 확인 할 수 있음. 

## 1. auto로 포인터 참조 받기
  * 포인터를 받을 때      : auto / auto*   
```cpp
Cat* mycat = new Cat("CoCo",2);
auto myCatptr1 = mycat;  //Cat*
auto* myCatptr1 = mycat; // Cat*
```
  * 참조로 받을 때는 명시 : auto&
```cpp
Cat myCat2("Coco", 2);
Cat& myCat2Ref = myCat2;
auto	CatRef1 = myCat2Ref;		//Cat
auto&   CatRef2 = myCat2Ref;		//Cat&
```

## auto 키워드가 매우 유용한 경우

* auto와 함수 반환형
  * auto 키워드는 함수가 반환하는 걸 저장하는 데 유용
  * 함수 반환형이 변해도 auto는 그대로 사용

* auto와 반복자 
  * 반복자에는 auto 키워드가 유용
  * 반복자 타입이 너무 길기 때문에 유용하다.

