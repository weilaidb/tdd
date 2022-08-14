/*
 * 文件Base.h
 *
 *  Created on: 2011-10-1
 *      Author: bourneli
 */
 
#ifndef BASE_H_
#define BASE_H_
 
#include <iostream>
#include <string>
using namespace std;
 
class Param
{
public:
    int n1;
    double f1;
};
 
class Dependence
{
public:
 
    virtual ~Dependence(){}
 
    virtual void show() const
    {
        cout << "I am a dependence of Foo" << endl;
    }
 
    virtual void show(const string& sSth) const
    {
        cout << "show: " << sSth << endl;
    }
 
    virtual void show(const Param& oParam) const
    {
        cout << oParam.n1 << endl;
        cout << oParam.f1 << endl;
    }
};
 
/*
 * 调用mock的对象
 */
class Foo
{
public:
 
    void showVoid(const Dependence& oDep)const
    {
        oDep.show();
    }
 
    void showString(const Dependence& oDep, const string& sSth)const
    {
        oDep.show(sSth);
    }
 
    void showParam(const Dependence& oDep, const Param& oParam)const
    {
        oDep.show(oParam);
    }
 
};
 
#endif /* BASE_H_ */

