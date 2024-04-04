#include <stdio.h>

int main(){

    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue; //break;
        }
        printf("%d\n", i);
    }
    return 0;
}

// Continue = skips rest of code & forces the next iteration of the loop
// Break = exits a loop/switch