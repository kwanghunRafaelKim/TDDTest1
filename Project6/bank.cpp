
class Account
{
public:
	explicit Account(int money):balance(money)
	{		
	}
	int getBalance()
	{
		return balance;
	}
	void deposit(int money)
	{
		balance += money;
	}
	void withdraw(int money)
	{
		balance -= money;
	}
	void welfare()
	{
		int interest = balance * interestRate / 100;
		balance += interest;
	}

	void setInterestrate(int interestrate)
	{
		interestRate = interestrate;
	}
	int getInterestrate()
	{
		return interestRate;
	}

	int getbalanceafterNyear(int year)
	{
		while(year--)
		{
             welfare();
		}
		return balance;
	}
		
private:
	int balance;
	int interestRate;
};
