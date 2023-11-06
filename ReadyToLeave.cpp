/**
 * @file ReadyToLeave.h
 */

#include "ReadyToLeave.h"
#include "EmptyTable.h"

/**
 * @brief Handles the behavior of a table that is ready to leave the restaurant.
 *
 * This function handles the actions that a table in the "Ready to Leave" state should perform,
 * such as notifying that the table is leaving, rating the experience, removing customers, and transitioning
 * to the "Empty Table" state.
 *
 * @param table The table that is ready to leave.
 */
void ReadyToLeave::handle(Table& table)
{
    std::cout << "Table " << to_string(table.getTableNumber()) << " is leaving the restaurant..." << std::endl;
    int rating = ThreadSleep::generateRandomNumber(1, 5);
    cout << "[Table " << to_string(table.getTableNumber()) << " Rating: " << to_string(rating) << "]" << endl;
    table.removeCustomers();
    table.setState();
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state, which is "EmptyTable," as the table transitions from being ready to leave
 * to becoming an empty table.
 *
 * @return A pointer to the "EmptyTable" state.
 */
TableState* ReadyToLeave::getNextState()
{
    return new EmptyTable();
}

/**
 * @brief Returns a string representation of the "Ready to Leave" state.
 *
 * This function returns a string that represents the name of the state.
 *
 * @return The string "Ready to leave."
 */
std::string ReadyToLeave::toString()
{
    return "Ready to leave.";
}
