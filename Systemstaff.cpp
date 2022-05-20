#include "Systemstaff.h"
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

System_Staff::System_Staff(){
  S_ID = "";
  S_First_name = "";
  S_Last_name = "";
  S_address = "";
  S_role = "";
  S_contact_No = "";
  S_DOB = "";
};

void System_Staff::setSystemstaff(string SID, string SFirst_name, string SLast_name, string Saddress, string Srole, string Scontact_No, string SDOB){
  S_ID = SID;
  S_First_name = SFirst_name;
  S_Last_name = SLast_name;
  S_address = Saddress;
  S_role = Srole;
  S_contact_No = Scontact_No;
  S_DOB = SDOB;
};

void System_Staff::DisplaySystemstaffDetails(){
  
};

void System_Staff::EditSystemstaff(){
  
};