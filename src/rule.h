#ifndef RULE_H
#define RULE_H

#define RULE_PROP_UD  0
#define RULE_PROP_ON  1
#define RULE_PROP_OFF 2

struct rule
{
    char *app;
    char *title;
    bool follow_space;
    int display;
    int space;
    float alpha;
    int manage;
    int sticky;
    int border;
    int fullscreen;
    unsigned grid[6];
};

void rule_add(struct rule *rule);
bool rule_is_valid(struct rule *rule);
struct rule *rule_create(void);
void rule_destroy(struct rule *rule);

#endif