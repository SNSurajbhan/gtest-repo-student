//Data -> Parameterize -> (input, expectedValue)
//Data Representation
//Value Provider -> Data Source
//How to pass data -> TestCase

#include "StringCalculator.h"
#include <gtest/gtest.h>

class DataDrivenTestFixture:testing::Test{
    protected:
    StringCalculator objUnderTest;


};
class DataDrivenTestFixtureWithParam:
                public DataDrivenTestFixture,
                public testing::WithParamInterface<std::tuple<string,int>>{

};
INSTANTIATE_TEST_SUITE_P(
                        ValidInputDataSource,
                        DataDrivenTestFixtureWithParam,
                        testing::Values(
                        std::make_tuple("",0)
                        std::make_tuple("0",0)
                        std::make_tuple("1,2",3)
                        std::make_tuple("1\n2,3",6)
                        ));

TEST_F(DataDrivenTestFixture,,GivenEmptyStringZeroIsExpected){

     string input="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

TEST_P(DataDrivenTestFixtureWithParam,ParameterizedTestCase){
     string input=std::get<0>(GetParam());
     int expectedValue=std::get<1>(GetParam());;
    //Act
     int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
