//
// Created by Administrator on 2021/9/9.
//
#include "Oop.h"
#include "iostream"

using namespace std;

Car::Car(int wheel) {
    this->wheel = wheel;
}

void Car::run() {
    cout<<"running on the road"<<endl;
}

void Car::addOil() {
    cout<<"add oil"<<endl;
}

int Car::getWheel() {
    return this->wheel;
}

void BMW::changeColor() {
    this->color = "red";
}

const string BMW::getColor() {
    return this->color;
}
// 引用传参
void fixCar(Car &car) {
    cout<<"fix a car"<<car.getWheel()<<endl;
    car.addOil();
    car.run();
}

int main() {
    Car* car = new Car(4);
    fixCar(*car);

    BMW* bmw = new BMW(8);
    bmw->changeColor();
    cout<<bmw->getColor()<<endl;
    return 0;
}
