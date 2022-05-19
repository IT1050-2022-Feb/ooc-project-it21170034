#include <iostream>

#include "FAQ.h"
#include "Feedback.h"
#include "User.h"
#include "Company.h"
#include "Job.h"
#include "Account.h"
#include "Seeker.h"
#include "Admin.h"
#include "Recruiter.h"
#include "Profile.h"
#include "Applicants.h"
#include "SavedJobs.h"
#include "SearchCompanies.h"
#include "AppliedJobs.h"
#include "SearchJobs.h"
#include "PostedJobs.h"

using namespace std;

int main()
{
	
  FAQ faq1;
  cout << "1 FAQ working" << endl;
  
  Feedback feedback1;
  cout << "2 Feedback working" << endl;

  User u1;
  cout << "3 User working" << endl;

	Seeker seeker1;
	cout<<"14 Seeker working"<<endl;
  
  Account acc1;
	cout<<"15 Account working"<<endl;

  Admin admin1;
  cout << "4 Admin working" << endl;

  Recruiter rec1;
  cout << "5 Recruiter working" << endl;

  Job J1;
  cout <<"6 job working"<< endl;

  Company c1;
  cout <<"7 company working"<< endl;

  Profile p1;
  cout<<"9 profile working"<<endl;
  
  SavedJobs sj1;
  cout << "8 SavedJobs working" << endl;

  Applicants a1;
  cout<<"10 applicant working "<<endl;

  SearchCompanies sc1;
  cout<<"11 searchcompanies working"<<endl;

  SearchJobs sJ1;
  cout<<"12 searchJobs working"<<endl;

	AppliedJobs aJ1;
  cout<<"13 AppliedJobs working"<<endl;
  
  PostedJobs pj1;
	cout<<"16 posted jobs working"<<endl;
  
  cout << endl << "End of file." << endl;

  return 0;
}