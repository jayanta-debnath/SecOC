#include <string>

using namespace std;

class SecOC {
public:
  int getTxFreshness();
  string macGenerate(string id, string msg, int fv);

private:
  int fv = 0;
};