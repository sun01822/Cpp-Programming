#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "MD. Shariar Hossain Sun" << '\n';
    cout << "Hello" << '\n';
    string phrase = "Giraffe Academy";
    string phrasesub;
    cout << phrase << '\n';
    cout << phrase.length() << '\n';
    cout << phrase[0] << '\n';
    phrase[0] = 'B';
    cout << phrase << '\n';
    cout << phrase.find("Academy", 0) << '\n';
    cout << phrase.find("y", 0) << '\n';

    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << '\n';

    return 0;
}

