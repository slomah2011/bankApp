#pragma once

#include <string>

namespace oop
{
	class Client
	{
	private:
		std::wstring name_;
		std::wstring address_;
		std::wstring nationalID_;
		std::wstring phone_;
		//Account *account_;

	 /**
	     * Constructs a bank account with a name, an address, a national ID, a phone and an account
	     * @param name the name_
	     * @param address the address_
	     * @param nationalID the nationalID_
	     * @param phone the phone_
	     * @param account the account_
	     **/
	public:
		virtual ~Client()
		{
			delete account_;
		}

		Client(const std::wstring &name, const std::wstring &address, const std::wstring &nationalID, const std::wstring &phone, Account *account);
			/**
			 *set the name of client
			 * @param name the name_
			 */
		virtual void setName(const std::wstring &name);
	   /**
	     * Get the name of client
	     *
	     * @return the name_
	     */
		virtual std::wstring getName();
			/**
			 * set the address of client
			 * @param address the address_
			 */
		virtual void setAddress(const std::wstring &address);
	 /**
	     * Get the address of client
	     *
	     * @return the address_
	     */
		virtual std::wstring getAddress();
			/**
			 * set the national ID of client
			 * @param nationalID  nationalID_
			 */
		virtual void setNationalID(const std::wstring &nationalID);
	/**
	     * Get the nationalID of client
	     *
	     * @return the nationalID_
	     */
	virtual std::wstring getNationalID();
		/**
		 * set the phone of client
		 * @param phone  yhe phone_
		 */
		virtual void setPhone(const std::wstring &phone);
		/**
		 * Get the phone of client
		 *
		 * @return the phone_
		 */
		virtual std::wstring getPhone();
			/**
			 * set the account of client
			 * @param account the account_
			 */
		virtual void setAccount(Account *account);
		/**
		 * Get the account of client
		 *
		 * @return the account_
		 */

		virtual Account *getAccount();
		   /**
				*
				* @return meaningful string representation of the client information
				*/
		virtual std::wstring toString();
	};

}
