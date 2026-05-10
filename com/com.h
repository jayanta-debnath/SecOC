#include "secoc.h"
#include "uds.h"
#include <string>

using namespace std;

class Com {
public:
  int transmit(string id, string msg);

private:
  SecOC secoc;
  Uds uds;
  string packMessage(string id, string msg, int fv, string mac);
};