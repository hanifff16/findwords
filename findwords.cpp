#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                               "aaunttmmhfoodnb",
                               "jlwcqldzmpmvdmr",
                               "asagmquwvvbsohi",
                               "bwplotanadtpgnc",
                               "rewngodjcpnatnk",
                               "eeotwosbqharrsa",
                               "azcgeswewnaknpb",
                               "dinnerqodlwdcar",
                               "onopkwmparktzcc",
                               "qbfrogmamwpweey",
                               "lqzqnnmrzjjsclg",
                               "mosgzczetdbooto",
                               "pdcrzmsngrdnrpz",
                               "ohnkzwaterjgtra"};

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);
bool searchHorizontal(char *);


int main()
{
    char word[16];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    or(int m=0; m<xy; m++) {
          nilai[m]=0;
          int pk = vertikal[m], x=0;
          bool ada[pk], result;

          for(int r = 0 ; r < 15 ; r++){
              for(int a=0; a<=(15-pk);
              a++) {
                  for(int b=a; b<=a+(pk-1);
                  b++) {
                      if(((Y+r)+b) == kata[m][x]) ada[x] = 1;
                      else ada[x] = 0;
                      x++;
                  }
    return 0;
}
