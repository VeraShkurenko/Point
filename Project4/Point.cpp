#include<iostream>
using namespace std;

class Point // создание нового типа!!
{
    int x;
    int y;
public:
    Point() {}
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Print() // метод класса
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    void Input(int a, int b) // метод класса
    {
        x = a;
        y = b;
    }

    Point operator+ (Point& b) // obj+obj
    {
        Point sum(x + b.x, y + b.y);
        return sum;
    }
    //Point operator+ (int b) // obj+int
    //{
    //    Point sum(x + b, y + b);
    //    return sum;
    //}

    int GetX()const
    {
        return x;
    }
    int GetY()const
    {
        return y;
    }
    void SetX(int _x)
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }
};





Point operator+(int a, Point& b) // int+ Point
{
    //Point rez(b.GetX() + a, b.GetY() + a);
    Point rez;
    rez.SetX(a + b.GetX());
    rez.SetY(a + b.GetY());
    return rez;
}
Point operator+(Point& b, int a) // Point + int 
{
    Point rez(b.GetX() + a, b.GetY() + a);
    return rez;
}
Point operator++(Point& obj) // ++a
{
    obj.SetX(obj.GetX() + 1);
    obj.SetY(obj.GetY() + 1);
    return obj;
}
Point operator++(Point& obj, int) // a++
{
    Point temp(obj.GetX(), obj.GetY());

    obj.SetX(obj.GetX() + 1);
    obj.SetY(obj.GetY() + 1);

    return temp;
}
Point operator-(int a, Point& b) // int- Point
{
    Point rez;
    rez.SetX(a - b.GetX());
    rez.SetY(a - b.GetY());
    return rez;
}
Point operator-(Point& b, int a) // Point - int 
{
    Point rez(b.GetX() - a, b.GetY() - a);
    return rez;
}
Point operator-(Point& b, Point& a) // Point - Point 
{
    Point rez(b.GetX() - a.GetX(), b.GetY() - a.GetY());
    return rez;
}

Point operator*(int a, Point& b) // int* Point
{
    Point rez;
    rez.SetX(a * b.GetX());
    rez.SetY(a * b.GetY());
    return rez;
}
Point operator*(Point& b, Point& a) // Point * Point 
{
    Point rez(b.GetX() * a.GetX(), b.GetY() * a.GetY());
    return rez;
}
Point operator--(Point& obj) // --a
{
    obj.SetX(obj.GetX() - 1);
    obj.SetY(obj.GetY() - 1);
    return obj;
}
Point operator--(Point& obj, int) // a--
{
    Point temp(obj.GetX(), obj.GetY());

    obj.SetX(obj.GetX() - 1);
    obj.SetY(obj.GetY() - 1);

    return temp;
}
Point operator+=(Point& obj, int a) // a+=
{
    obj.SetX(obj.GetX() + a);
    obj.SetY(obj.GetY() + a);
    return obj;
}
Point operator+=(int a, Point& obj) // a+=
{
    obj.SetX(obj.GetX() + a);
    obj.SetY(obj.GetY() + a);
    return obj;
}
Point operator-=(Point& obj, int a) // a-=
{
    obj.SetX(obj.GetX() - a);
    obj.SetY(obj.GetY() - a);
    return obj;
}
Point operator-=(int a, Point& obj) // a-=
{
    obj.SetX(a-obj.GetX());
    obj.SetY(a-obj.GetY());
    return obj;
}
Point operator*=(Point& obj, int a) // a*=
{
    obj.SetX(obj.GetX() * a);
    obj.SetY(obj.GetY() * a);
    return obj;
}
Point operator*=(int a, Point& obj) // a*=
{
    obj.SetX(obj.GetX() * a);
    obj.SetY(obj.GetY() * a);
    return obj;
}
Point operator/=(Point& obj, int a) // a/=
{
    obj.SetX(obj.GetX() / a);
    obj.SetY(obj.GetY() / a);
    return obj;
}
Point operator/=(int a, Point& obj) // a+=
{
    obj.SetX(a/obj.GetX());
    obj.SetY(a/obj.GetY());
    return obj;
}


int main()
{ 
   /* Point a(1, 2);
    a.Print();*/
    Point b(2,4);
    b.Print();
    //Point c = a + b;
    //c.Print();
    //c = 10 + a;
    //c.Print();

    //c = ++a;
    //c.Print();
    //a.Print();
    //++a;
    //a.Print();

    //Point d = a++; // d= 1 2 a = 11, 12
    //a.Print();
    //d.Print();

    //// -------------- реализовать необходимые перегрузки 

   //Point x = 100 - a;
   //x.Print();
   //x = a - b;
   //x.Print();
   //x = 10 * a; // 10 * a.x, 10*a.y;
   //x.Print();
   //x = a * b;
   //x.Print();
   //x = --a;
   //x.Print();
   //x = a--;
   //x.Print();



    b += 10;
    b.Print();
    
    100 -= b;
    b.Print();

    b *= 2;
    b.Print();

    b /= 2;
    b.Print();

    b -= 40;
    b.Print();

    88 /= b;
    b.Print();




}