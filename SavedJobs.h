//L.S.Farveen
//IT21170034

class SavedJobs
{
  private:
    int savedJobsId;
    Job *savedJobs;

  public:
  	SavedJobs();
  	SavedJobs(int savedJobsIDs, Job *sJobs);
	int getSavedJobsListID();
    Job *getSavedJobs();
};