/**
 * @file EmptyTable.h
 */

#include "EmptyTable.h"
#include "OccupiedTable.h"

/**
 * @brief Handles the behavior of an empty table, simulating the cleaning and preparation for the next customer.
 *
 * This function handles the actions that an empty table should perform when it becomes available, which includes
 * simulating the cleaning and preparation of the table for the next customer.
 *
 * @param table The empty table to be handled.
 */
void EmptyTable::handle(Table& table)
{
    std::cout << "Table " << to_string(table.getTableNumber()) << " has become available, and it is being cleaned and prepared for the next customer.\n";
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state, which is "OccupiedTable," as the table transitions from being empty to being occupied by the next customer.
 *
 * @return A pointer to the "OccupiedTable" state.
 */
TableState* EmptyTable::getNextState()
{
    return new OccupiedTable();
}

/**
 * @brief Returns a string representation of the "Empty Table" state.
 *
 * This function returns a string that represents the name of the state.
 *
 * @return The string "Empty Table."
 */
std::string EmptyTable::toString()
{
    return "Empty Table";
}
