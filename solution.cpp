#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
using namespace sol830;
using namespace std;

/*takeaways
  - Input: S = "abc", shifts = [3,5,9]
    for s[0] ('a') it needs to be shifted 3 + 5 + 9 times
    for s[1] ('b') 5 + 9 times
    for s[2] ('c') 9 times
  - so we just update the shifts from [3,5,9] to
    [17,14,9] before perform the shifitting

*/

string Solution::shift(string s, vector<int> &shifts)
{
  const int n = shifts.size();
  /* lower index will accumulate
     the times needed to shift for
     the char at its position
     from the higher indexes
  */
  for (auto i = n - 1; i > 0; i--)
    shifts[i - 1] = (shifts[i - 1] + shifts[i]) % 26;

  for (auto i = 0; i < n; i++)
    s[i] = ((s[i] - 'a') + shifts[i]) % 26 + 'a';

  return s;
}
