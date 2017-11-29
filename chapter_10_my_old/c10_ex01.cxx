// Provide method definitions for the class described in Chapter Review Question 5:
// Define a class to represent a bank account. Data members should include the
// depositor’s name, the account number (use a string), and the balance. Member func-
// tions should allow the following:
// n Creating an object and initializing it.
// n Displaying the depositor’s name, account number, and balance
// n Depositing an amount of money given by an argument
// n Withdrawing an amount of money given by an argument
// Just show the class declaration, not the method implementations.
#include <string>
#include <iostream>
#include <cstdlib>

class BankAccount
{
  private:
    std::string name;
    std::string acctnum;
    double balance;

  public:
    BankAccount(const std::string & client, const std::string & num, double bal = 0.0);
    void show(void) const;
    void deposit(double cash);
    void withdraw(double cash);
};

int main() {
  BankAccount account_john = BankAccount("John Smith", "7261100021566300010001254");
  account_john.show();
  try{
    account_john.deposit(5420);
  } catch (std::range_error &e){
      std:: cout << e.what() << std::endl;
      return EXIT_FAILURE;
  }
  account_john.show();
  try{
    account_john.withdraw(410);
  } catch (std::range_error &e){
      std:: cout << e.what() << std::endl;
      return EXIT_FAILURE;
  }
  account_john.show();
  return EXIT_SUCCESS;
}


BankAccount::BankAccount(const std::string & client, const std::string & num, double bal){
  name = client;
  acctnum = num;
  balance = bal;
}

void BankAccount::show(void) const{
  std::cout << "Name: " << name << std::endl;
  std::cout << "\tAccount number: " << acctnum << std::endl;
  std::cout << "\tBalance: " << balance << " PLN" << std::endl;
}

void BankAccount::deposit(double cash){
  if (cash > 0){
    balance += cash;
  } else {
    throw std::range_error("Wrong amount of cash, only numbers > 0");
  }
}

void BankAccount::withdraw(double cash){
  if (cash <= 0){
    throw std::range_error("Wrong amount of withdraw, only numbers > 0");
  } else if (cash > balance) {
    throw std::range_error("Not enough money in your account.");
  } else {
    balance -= cash;
  }
}
