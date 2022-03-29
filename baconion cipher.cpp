//CS112: Structured Programming , Assignment 2
//NAME : Yousef Ehab Fahmy Ibrahim
//ID : 20210464
//Cipher 4 : Baconian Cipher

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

string encrypt(string pt){
  string key[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
  string value[26]={"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab"};

  int i,j;
  string encpt1="";
   for(i=0;i<pt.length();i++){
       for(j=0;j<26;j++){
           if(pt.substr(i,i+1) == key[j]){
                encpt1 = encpt1 + value[j];
            }
       }
   }
   return encpt1;
}
string decrypt(string encpt){
string key[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y", "Z"};
string value[26]={"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab"};

int i,j;
string decpt1=" ";
for(i=0;i<encpt.length();i == i+5)
{
    if(key[j] == encpt.substr(i,i+5))
    {
        decpt1 = decpt1 + value[j];
    }
}
return decpt1;
}
int main(){
    int choice;
    string pt,encpt,decpt;
    cout<<"Enter (1) to Encrypt Enter 2 to Decrypt Enter (3) to End the program:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the plaintext :";
        cin>>pt;
        encpt = encrypt(pt);
        cout<<"Encrypt text :"<<encpt;
        return 0;
    
    case 2:
        cout<<"Enter the text to Decrypt :";
        cin>>encpt;
        decpt = decrypt(encpt);
        cout<<"Decrypt text :"<<decpt;
        return 0;

    case 3:
        cout<<"The Program closed.";
        return 0;

    default:
        cout<<"Wrong choice choose agin!!";
        return 0;

    }
}