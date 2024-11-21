#include <stdio.h>

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


int main() {
    // 1. show welcome message
    printf("Hello! Welcome to UASKPS! - University of Applied Sciences Kempten Pizza service!\n");
    printf("You can order up to %d pizzas.\n\n", MAX_PIZZA_ORDER);

    struct pizza_order your_pizza_orders[MAX_PIZZA_ORDER];

    int order_count = 1;

    for (int i = 0; i < MAX_PIZZA_ORDER; i++)
    {
        your_pizza_orders[i].pizza = funghi;
        your_pizza_orders[i].size = large;
        order_count++;
    }
    
    for (int i = 0; i < order_count; i++)
    {
        printf("%s %s \n", pizza_size_names[your_pizza_orders[i].size], pizza_type_names[your_pizza_orders[i].pizza]);
    }

    return 0;
}