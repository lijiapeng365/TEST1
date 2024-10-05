#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// 绋嬪簭鐨勪富鍑芥暟
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   // 瀛樺偍鐭╁舰鐨勫湴鍧€
   shape = &rec;
   // 璋冪敤鐭╁舰鐨勬眰闈㈢Н鍑芥暟 area
   shape->area();
 
   // 瀛樺偍涓夎褰㈢殑鍦板潃
   shape = &tri;
   // 璋冪敤涓夎褰㈢殑姹傞潰绉嚱鏁� area
   shape->area();
   
   return 0;
}