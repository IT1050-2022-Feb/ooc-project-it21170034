//it21168840
//W.A.N.P.M.kusumsiri
class Company 
{
  private:
   int companyID;
   char companyName[100]; 
   char description[300]; 
   int establishedYear; 
   int hotline; 
   char website[100]; 
   char field[100]; 
   char headOffAddress[200] ; 
   char postalAddress[200]; 
   int noOfPostedJobs; 
   int ProfileID;

  public:
    //Company();
		//Company(int companyID,char companyName[100],char description[300],int establishedYear,int hotline,char website[100],char field[100],char headOffAddress[200], char postalAddress[200],int noOfPostedJobs,int ProfileID);

		char *getcompanyName(); 
   	char *getdescription(); 
		char *getwebsite(); 
    char *getfield(); 
    char *getheadOffAddress() ; 
    char *getpostalAddress(); 
    int getCompanyID();
    int getEstablishedYear();
    int getHotline();
    int getnoOfPostedJobs(); 
    int getProfileID();


};

