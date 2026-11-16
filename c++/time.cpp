#include <iostream>
using namespace std;

class Time {
  public:
    int hours,minutes;

    void input(){
      cout << "Enter Time (Hours) : " << endl;
      cin >> hours;

      cout << "Enter Time (Minutes) : " << endl;
      cin >> minutes;
    }

    void display(){
      cout << hours << "hours" << "and" << minutes << "minutes" << endl;
    }

void add(Time t1, Time t2){
  minutes = t1.minutes + t2.minutes;
  hours = t1.hours + t2.hours;
  minutes = minutes / 60;

if(minutes>60){
    hours ++;
    minutes = minutes - 60;
  }
}


};


int main(){
Time t1,t2,t3;

t1.input();
t2.input();

t3.add(t1,t2);
t3.display();

return 0;

}



