//L.S.Farveen
//IT21170034
class Feedback
{
  private:
    int feedbackID;
    char name[50];
    char email[50];
    int telephone;
    char profession[50];
    char description[200];
    int profRating;
    int respRating;
    int altRating;
    int accRating;
    char createdDate[10];
    
  public:
    Feedback();
    Feedback(int feedbackID, char name[50], char email[50], int telephone, char profession[50], char description[200], int profRating, int respRating, int altRating, int accRating,char createdDate[10]);
    int getFeedbackID();
    int getTelephonr();
    int getProfRating();
    int getRespRating();
    int getAltRating();
    int getAccRating();
    char *getName();
    char *getEmail();
    char *getDescription();
    char *getProfession();
    char *getCreatedDate();   

    int deleteFeedback();
    void displayFeedbackDetails();
};