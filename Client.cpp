#include "Client.h"

namespace oop
{

	Client::Client(const std::wstring &name, const std::wstring &address, const std::wstring &nationalID, const std::wstring &phone, Account *account)
	{
		  name_ = name;
	   address_ = address;
	   nationalID_ = nationalID;
	   phone_ = phone;
	   account_ = account;
	}

	void Client::setName(const std::wstring &name)
	{
	   name_ = name;
	}

	std::wstring Client::getName()
	{
	   return name_;
	}

	void Client::setAddress(const std::wstring &address)
	{
	   address_ = address;
	}

	std::wstring Client::getAddress()
	{
	   return address_;
	}

	void Client::setNationalID(const std::wstring &nationalID)
	{
	   nationalID_ = nationalID;
	}

	std::wstring Client::getNationalID()
	{
		   return nationalID_;
	}

	void Client::setPhone(const std::wstring &phone)
	{
	   phone_ = phone;
	}

	std::wstring Client::getPhone()
	{
	   return phone_;
	}

	void Client::setAccount(Account *account)
	{
	   account_ = account;
	}

	Account *Client::getAccount()
	{
	   return account_;
	}

	std::wstring Client::toString()
	{
//JAVA TO C++ CONVERTER TODO TASK: There is no C++ equivalent to 'toString':
		return L"Client info [ Name: " + name_ + L" || Address: " + address_ + L" || National ID: " + nationalID_ + L" || Phone: " + phone_ + L" || Account: " + account_->toString() + L" ]";
	}
}
