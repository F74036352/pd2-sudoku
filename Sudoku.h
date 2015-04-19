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
int compare(int,int,int);
void Solverec();
int Solve();
private:
int ans;
int array[12][12];
int solve[12][12];
int map[12][12];
int mapans[12][12];
};
