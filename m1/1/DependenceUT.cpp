/*
 * 文件DependenceUT.cpp
 *
 *  Created on: 2011-10-1
 *      Author: bourneli
 */
 
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Dependence_mock.h"
#include "Base.h"
 
using ::testing::MatchesRegex;
using ::testing::Matcher; 
 
TEST(DependenceTestSuite, ShowVoidTestCase)
{
    DependenceMock oMock;
    EXPECT_CALL(oMock, show());
 
    Foo oFoo;
    oFoo.showVoid(oMock);
}
 
TEST(DependenceTestSuite, ShowStringTestCase)
{
    DependenceMock oMock;
    EXPECT_CALL(oMock, show(Matcher<const string&> // 注意这里
         (MatchesRegex(".*error.*"))));
 
    Foo oFoo;
    oFoo.showString(oMock, "error happened in log");
}
 
TEST(DependenceTestSuite, ShowParamTestCase)
{
    DependenceMock oMock;
 
    Param op;
    op.n1 = 1;
    op.f1 = 0.1;
    EXPECT_CALL(oMock, show(Matcher<const Param&>   // 注意这里
         (ParamObjMatcher(op))));
 
    Foo oFoo;
    op.f1 = 0.2; // 没有任何影响，因为只比较n1
    oFoo.showParam(oMock, op);
}


