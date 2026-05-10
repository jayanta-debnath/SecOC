#include "secoc.h"
#include <openssl/core_names.h>
#include <openssl/evp.h>
#include <string>
#include <vector>

int SecOC::getTxFreshness() { return fv++; }

string SecOC::macGenerate(string id, string msg, int fv) {
  std::vector<unsigned char> key = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                                    0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C,
                                    0x0D, 0x0E, 0x0F, 0x10};

  string input = id + msg + to_string(fv);

  return "";
}