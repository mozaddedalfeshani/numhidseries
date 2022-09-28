#include <iostream>

using namespace std;
class checker
{

public:
    int count;
};
int main()
{

    checker wrong;
    wrong.count = 0;

    // int array[1000];
    short int remove_quantity;
    short int i, in;
    short int last_value, temo, temp;
    short int arrayvaluetemp;
    int temp3;
    int check;

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
    cin >> remove_quantity;
    int array[remove_quantity + 1];
    // check the remove quantity
    int limit = last_value - in;

    // check the remove number is gone out or not!

    if (wrong.count > 3)
    {
        cout << "\n\nNote::\n  Please Enter A number which less than the substraction of last value and first value: \n\n";
        wrong.count--;
        goto input;
    }
    else if (remove_quantity < limit)
    {
        goto next;
    }
    else
    {
        cout << "limit exced" << endl;
        wrong.count++;

        goto input;
    }

    // if (userarraysize > last_value || userarraysize < in)
    // {
    //     cout << "Enter Correct Value" << endl;
    //     goto input;
    // }
next:
    cout << "Enter those number which you won't show in terminal ?" << endl;

    // Input Hide numbers

    for (short int input = 1; input <= remove_quantity;)
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

    for (short int shorting = 1; shorting <= remove_quantity; shorting++)
    {
        for (short int compare = shorting; compare <= remove_quantity; compare++)
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

    for (i = remove_quantity; i >= 1; i--)
    {
        cout << "" << array[i] << "" << endl;
    }

    cout << endl
         << " Your Answer will show belew" << endl
         << endl;

    // print fast to last number and hide deserved number

    temo = remove_quantity;
    for (i = in; i <= last_value; i++)
    {
        if (array[temo] == i)
        {
            temo--;
            cout << "Hide"
                 << endl;
            continue;
        }
        cout << "  " << i << endl;
    }
    cout << " Enter 1 for Again 2 for Break " << endl;
    int ent;
    cin >> ent;
    if (ent == 1)
    {
        goto again;
    }
    else
    {
        cout << "See You Next Time!" << endl;
    }

    return 0;
}
