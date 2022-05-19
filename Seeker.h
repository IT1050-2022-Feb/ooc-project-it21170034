//T.M.I.C. Thennakoon 
//IT21170966
class Seeker : public User{
  private:
    int seekerID;
    Profile seekerProfile;
  
  public:
  	Seeker();
  	Seeker(int sID, Profile seekProfile);
    int getseekerID();
    Profile getSeekerProfile();
    void displaySeekerDetails();
};