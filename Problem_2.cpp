#include <iostream>
#include <string>
using namespace std;

int getValue(char c);

int main()
{
   int m,  n;
   string str;
   int result_1 = 0, result_2 = 0, temp_1, temp_2;

    cin >> n;
    m = n -1;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        temp_1 = getValue(str[i]);
        temp_2 = getValue(str[m]);

        m--;

        result_1 = temp_1 + result_1;
        result_2 = temp_2 + result_2;
    }

    cout << result_1 + result_2 << endl;

    return 0;
}
int getValue(char c)
{
    int x;

    switch (c)
    {
        case 'a':
            x = 97;
            break;
        case 'b':
            x = 98;
            break;
        case 'c':
            x = 99;
            break;
        case 'd':
            x = 100;
            break;
        case 'e':
            x = 101;
            break;
        case 'f':
            x = 102;
            break;
        case 'g':
            x = 103;
            break;
        case 'h':
            x = 104;
            break;
        case 'i':
            x = 105;
            break;
        case 'j':
            x = 106;
            break;
        case 'k':
            x = 107;
            break;
        case 'l':
            x = 108;
            break;
        case 'm':
            x = 109;
            break;
        case 'n':
            x = 110;
            break;
        case 'o':
            x = 111;
            break;
        case 'p':
            x = 112;
            break;
        case 'q':
            x = 113;
            break;
        case 'r':
            x = 114;
            break;
        case 's':
            x = 115;
            break;
        case 't':
            x = 116;
            break;
        case 'u':
            x = 117;
            break;
        case 'v':
            x = 118;
            break;
        case 'w':
            x = 119;
            break;
        case 'x':
            x = 120;
            break;
        case 'y':
            x = 121;
            break;
        case 'z':
            x = 122;
            break;
    }
    return x;
}
