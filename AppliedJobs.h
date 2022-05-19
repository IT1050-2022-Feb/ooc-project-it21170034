//T.M.I.C. Thennakoon 
//IT21170966

class AppliedJobs
{
  private:
    int appliedJobsId;
    Job *appliedJobs;
    
  public:
  		AppliedJobs();
  		AppliedJobs(int appJobsID, Job *aappJobs);
		int getAppliedJobID();
   		int geAppliedJobsListID();
    	Job *getAppliedJobs();
};