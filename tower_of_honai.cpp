#include <iostream>
using namespace std;

void tower_of_honai(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "move 1 from " << a << " to " << c << endl;
        return;
    }
    tower_of_honai(n - 1, a, c, b);
    cout << "move " << n << " from " << a << " to " << c << endl;
    tower_of_honai(n - 1, b, a, c);
}
int main()
{
    tower_of_honai(3, 'x', 'y', 'z');
    return 0;
}
