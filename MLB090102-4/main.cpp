#include <iostream>
#include "FAQ.h"
#include "Feedback.h"
#include "SavedJobs.h"
#include "SearchCompanies.h"
#include "User.h"
#include "Job.h"
#include "Account.h"
#include "AppliedJobs.h"
#include "Seeker.h"
#include "Admin.h"
#include "Recruiter.h"
#include "SearchJobs.h"
#include "profile.h"
#include "Applicant.h"
#include "Company.h"



using namespace std;

int main()
{
  FAQ faq1;
  cout << "1 FAQ working" << endl;
  
  Feedback feedback1;
  cout << "2 Feedback working" << endl;
  
  SavedJobs sj1;
  cout << "3 SavedJobs working" << endl;

  User u1;
  cout << "4 User working" << endl;

  Admin admin1;
  cout << "5 Admin working" << endl;

  Recruiter rec1;
  cout << "6 Recruiter working" << endl;

  Job J1;
  cout <<"7 job working"<< endl;

  Profile p1;
  cout<<"8 profile working"<<endl;

  Applicants a1;
  cout<<"9 applicant working "<<endl;

  SearchCompanies sc1;
  cout<<"10 searchcompanies working"<<endl;

  SearchJobs sJ1;
  cout<<"11 searchJobs working"<<endl;

	AppliedJobs aJ1;
  cout<<"12 AppliedJobs working"<<endl;

	Seeker seeker1;
	cout<<"13 Seeker working"<<endl;
	
  Account acc1;
	cout<<"14 Account working"<<endl;

  
  cout << endl << "End of file." << endl;


  
  return 0;
}