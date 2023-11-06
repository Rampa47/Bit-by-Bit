#include "OccupiedTable.h"
#include "CheckState.h"

/**
 * @brief Handles the behavior of an occupied table.
 *
 * This function handles the actions that an occupied table should perform, such as simulating a period of being occupied.
 *
 * @param table The occupied table to be handled.
 */
void OccupiedTable::handle(Table& table)
{
    
    ThreadSleep::threadSleep();
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state, which is "CheckState," with a random number of iterations to simulate checking the table status.
 *
 * @return A pointer to the "CheckState" state with the specified number of iterations.
 */
TableState* OccupiedTable::getNextState()
{
    int iterations = ThreadSleep::generateRandomNumber(1,4);
    return new CheckState(iterations);
    
}

/**
 * @brief Returns a string representation of the "Occupied Table" state.
 *
 * This function returns a string that represents the name of the state.
 *
 * @return The string "Occupied Table."
 */
std::string OccupiedTable::toString()
{
    return "Occupied Table";
}