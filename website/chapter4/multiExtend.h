//
// Created by Administrator on 2021/9/12.
//

#ifndef CPP_LEARNING_MULTIEXTEND_H
#define CPP_LEARNING_MULTIEXTEND_H

/**
 * 菱形继承
 *      A
 *    /   \
 *   /     \
 *  B       C
 *  \       /
 *   \     /
 *      D
 *  D会有2份A中的成员，这样就重复了
 *  临时解决方案时B，C虚继承A，来表示D中只有一份A的成员
 */

class BaseA {
public:
    int id;
};

class PieB : public BaseA {
public:
    int id;
};

class PieC : public BaseA {
public:
    int id;
};

class PieD: public PieB, public PieC{
public:
    void setId(int id) {
        this->id = id;
    }
};

class multiExtend {

};


#endif //CPP_LEARNING_MULTIEXTEND_H
