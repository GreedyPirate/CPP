//
// Created by Administrator on 2021/9/9.
//

#ifndef CPP_LEARNING_OOP_H
#define CPP_LEARNING_OOP_H
#include <string>
#include "iostream"

using namespace std;
using std::string;

class Car {
public:
    Car(int wheel);
    int getWheel();
    void run();
    void addOil();

protected:
    string color;

private:
    int wheel;
};


// 继承
class BMW: public Car {
public:
    BMW(int wheel):Car(wheel){
        cout<<"init BMW"<<endl;
    }
    ~BMW();
    string brand;
    void changeColor();
    const string getColor();
private:
    void playMusic();
};
#endif //CPP_LEARNING_OOP_H
