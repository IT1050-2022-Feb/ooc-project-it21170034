//D.A.S.M ATHUKORALA
//IT21169076

class Profile{
	private:
		int profileID;
		char profileOwner[30];
		char visibility;
		char createDate[20];
		char Type[1];
		char lastUpdateDate[20];
		
	public:
		Profile();
	//	parameterized constructor
		Profile(int ID,char Owner[20],char visibility,char CDate,char type,char LDate);


    int  getprofileID;
		char* getprofileOwner();
		char*getvisibility;
		char*getcreateDate();
		char* getType();
		char* getlastUpdateDate();
		void* getdisplayProfile();
		
  
};