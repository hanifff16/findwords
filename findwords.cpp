#include <iostream>
#include <cstring>
#include <algorithm>

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
 return 0;
}

bool searchHorizontal(char input[]){
	char *temp;
	
	for (int i = 0; i < 15; i++)
    {
        temp = strstr(words[i], input);
        
	    if(temp != NULL){
	        return true;
	    }
    }
    
    return false;
}
bool searchReverseHorizontal(char input[]){ 
	char *temp;
	char kata[15]; 
	
	for (int i = 0; i < 15; i++)
    {
    	for(int j = 0; j < 15; j++){
	    	kata[j] = words[i][j]; 
		}
		
	    reverse(kata, kata + strlen(kata)); 
	    temp = strstr(kata, input); 
        
	    if(temp != NULL){ 
	        return true; 
	    }
    }
    
    return false;
}
bool searchVertical(char input[]){
	char *temp;
	char kata[15];
	
	for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            kata[j] = words[j][i];
        }
        
        temp = strstr(kata, input);

        if(temp != NULL){
	        return true;
	    }
    }
    
    return false;
}
