//IT21171338
//T. M. T. C. Tennakoon

class SearchJobs
{
	private:
   int searchJobsId;
   Job *searchedJobs;

  public :
  	SearchJobs();
  	SearchJobs(int sJobsID, Job *sJobs);
    int getsearchJobsList();
    Job *getsearchedJobs();
};