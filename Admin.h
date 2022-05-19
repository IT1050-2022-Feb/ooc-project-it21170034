//T.M.T.C.Tennakoon
//IT21171338
class Admin
{
  private:
    int adminID;
    char name[50];
    char email[50];
    int telephone;
    
  public:
    Admin();
    Admin(int adminID, char name[50], char email[50], int telephone);

    int getadminID();
    char *getName();
    char *getEmail();
    int getTelephone();
  
    void displayAdmindetails();

};