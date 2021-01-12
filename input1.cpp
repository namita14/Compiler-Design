#include<bits/stdc++.h> 
using namespace std; 
  
void splitString(string str) 
{ 
    string alpha, num, special; 
    cout << "Enter String: ";
	cin >> str ; // get user input from the keyboard	
    for (int i=0; i<str.length(); i++) 
    { 
        if (isdigit(str[i])) 
            num.push_back(str[i]); 
        else if((str[i] >= 'A' && str[i] <= 'Z') || 
                (str[i] >= 'a' && str[i] <= 'z')) 
            alpha.push_back(str[i]); 
        else
            special.push_back(str[i]); 
    } 
  
    cout << "Alphabets :"<< alpha << endl; 
    cout << "Numbers: "<< num << endl; 
    cout << "Special Characters: "<< special << endl; 
} 

// Driver code 
int main() 
{ 
    string str = ""; 
    splitString(str); 
    return 0; 
}

  

