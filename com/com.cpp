#include "com.h"

int Com::transmit(string id, string msg) {
  int fv = secoc.getTxFreshness();
  string mac = secoc.macGenerate();

  string pack = packMessage(id, msg, fv, mac);
  uds.send(pack);

  return 0;
}

string Com::packMessage(string id, string msg, int fv, string mac) {
  return "";
}