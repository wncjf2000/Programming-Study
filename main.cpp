#include <iostream>
#include <algorithm>

using namespace std;

  struct str{
	  int x;
	  int y;
  };

  str strs[100000];
  bool check(str a, str b){
	  if(a.x == b.x)
	  return a.y < b.y;
	  else
	  return a.x < b.x;
  }
int main(int argc, char ** argv) {
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> strs[i].x >> strs[i].y;
	}
	sort(strs, strs+n, check);
  	for(int i = 0;i<n;i++)
    cout << strs[i].x << " " << strs[i].y << "\n";
  return 0;
}