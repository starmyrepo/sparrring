#include <iostream>
using namespace std;

class Animal{
  public:
    void scream(){
      cout << "Bark!, Meow!" << endl;
    }
};

class Car{
  public:
    void start(){
      cout << "VROOM!!" << endl;
    }
};

class Sound:public Animal,public Car{
  public:
    void hear(){
      cout << "Sounds are COMMING!" << endl;
    }
};

class all:public Sound{
  public:
    void message(){
      cout << "I think all are printed?" << endl;
    }
};

int main(){
  all s1;

  s1.scream();
  s1.start();
  s1.hear();
  s1.message();

  return 0;

}

