#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int c=0;
    string a,b;
    b="hackerrank";

    if(s.length()<b.length()){
        a="NO";
        return a;
    }
    else{
        for(int i=0;i<s.length();i++){
            if(b[c]==s[i]){
                c++;
            }
        }
        if(c==b.length()){
            a="YES";
            return a;
        }
        else{
            a="NO";
            return a;
        }
        

    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
