# auto ����
* C++ 11���� Ÿ�� �߷�
* ������ �ڷ����� ������ �ð��� �ڵ� �߷�
* auto �� ������ Ÿ�ӿ� �����ȴ�. ����, �ݵ�� auto ������ �ʱ�ȭ�� �ʿ�.

```cpp
const int& a = 0; // �ڷ��� const int&

auto aa = a;      // aa �ڷ�����?
```
-> aa�� �ڷ����� int �̴�. why? 

## typeid(�����̸�).name()
typeid(�����̸�).name() �� ����ϸ� �ڷ����� Ȯ�� �� �� ����. 

## 1. auto�� ������ ���� �ޱ�
  * �����͸� ���� ��      : auto / auto*   
```cpp
Cat* mycat = new Cat("CoCo",2);
auto myCatptr1 = mycat;  //Cat*
auto* myCatptr1 = mycat; // Cat*
```
  * ������ ���� ���� ��� : auto&
```cpp
Cat myCat2("Coco", 2);
Cat& myCat2Ref = myCat2;
auto	CatRef1 = myCat2Ref;		//Cat
auto&   CatRef2 = myCat2Ref;		//Cat&
```

## auto Ű���尡 �ſ� ������ ���

* auto�� �Լ� ��ȯ��
  * auto Ű����� �Լ��� ��ȯ�ϴ� �� �����ϴ� �� ����
  * �Լ� ��ȯ���� ���ص� auto�� �״�� ���

* auto�� �ݺ��� 
  * �ݺ��ڿ��� auto Ű���尡 ����
  * �ݺ��� Ÿ���� �ʹ� ��� ������ �����ϴ�.

