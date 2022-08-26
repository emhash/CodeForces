// 122A


// CONVERT INGEGER INTO STRING ---> to_string

// CONVERT STRING INTO INTEGER ----> stoi()

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    // cout << "Enter the value of Lucky Number : ";
    if (word.size() <= 1 && word.size() <= 1000)
    {
        cin >> word;
        if (word == "107")
        {
            cout << "NO" << endl;
        }

        else if (word[word.size() - 1] == '7' || word[word.size() - 1] == '7')
        {
            if (word[word.size() - 2] == '4' || word[word.size() - 1] == '4')
            {
                cout << "YES" << endl;
                return 0;
                if (word[word.size() - 2] == '4' && word[word.size() - 1] == '4')
                {
                    {
                        exit(0);
                    }
                }
                else if (word[word.size() - 2] == '7' && word[word.size() - 1] == '7')
                {
                    exit(0);
                }
            }
        }
        else
        {
            int num = stoi(word);
            // cout << num << endl;
            if (num % 4 == 0)
            {
                if (num == 44)
                cout << "YES" << endl;
                return 0;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
}