#include<iostream>
#include<cstdlib>
#include<fstream>
#include<ctime>
#include<stdlib.h>
#include<math.h>
using namespace std;
class Sudoku
{
public:
int GiveQuestion();
int ReadIn();
int Solve();
private:
int array[12][12];
int solve[12][12];
};
