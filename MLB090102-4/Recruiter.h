//T.M.T.C.Tennakoon
//IT21171338
class Recruiter : public User{
  private:
    int recruiterID;
    int companyID;
    char companyName[50];
    char position[20];
    
  public:
    int getrecruiterID();
    Recruiter getrecruiter();
    void displayRecruiterDetails();
};