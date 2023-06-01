#include "pch.h"
#include <vector>
#include "../Project6/bank.cpp"

using namespace std;

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAacountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}
TEST_F(AccountFixture, withDraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}
TEST_F(AccountFixture, Welfare) {
	account.setInterestrate(5);
	account.welfare();
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, setInteresetrate) {
	account.setInterestrate(5);
	EXPECT_EQ(5, account.getInterestrate());
}

TEST_F(AccountFixture, getbalanceafter1year) {
	account.setInterestrate(5);
	EXPECT_EQ(10500, account.getbalanceafterNyear(1));
}
TEST_F(AccountFixture, getbalanceafter2year) {
	account.setInterestrate(3);
	EXPECT_EQ(10609, account.getbalanceafterNyear(2));
}