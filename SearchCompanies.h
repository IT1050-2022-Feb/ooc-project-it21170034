//D.A.S.M ATHUKORALA
//IT21169076

class SearchCompanies
{
	private:
	   int searchCompaniesId;
	   Company *searchCompanies;

  	public :
  		SearchCompanies();
  		SearchCompanies(int sCompId(), Company *searchComps);
	    int getSearchedCompaniesList();
	    Company *getSearchedCompanies();
};