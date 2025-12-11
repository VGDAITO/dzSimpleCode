#include <iostream>
#include <windows.h>
#include <string>



class Human
{
public:

    int age = 0;
    int weight = 0;
    std::string name;

    void Print()
    {
        std::cout << "Имя: " << name << "\nВозраст: " << age << "\nВес: " << weight << "\n\n";
    }

};

class Point
{
private:
    int x;
    int z;
    int c;
public:

    Point()
    {
        x = 0;
        z = 0;
        c = 0;
        std::cout << this << " Constructor\n";
        
    }
    Point(int valueX,int valueZ,int valueC)
    {
        
        x = valueX;
        z = valueZ;
        c = valueC;
        std::cout << this << " Constructor\n";
    }

    int GetX()
    {
        return x;
    }
    void SetX(int valueX)
    {
        x = valueX;
    }
    int GetZ()
    {
        return z;
    }
    void SetZ(int z)
    {
        this->z = z; // за место valueZ можно написать this -> z 
    }
    void Print()
    {
        std::cout << "X = " << x << "\tZ = " << z << "\tC = "<< c << "\n\n" ;
    }
};

class MyClass
{
private:
    int *data;
public:
    MyClass(int size)
    {
        data = new int[size];

        for (size_t i = 0; i < size; i++)
        {
            data[i] = i + 1;
        }

        this->data = data;

        std::cout << "Объект: " << this << " Вызвался конструктор \n";
    }

    ~MyClass()
    {
        delete[] data;
        std::cout << "Объект: " << this << " Вызвался деструктор \n";
    }
};

void Foo(MyClass value)
{
    std::cout << "Foo начало выполнения \n";
    MyClass a(1);
    std::cout << "Foo конец выполнения \n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Human firstHuman;
    firstHuman.age = 10;
    firstHuman.name = "Big Balls";
    firstHuman.weight = 60;
    firstHuman.Print();


    Human secondHuman;
    secondHuman.age = 10;
    secondHuman.name = "Baby Balls";
    secondHuman.weight = 20;
    secondHuman.Print();

    Foo(3);

    Point b(234,4,5);
    Point a;

    a.Print();
    b.Print();

    
  


  /*  a.SetX(5);
    int result = a.GetX();
    
    a.Print();
    std::cout << result;*/
    return 0;
}



