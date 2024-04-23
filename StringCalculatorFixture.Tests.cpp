// StringCalculatorTestFixture.Tests.cpp

#include "StringCalculator.h"
#include <gtest/gtest.h>

// Fixture Class
class StringCalculatorTestFixture : public testing::Test {
protected:
    StringCalculator objUnderTest; // Use object, not pointer
};

TEST_F(StringCalculatorTestFixture, GivenEmptyStringZeroIsExpected) {
    // Arrange
    std::string input = "";
    int expectedValue = 0; // Correct expected value
    // Act
    int actualValue = objUnderTest.Add(input);
    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}

TEST_F(StringCalculatorTestFixture, Given2numbers) {
    // Arrange
    std::string input = "1,2";
    int expectedValue = 3;
    // Act
    int actualValue = objUnderTest.Add(input);
    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
