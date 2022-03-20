#include <iostream>
class Singleton{
    private:
        Singleton();
        static Singleton* _mObject;
    public:
        static Singleton* createInstance();
        
        
};
Singleton::Singleton()
{
    std::cout<<"Instantiate object\n";
}
Singleton* Singleton::_mObject = nullptr;
Singleton* Singleton::createInstance()
{
    if (!_mObject)
    {
        _mObject = new Singleton();
    }
    return _mObject;
}

int main()
{
    Singleton* db;
    db = Singleton::createInstance(); 
}
