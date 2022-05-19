//L.S.Farveen
//IT21170034
class FAQ
{
  private:
    int faqID;
    char question[200];
    char answer[1000];
    char askedDate[10];

  public:
    FAQ();
    FAQ(int faqID, char question[200], char answer[1000], char askedDate[10]);
    int getFAQID();
    char *getQuestion();
    char *getAnswer();
    char *getAnsweredDate();

    FAQ updateFAQ(); 
    int deleteFAQ();
    FAQ createFAQ();
    void displayFAQDetails();
}; 
  