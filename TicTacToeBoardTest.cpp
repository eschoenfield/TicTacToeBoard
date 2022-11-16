/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};


TEST(TicTacToeBoardTest, smoke_test) //example
{
    ASSERT_TRUE(true);
}
TEST(TicTacToeBoardTest, xStartsFirst) //allnighter
{
	//can't test on private member variables
    TicTacToeBoard myPractice;
	myPractice.TicTacToeBoard(); 
	ASSERT_EQ(myPractice.turn, X);
}