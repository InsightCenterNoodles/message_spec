RealList get_row(
    int row,
    [int, ...] columns
)


RealList get_block(
    int row_from,
    int row_to,
    [int, ...] columns
)

void insert_row(
    int at,
    RealList values
)

void update_row(
    int at,
    RealList values
)

void append_rows(
    [RealList] values
)

void remove_rows(
    SelectionObject rows
)

void set_selection(
    SelectionObject sel,
    string name
)

[string]
get_all_selections()

SelectionObject
get_selection(
    string identifier
)

RealList
get_selection_data(
    string identifier
)

void table_reset()

void table_row_added(
    int row,
    int count
)

void table_row_deleted(
    SelectionObject del
)

void
table_row_updated(
    SelectionObject rows
)

void
table_selection_updated(
    string identifier
)
