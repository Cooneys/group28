#include <studio.h>

struct Item {
   int item_id;
   int waiting_period;
};

void print_item( struct Item items ) {
   printf( "Item Value: %d\n", items.item_id);
}
