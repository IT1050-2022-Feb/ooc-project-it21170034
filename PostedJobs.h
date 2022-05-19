//it21168840
//W.A.N.P.M.kusumsiri

class PostedJobs
{
	private:
	  int postedJobsId;
	  Job *postedJobs;

	public:
		PostedJobs();
		PostedJobs(int pJobsID, Job *pJobs);
		int getpostedJobsId();
    Job *getPostedJobs();
};

