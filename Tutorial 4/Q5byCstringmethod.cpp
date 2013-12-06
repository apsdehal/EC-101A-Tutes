#include <iostream>
using namespace std;
int main(){int i,m,l=0,k=0;
	char main[100];
	char c;
	char word[10];
	cout<<"Enter the string:";
	cin.getline(main,100);
	cout<<"Enter the character:";
	cin>>c;
	for(i=0;i>=0;i++)
	if(main[i]==c){cout<<"Character "<<c<<" is present at "<<i+1<<" place"<<endl;break;
	}
	cout<<"Enter the word:";
	cin.getline(word,10);
	while(main[k]!='\0')
      {if(main[k]==word[l])
	  {int m=k;
        while(word[l]!='\0')
                   {
                   if(word[l]!=main[m])
				   break;
				   m++;l++;
                  }if(word[l]=='\0')
				  cout<<"found "<<word<<" at position "<<k+1<<endl;
          }
k++;
      }

	
	
	
	
	
	cin.ignore();
	cin.get();
	return 0;
}
