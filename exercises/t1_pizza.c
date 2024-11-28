#include <stdio.h>
#include <conio.h>

#define MAX_PIZZA_ORDER 10

// last enum NR_PIZZA_TYPES operates as counter
enum pizza_type {
    pizza_margherita,
    salami_classico,
    funghi,
    hawaiian_dream,
    NR_PIZZA_TYPES
};

// last enum NR_PIZZA_SIZES operates as counter
enum pizza_size {
    small,
    medium,
    large,
    extra_large,
    xxl,
    party_size,
    NR_PIZZA_SIZES
};

const char *pizza_type_names[] = {"Pizza Margherita", "Salami Classico", "Funghi", "Hawaiian Dream"};
const char *pizza_size_names[] = {"Small", "Medium", "Large", "Extra Large", "XXL", "Party Size"};

struct pizza_order
{
    enum pizza_type pizza;
    enum pizza_size size;
};

struct pizza_order all_pizza_orders[MAX_PIZZA_ORDER];

int order_count;

// function to choose pizza type, returns enum of pizza_type
enum pizza_type choose_pizza_type() {
    printf("\nAvailable pizza types: \n");

    // size of entire array / size of first pointer = length of array
    // not necessary if NR_PIZZA_TYPES exists in enum
    int av_types = sizeof(pizza_type_names) / sizeof(pizza_type_names[0]);

    // show available options
    for (int i = 0; i < NR_PIZZA_TYPES; i++)
    {
        printf("%d. %s \n",i, pizza_type_names[i]);
    }
    
    int ordered_type;

    // ask for unput until a valid input is given
    do
    {
        printf("Your choice: ");
        scanf_s("%d", &ordered_type);
    } while (ordered_type < 0 || ordered_type > NR_PIZZA_TYPES);

    return ordered_type;
}

// function to choose pizza size, returns enum of pizza_size
enum pizza_size choose_pizza_size() {
    printf("\nAvailable pizza sizes: \n");

    // size of entire array / size of first pointer = length of array
    // not necessary if NR_PIZZA_SIZES exists in enum
    int av_sizes = sizeof(pizza_size_names) / sizeof(pizza_size_names[0]);

    // show available options
    for (int i = 0; i < NR_PIZZA_SIZES; i++)
    {
        printf("%d. %s \n",i, pizza_size_names[i]);
    }
    
    // ask for unput until a valid input is given
    int ordered_size;
    do
    {
        printf("Your desired size: ");
        scanf_s("%d", &ordered_size);
    } while (ordered_size < 0 || ordered_size > NR_PIZZA_SIZES);
    
    return ordered_size;
}


int main() {
    // show welcome message
    printf("Hello! Welcome to UASKPS! - University of Applied Sciences Kempten Pizza service!\n");
    printf("You can order up to %d pizzas.\n\n", MAX_PIZZA_ORDER);

    int order_count = 1;
    char c = 'y';

    while (c == 'y')
    {
        printf("\nPlease choose your pizza #%d \n", order_count);

        // let user choose pizza type
        enum pizza_type ordered_type = choose_pizza_type();
        
        //let user choose pizza size
        enum pizza_size ordered_size = choose_pizza_size();

        // store order in list
        all_pizza_orders[order_count-1].pizza = ordered_type;
        all_pizza_orders[order_count-1].size = ordered_size;
        order_count++;

        if (order_count <= MAX_PIZZA_ORDER)
        {
            printf("\ndo you want to continue your order? y/n\n");
            c = _getch();
        }
        else
        {
            c = 'n';
        }    
    }

    printf("\nHere is your complete order::\n");
    for (int i = 0; i < order_count-1; i++)
    {
        printf("%s (%s) \n", pizza_type_names[all_pizza_orders[i].pizza], pizza_size_names[all_pizza_orders[i].size]);
    }   

    return 0;
}