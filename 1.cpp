#include <iostream>
#include <fstream>
 
using namespace std;
 
 
int main()
{
cout << "Hello world!" << endl;
 
int in(0);int count(0);int sz,rez;
/* std::cin>>in; std::cin>>sz;
if (in%2 == 0){
rez = 2*sz-1 - 2*(in/2 -1);
}
else {
rez = 2*sz - 2*(in/2);
}
 
cout<<rez;
*/
srand(time(0));
int sr = rand();
cout<<"max rand = "<<RAND_MAX<<endl;
cout<<sr<<endl;
int str_sz = rand()%133 + 9;
string str_rand="";
char mas[] = "0123456789###"
"ABCDE#####FGHIJKLMNO###PQRSTUVWXYZ"
"abc##defgh######ijklmn###############opq####rstu#####vwxyz";
cout<<"mass size = "<<sizeof(mas)/sizeof(mas[0])<<endl;
//int mas_ind = rand()
for(int i = 0; i!= str_sz; ++i){
str_rand += mas[random() % (sizeof(mas)/sizeof(mas[0])-1)];
}
cout<<str_rand<<endl;
std::fstream fs("1.txt",ofstream::app);
if (!fs.is_open())
cerr<<"error creating file\n";
fs<<str_rand<<endl;
 
return 0;
}
