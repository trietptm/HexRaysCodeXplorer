#include <iostream>
#include <stdio.h>

class A {
  public:
   A(){
    printf("A::A()\n");
    id = 42;
   }
   virtual void a(){
     printf("Virtual A::a()\n");
   }
   virtual ~A(){
     printf("A::~A()\n");
   }
   private:
    int id;
};

class B : public A {
  public:
    B(){
      printf("B::B()\n");
    }
    virtual ~B(){
      printf("B::~B()\n");
    }
    virtual void a(){
      printf("Virtual B::a()\n");
      A::a();
    }
};

int main(){
  A *b = new(B);
  b->a();
  delete(b);
  return 0;
}

 
