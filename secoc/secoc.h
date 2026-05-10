#include <string>

using namespace std;

class SecOC {
public:
  int getTxFreshness();
  string macGenerate();

private:
  int fv = 0;
};