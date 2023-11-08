#include "CheckState.h"
#include "RequestToOrder.h"


/**
 * @brief Handles the behavior of a table in the "Check Table" state.
 *
 * This function handles the actions that a table in the "Check Table" state should perform,
 * including the waiter checking on the table, indicating that the table is still browsing the menu and not ready to order,
 * and simulating a waiting period.
 *
 * @param table The table in the "Check Table" state to be handled.
 */
void CheckState::handle(Table& table)
{
    table.getWaiter()->checkOnTable();
    cout<<"Table still browsing menu and is not ready to order..."<<endl;
    ThreadSleep::threadSleep();
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state based on the value of the 'current' member variable.
 * If 'current' is less than or equal to 0, it transitions to the "RequestToOrder" state; otherwise, it remains in the "CheckState" state.
 *
 * @return A pointer to the next state, either "RequestToOrder" or "CheckState" based on the 'current' value.
 */
TableState* CheckState::getNextState()
{
    if (current--<=0) return new RequestToOrder();
    else return new CheckState(current);
    
}

/**
 * @brief Returns a string representation of the "Check Table" state.
 *
 * This function returns a string that represents the name of the state, which is "Check Table."
 *
 * @return The string "Check Table."
 */
std::string CheckState::toString()
{
    return "Check Table";
}

/**
 * @brief Constructor for the CheckState class with a parameter for the 'current' value.
 *
 * This constructor initializes the CheckState with the specified 'current' value, which represents the remaining checks before transitioning.
 *
 * @param c The value of 'current' to initialize the state.
 */
CheckState::CheckState(int c){
    current=c;
}