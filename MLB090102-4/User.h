//L.S.Farveen
//IT21170034

class User
{
  protected:
    int userID;
    char name[20];
    char address[100];
    char dob[10];
    char email[50];
    char gender;
    int phoneNum;

  public:
    //User();
    //User(int userID, char name[20], char address[100], char dob[10], char email[50], char gender, int phoneNum);
    int getUserID();
    User getUser();
    void displayUserDetails();
};