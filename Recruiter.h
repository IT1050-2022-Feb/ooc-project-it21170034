//T.M.T.C.Tennakoon
//IT21171338
class Recruiter : public User{
  private:
    int recruiterID;
    int companyID;
    char companyName[50];
    char position[20];
    
  public:
  	Recruiter();
  	Recruiter(int rID,int cId, char companyy[50], char positionn[20]);
    int getrecruiterID();
    void displayRecruiterDetails();
};