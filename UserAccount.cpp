#include "UserAccount.h"

UserAccount::UserAccount(){}
UserAccount::~UserAccount(){}
UserAccount::UserAccount(String^ username, String^ password)
{
	this->username = username;
	this->password = password;
}