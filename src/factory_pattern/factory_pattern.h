/*
工厂模式：
    简单工厂
    工厂方法
    抽象工厂

*/

namespace factory_field
{


};

/* 工厂生产水果罐头的类型 */
enum CAN_TYPE
{
    APPLE,
    GRAPES,
};

class fruit
{
public:
    virtual void show() = 0;
    virtual ~fruit();
};

class Apple: public fruit
{
public:
    void show()
    {
        cout << "show me apple please.!!!! \n"  << endl;       
    }
};

class Grapes: public fruit
{
public:
    void show()
    {
        cout << "show me grapes please.!!!! \n" << endl;
    }
};



class Factory
{
public:
    fruit* createFruitCan(enum CAN_TYPE type)
    {
        if (APPLE == type)
        {
            return new Apple();
        }
        else if (GRAPES == type)
        {
            return new Grapes();
        }
        else
        return NULL;
    }
};



