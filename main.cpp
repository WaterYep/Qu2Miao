#include <iostream>
#include "stack.h"
#include <cctype>

int main() {
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please input A, P, Q\n";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        switch(ch)
        {
            case 'A':
            case 'a':
                cout << "Enter a po number to add:";
                cin >> po;
                if(st.isfull())
                    cout << "Stack is full\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "stack is empty \n";
                else
                {
                    st.pop(po);
                    cout << "PO #" << po << " Popped\n";
                }
                break;
        }
        cout << "Input Q to quit\n";
    }
    cout << "Bye!\n";
    return 0;
}
