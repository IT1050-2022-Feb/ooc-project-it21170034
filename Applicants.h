//D.A.S.M ATHUKORALA
//IT21169076

class Applicants 
{
private :
  int applicantsID;
  Seeker *aplicants;

public :
  Applicants();
		//parameterized constructor
	Applicants(int appID, Seeker * applicantss);
	int getApplicantsID();
	Seeker *getApplicants();

};