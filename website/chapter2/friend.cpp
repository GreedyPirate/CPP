//
// Created by Administrator on 2021/9/8.
//

#include "User.h"
#include "string.h"
#include "iostream"

using namespace std;

int User::status = 0;

User::User(int id, const char* name) {
    cout<<"init user..."<<endl;
    this->m_id = id;
    this->m_name = name;
    User::status++;
}

Dog::Dog() {
    cout<<"init dog"<<endl;
}

Dog::Dog(string doge) {
    Dog();
    this->m_doge = doge;
}

void pup(Dog* dog) {
    cout<<"bad dog.."<<dog->m_doge<<endl;
}

string Dog::hiFriend(User *user) {
    return "hi, " + to_string(user->m_id) + ", " + user->m_name;
}

int main() {
    User* user = new User(1, "foo");
    Dog* dog = new Dog();
    cout<<dog->hiFriend(user)<<endl;

    Dog* badDog = new Dog("HUSTY");
    pup(badDog);
    return 0;
}