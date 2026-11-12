/*• Task: Model a vending machine using enum states IDLE, COIN_INSERTED, DISPENSE,
and OUT_OF_STOCK. Process commands and display state transitions.*/

#include<stdio.h>

enum State {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

void displaystate(enum State s)
{
    switch(s)
    {
        case IDLE:
            printf("IDLE");
            break;
        case COIN_INSERTED:
            printf("COIN_INSERTED");
            break;
        case DISPENSE:
            printf("DISPENSE");
            break;
        case OUT_OF_STOCK:
            printf("OUT_OF_STOCK");
            break;
    }
}

enum State nextState(enum State state, int command, int *stock)
{
    if (command == 1) // Insert Coin
    {
        if (state == IDLE)
        {
            printf("Valid Transition: Coin accepted.\n");
            return COIN_INSERTED;
        }
        else if (state == OUT_OF_STOCK)
        {
            printf("Invalid Transition: Machine is out of stock. Coin returned.\n");
            return OUT_OF_STOCK;
        }
        else
        {
            printf("Invalid Transition: Coin already inserted.\n");
            return state;
        }
    }
    else if (command == 2) // Select Item
    {
        if (state == COIN_INSERTED)
        {
            printf("Valid Transition: Dispensing item...\n");
            (*stock)--;

            if (*stock > 0)
            {
                printf("Valid Transition: Item dispensed. Returning to IDLE.\n");
                return IDLE;
            }
            else
            {
                printf("Valid Transition: Last item dispensed. Machine is now OUT_OF_STOCK.\n");
                return OUT_OF_STOCK;
            }
        }
        else if (state == OUT_OF_STOCK)
        {
            printf("Invalid Transition: Cannot select item, machine is out of stock.\n");
            return OUT_OF_STOCK;
        }
        else
        {
            printf("Invalid Transition: Please insert a coin before selecting.\n");
            return IDLE;
        }
    }
    else if (command == 3) // Refill
    {
        if (state == OUT_OF_STOCK || state == IDLE)
        {
            *stock = 2;
            printf("Valid Transition: Machine refilled (Stock = %d).\n", *stock);
            return IDLE;
        }
        else
        {
            printf("Invalid Transition: Cannot refill while a coin is inserted.\n");
            return state;
        }
    }
    else
    {
        printf("Invalid Command!\n");
        return state;
    }
}

int main()
{
    enum State current = IDLE;
    int stock = 2;
    int cmd;

    while (1)
    {
        printf("\nCurrent State: ");
        displaystate(current);
        printf(" | Stock: %d\n", stock);

        printf("Commands: 1. Insert Coin  2. Select Item  3. Refill  4. Exit\n");
        printf("Enter command: ");
        scanf("%d", &cmd);

        if (cmd == 4)
        {
            printf("Shutting down vending machine.\n");
            break;
        }

        enum State prev = current;
        current = nextState(current, cmd, &stock);

        printf("State Transition: ");
        displaystate(prev);
        printf(" -> ");
        displaystate(current);
        printf("\n");
    }

    return 0;
}
