//WAY TOO LONG WORDS
/*Statement - Some words like 'localization' or 'internationalization' are very long and tiring to write repeatedly. Any word longer than 10 characters should be replaced with an abbreviation. This abbreviation consists of the first letter, the number of letters between the first and last letters, and the last letter (e.g., 'localization' → 'l10n', 'internationalization' → 'i18n'). Words with 10 or fewer characters stay unchanged. Your task is to automate this abbreviation process.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector <string> arr;
   for(int i=0;i<n;i++){
    string word;
    cin>>word;
    arr.push_back(word);  
   }

   for(auto word:arr){
    int l=word.size();
    if(l>10){
        string result = string(1, word[0]) + to_string(l - 2) + word[l - 1];
        cout<<result<<endl;
    }else{
        cout<<word<<endl;
    }
   }
    return 0;
}