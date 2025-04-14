#include <iostream>
#include <string>
using namespace std;

bool replaceString(string& s, const string&oldSubStr,const string&newSubStr){
    bool isReplaced = false;
    int currPosition =0;
    while(currPosition < s.length()){
        int pos = s.find(oldSubStr, currPosition); //this iterates until it finds the pos
        if(pos == string::npos){ //the npos is a -1 under the hood (this means if we dont find anything)
            return isReplaced;
        }
        else{
            s.replace(pos, oldSubStr.length(), newSubStr);
            currPosition = pos + newSubStr.length();
            isReplaced = true;
        }
    }
    return isReplaced;
}

int main(){
    string s, oldSubStr, newSubStr;
    cout << "Enter string s, oldSubStr, newSubStr: ";
    cin >> s>> oldSubStr >> newSubStr;

    bool isReplaced = replaceString(s, oldSubStr, newSubStr);

    if(isReplaced){
        cout << "the replaced string is " << s << endl;
    }
    else{
        cout << "No matches. " << endl;
    }
    return 0;
}

