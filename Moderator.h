//it21168840
//W.A.N.P.M.kusumsiri

class moderator
{
  private:
   int moderatorID; 
   char email[20]; 
   char mNic[20]; 
   int mobileNum; 
   char firstName[20];  
   char lastName[20]; 
   char password[20];

  public:
    Moderator();
    Moderator(int moderatorID,char email[20],char mNic[20],int mobileNum, char firstName[20], char lastName[20], char password[20]);

	int getmoderatorID(); 
	char *getemail(); 
  char getmNic; 
  char *getfirstName();  
  char *getlastName(); 
  char *getpassword();
  int getmobileNum(); 
};