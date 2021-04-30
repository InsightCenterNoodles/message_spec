subscribe()
//do NOT return info from these methods, as this could get confounded with incoming signals.

using Key = int64;
using Row = [ any ] | RealList;

void insert_row(Row) // Insert row in column order, no Key
void insert_many([ Row ]) // insert rows in column order no Key
void insert_many(Row) // -> Insert large array, gets modulus by cols

void update_row(Key, Row) // update a row in the database.
void update_many([ [Key, Row] ]) // update many rows in the database

void remove([key]) // ask to remove keys
void clear() // ask to clear db

void update_selection(SelectionObject sel, string name)

signals:

void table_init([ string ], [ row ], [ [string, SelectionObject] ] )//
void rows_inserted( [ row ] )// Gives you a list of rows, including Key column, columns are in order
void rows_updated( [ row ] )// Gives you a list of rows, including Key column, columns are in order
void rows_removed( [ key ] )// Gives you a list of keys; if list is empty, remove whole DB

void selection_updated(string, SelectionObject)
