// 61A


#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string sub, hub;
public:
    void ones_compliment_of_binary(void);
    void read(void);
    void check_binary(void);
    void display_bin_num(void)
    {
        cout <<sub<< endl;
    }
};
void binary::check_binary(void)
{
    for (int i = 0; i < sub.length(); i++)
    {
        if (sub.at(i) != '0' && sub.at(i) != '1')
        {
            exit(0);
        }
    }
    for (int i = 0; i < hub.length(); i++)
    {
        /* code */
        if (hub.at(i) != '0' && hub.at(i) != '1')
        {
            exit(0);
        }
    }
}
void binary::read(void)
{
    cin >> sub;
    cin >> hub;
}
void binary::ones_compliment_of_binary(void)
{
    if(sub.size()==hub.size()){ 
    for (int i = 0; i < sub.length(); i++)
    {
        if (sub.at(i) == hub.at(i))
        {
            sub.at(i) = '0';
        }
        else
        {
            sub.at(i) = '1';
        }
    }}
    else
    {
        exit(0);
    }  
}
int main()
{
    binary a1;
    a1.read();
    a1.check_binary();
    a1.ones_compliment_of_binary();
    a1.display_bin_num();
    return 0;
}