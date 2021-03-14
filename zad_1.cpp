#include <iostream>

using namespace std;

int main()
{
    double sum, maximum, minimum, new_number;
    int count = 0;
    bool check=false;

    cout<<"Enter sequence of numbers. To end the sequence enter something thats not a number (for instance a letter)"<<"\n";
    do
    {
        cin >> new_number;
        if (cin.fail())
        {
            check = true;
        }
        else
        {
            if (count == 0)
            {
                sum = new_number;
                maximum = new_number;
                minimum = new_number;
            }
            else
            {
                sum += new_number;
                maximum = max(maximum, new_number);
                minimum = min(minimum, new_number);

            }
            count ++;
        }
    } while (check == false);
    if (count == 0)
    {
        cout<<"Recived no number"<<"\n";
    }
    else
    {
        cout<<sum/count<<" = avarage"<<"\n";
        cout<<maximum<<" = maximum"<<"\n";
        cout<<minimum<<" = minimum"<<"\n";
    }
return 0;
}