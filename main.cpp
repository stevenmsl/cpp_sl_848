#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol830;

/*
Input: S = "abc", shifts = [3,5,9]
Output: "rpl"
Explanation:
We start with "abc".
After shifting the first 1 letters of S by 3, we have "dbc".
After shifting the first 2 letters of S by 5, we have "igc".
After shifting the first 3 letters of S by 9, we have "rpl", the answer.
*/
tuple<string, vector<int>, string>
testFixture1()
{
  return make_tuple("abc",
                    vector<int>{3, 5, 9}, "rpl");
}

void test1()
{
  auto f = testFixture1();

  Solution sol;

  cout << "Expect to see " << get<2>(f) << ": " << sol.shift(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  // testMaster();
  return 0;
}