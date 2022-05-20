#include "Systemstaff.h"

class Moderator: public System_Staff
{
public:
  void AcceptReservation();
  void CancelReservation();
  void VerifyReservation();
};