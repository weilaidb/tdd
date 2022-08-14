/*
 * 文件Dependence_mock.h
 *
 *  Created on: 2011-10-1
 *      Author: bourneli
 */
 
#ifndef DEPENDENCE_MOCK_H_
#define DEPENDENCE_MOCK_H_
 
#include <string>
#include "gmock/gmock.h"
#include "Base.h"
 
// mock class
class DependenceMock: public Dependence
{
public:
    MOCK_CONST_METHOD0(show, void());
    MOCK_CONST_METHOD1(show, void(const string&));
    MOCK_CONST_METHOD1(show, void(const Param&));
};
 
// custom matcher
MATCHER_P(ParamObjMatcher, oParam, "")
{
    const Param& op = (const Param&)arg;
    return op.n1 == oParam.n1;
}
 
#endif /* DEPENDENCE_MOCK_H_ */

