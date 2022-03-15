//
// Created by Administrator on 2021/4/11.
//

#include "User.h"
#include "iostream"

using namespace std;

// 参数列表初始化
/*User::User(int id, const char* name): m_id(id), m_name(name) {
    cout<<"param list init"<<endl;
}*/

User::User(int id, const char* name) {
    cout<<"init user..."<<endl;
    this->m_id = id;
    this->m_name = name;
    User::status++;
}

int User::status = 0;

int User::getId() {
    return this->m_id;
}

const int User::readId() {
    return m_id;
}

// 只可以读取变量，不能修改
int User::getId() const {
    return m_id;
}

void User::setId(int id) {
    this->m_id = id;
}

void User::toString() {
    cout<<"id is "<<this->m_id<<", name is "<<this->m_name<<" and his status is "<<User::status<<endl;
}

// new调用构造函数，delete调用析构函数
User::~User() {
    cout<<"destroy User class"<<endl;
}

int main() {

    // 在堆上创建对象，必须用指针
    User* pUser = new User(1, "foo");

    pUser->toString();

    int id = pUser->readId();
    id++;

    pUser->getId();

    delete pUser;

    //匿名对象
    (new User(2, "bar"))->toString();

    User* nUser = new User(3, "nn");
    int nid = nUser->readId();

    cout<<nid<<endl;

    // const对象不是说指向不能变，而是只能访问const函数，成员变量
    const User* cUser = new User(4, "user");
    cUser = nUser;
    cout<<cUser->getId()<<endl;
    return 1;
}
