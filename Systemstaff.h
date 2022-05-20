#include <string>
using namespace std;

class System_Staff
{
private:
	string S_ID;
  string S_First_name;
  string S_Last_name;
  string S_address;
  string S_role;
  string S_contact_No;
  string S_DOB;
public:
  System_Staff();//constructor
  void setSystemstaff(string SID, string SFirst_name, string SLast_name, string Saddress, string Srole, string Scontact_No, string SDOB);
  void DisplaySystemstaffDetails();
  void EditSystemstaff();
  ~System_Staff();//destructor
};






