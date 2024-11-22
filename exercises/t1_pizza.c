#include <stdio.h>
#include <conio.h>

#define MAX_PIZZA_ORDER 10

enum pizza_type {
    pizza_margherita,
    salami_classico,
    funghi,
    hawaiian_dream
};

enum pizza_size {
    small,
    medium,
    large,
    extra_large,
    xxl,
    party_size
};

const char* pizza_type_names[] = {"Pizza Margherita", "Salami Classico", "Funghi", "Hawaiian Dream"};
const char* pizza_size_names[] = {"Small", "Medium", "Large", "Extra Large", "XXL", "Party Size"};

struct pizza_order
{
    enum pizza_type pizza;
    enum pizza_size size;
};

// function to choose pizza type, returns enum of pizza_type
enum pizza_type choose_pizza_type() {
    
}

// function to choose pizza size, returns enum of pizza_size
enum pizza_size choose_pizza_size() {

}

int main() {
    // 1. show welcome message
    printf("Hello! Welcome to UASKPS! - University of Applied Sciences Kempten Pizza service!\n");
    printf("You can order up to %d pizzas.\n\n", MAX_PIZZA_ORDER);

    struct pizza_order your_pizza_orders[MAX_PIZZA_ORDER];

    int order_count = 1;
    char c;

    do
    {
        printf("Please choose your pizza #%d \n", order_count);

        // let user choose pizza type
        


        //let user choose pizza size
        
        if (order_count > MAX_PIZZA_ORDER)
        {
            printf("do you want to continue your order?\n");
            c = _getch();
        }
        else
        {
            c = 'n';
        }

    } while (c == 'y' || c == 'Y');
    
    // prints pizza orders
    for (int i = 0; i < order_count; i++)
    {
        printf("%s %s \n", pizza_size_names[your_pizza_orders[i].size], pizza_type_names[your_pizza_orders[i].pizza]);
    }

    return 0;
}