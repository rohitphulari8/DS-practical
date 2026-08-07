#include <iostream>

using namespace std;

int main() {
    int a[5] = {10, 20, 5, 40, 15};
    int *p = a;
    int max = *p;

    for (int i = 1; i < 5; i++)
	{
        if (*(p + i) > max)
            max = *(p + i);
    }

    cout << "Maximum = " << max;
    
}

