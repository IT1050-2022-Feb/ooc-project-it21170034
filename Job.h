//D.A.S.M ATHUKORALA
//IT21169076
class Job 
{
  private:
    int jobID;
    char location[100];
    char certifications[300];
    char description[300];
    char companyName[100]; 
    char jobType[50];
    float salary; 
    char requiredSkills[300];
    char experiance[300]; 
    char category[100];
    char title[100]; 
    char qualifications[300]; 
    char visibility; 

  public : 
    Job();
    Job(int ID,char location[100],char certifications[300],char description[300],char cName[100], char jobType[50],float salary, char requiredSkills[300],char experiance[300], char category[100],char title[100], char qualifications[300], char visibility); 
    
    Job postJob();
    Job saveJob();

    int getJobID();
    char *getlocation();
    char *getcertifications();
    char *getdescription();
    char *getcompanyName(); 
    char *getjobType();
    float getsalary(); 
    char *getrequiredSkills();
    char *getexperiance(); 
    char *getcategory();
    char *gettitle(); 
    char *getqualifications(); 
    char *getvisibility();
  
    void displayJobDetails();

};