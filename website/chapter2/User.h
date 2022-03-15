//
// Created by Administrator on 2021/4/11.
//

#ifndef CPP_USER_H
#define CPP_USER_H
#include <string>

using std::string;

class Dog;

class User {

private:
    int m_id;

    const char* m_name;

    static const int USER_TYPE = 1;

    // static变量必须在外部实现时赋值
    static int status;

public:
    friend class Dog;

    User(int id, const char* name);
    // 析构函数
    ~User();

    void setId(int id);

    char* getName();

    void setName(char* name);

    void toString();

    // 返回值不可变
    const int readId();

    // 和下面是2个函数
    int getId();

    // 常成员函数: 不可以在函数内部修改成员变量
    int getId() const;

    // 静态函数
    static User* of(int id, const char*name) {
        User* user = new User(id, name);
        return user;
    }

    string hiFriend(User* user);
};


class Dog {
public:
    Dog();
    Dog(string doge);

    string hiFriend(User* user);

    friend void pup(Dog* dog);

private:
    string m_doge;
};


#endif //CPP_USER_H
