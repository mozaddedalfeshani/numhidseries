#include <iostream>

using namespace std;
int main()
{

    // int array[1000];
    short int userarraysize;
    short int i, in;
    short int last_value, temo, temp;
    short int arrayvaluetemp;
    int temp3;

    int start, arraydtector;

again:
    cout << " Work in progress ! Don't upload any number which little than initial value & minus sign" << endl;

    cout << "Enter what is the initial value" << endl;
    cin >> in;

    cout << "What is the last value ? " << endl;
    cin >> last_value;

input:
    cout << "How Many Number You want to remove from series ?"
         << endl;
    cin >> userarraysize;
    int array[userarraysize + 1];
    if (userarraysize > last_value || userarraysize < in)
    {
        cout << "Enter Correct Value" << endl;
        goto input;
    }

    cout << "Enter those number which you won't show in terminal ?" << endl;

    // Input Hide numbers

    for (short int input = 1; input <= userarraysize;)
    {
        cin >> temp3;
        if (temp3 >= in && temp3 <= last_value)
        {
            array[input] = temp3;
            input++;
        }
        else
        {
            cout << " Your entered number out of range! " << endl;
        }
    }

    // shorting Input hidden number

    for (short int shorting = 1; shorting <= userarraysize; shorting++)
    {
        for (short int compare = shorting; compare <= userarraysize; compare++)
        {
            if (array[shorting] < array[compare])
            {
                temp = array[shorting];
                array[shorting] = array[compare];
                array[compare] = temp;
            }
        }
    }

    // print array shorting number

    cout << "Your deserved hidden number , by serially:\n"
         << endl;

    for (i = userarraysize; i >= 1; i--)
    {
        cout << "\033[0;32m" << array[i] << "\033[0m" << endl;
    }

    cout << endl
         << " Your Answer will show belew" << endl
         << endl;

    // print fast to last number and hide deserved number

    temo = userarraysize;
    for (i = in; i <= last_value; i++)
    {
        if (array[temo] == i)
        {
            temo--;
            cout << "\033[1;31mHide\033[0m\n"
                 << endl;
            continue;
        }
        cout << "  " << i << endl;
    }
    cout << " \033[0;36mEnter 1 for Again 2 for Break \033[0m" << endl;
    int ent;
    cin >> ent;
    if (ent == 1)
    {
        goto again;
    }
    else
    {
        cout << "\033[0;32mSee You Next Time! \033[0m" << endl;
    }

    return 0;
}
