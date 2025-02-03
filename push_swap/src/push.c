#include "../inc/push_swap.h"

void push(int x, t_node **p2h) {
    t_node *new_node;

    if (!p2h)
        return;
    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return;
    new_node->value = x;
    new_node->link = *p2h;
    *p2h = new_node;
}

void pb(t_node **p2h_b, t_node **p2h_a) {
    t_node *temp;

    if (!p2h_b || !p2h_a)
        return;
    temp = *p2h_a;
    if (!temp)
        return;
    push(temp->value, p2h_b);
    *p2h_a = temp->link;
    free(temp);
}

void pa(t_node **p2h_b, t_node **p2h_a) {
    t_node *temp;

    if (!p2h_b || !p2h_a)
        return;
    temp = *p2h_b;
    if (!temp)
        return;
    push(temp->value, p2h_a);
    *p2h_b = temp->link;
    free(temp);
}
