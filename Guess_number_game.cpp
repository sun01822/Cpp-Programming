#include <bits/stdc++.h>
using namespace std;

int tried;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(0));
    int n = rand() % 101;
    int a = 5, input;
    printf("\t\t\t******* Guess the Number Game *******\n\n");
    int low = 0, high = 100;
    while (a--)
    {
        tried++;
        printf("Tried: %d\n", tried);
        printf("Enter a number from %d to %d: ", low, high);
        cin >> input;
        if (input < 0 || input > 100)
            printf("\n\t\t> You enter wrong input\n\n");
        else
        {
            if (input == n)
            {
                printf("\n\t\t> Congratulation!!!\n");
                if (tried == 1)
                    printf("\t\t> You guessed the number in first try....\n\n");
                else
                    printf("\t\t You gussed the number in %d tries\n\n", tried);
                return 0;
            }

            else if (input < n)
            {
                low = input + 1;
                if (tried <= 4)
                    printf("\n\t\t> Bigger than enter number\n\n");
            }

            else
            {
                high = input - 1;
                if (tried <= 4)
                    printf("\n\t\t> Smaller than enter number\n\n");
            }
        }
    }
    printf("\n\t\t> You failed to find the number in 5 tries\n\n\n");

    return 0;
}