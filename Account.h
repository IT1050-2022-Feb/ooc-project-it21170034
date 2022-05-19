//IT21170966
//T.M.I.C. Thennakoon 


class Account
{
	private:
    int accountID;
		char username[20];
		char email[50];
		char password[20];
		char usertype;

	public: 
  	Account();
    Account(char username[20],char email[50], char password[20], char usertype);

    int getAccountID();
    char *getUsername();
    char *getEmail();
    char *getPassword();
    char getUserType();

    int deleteAccount();
   	int Login(char username[20], char password[20]);
    char *resetPassword(char oldPassword);
    
};