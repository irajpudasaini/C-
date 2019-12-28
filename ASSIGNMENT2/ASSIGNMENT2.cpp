#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <map>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "Trader.h"
#include "Auctioneer.h"
#include "Simulator.h"


int main() {
	Simulator s;
	s.run();
	system("pause");
	return 0;
}