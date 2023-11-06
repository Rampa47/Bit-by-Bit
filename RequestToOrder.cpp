#include "RequestToOrder.h"
#include "ReceivedOrder.h"

/**
 * @brief Handles the behavior of a table that is ready to place an order.
 *
 * This function handles the actions that a table in the "Request to Order" state should perform, such as indicating
 * readiness to order, sending a message, simulating a waiting period, and calling the waiter.
 *
 * @param table The table in the "Request to Order" state to be handled.
 */
void RequestToOrder::handle(Table& table)
{
    std::cout << "Table "<<to_string(table.getTableNumber())<<" ready to order..." << std::endl;
    table.message= "Table is ready to order.";
    table.send();
    ThreadSleep::threadSleep();
    table.callWaiter();
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state, which is "ReceivedOrder," as the table transitions from requesting to place an order
 * to the state of receiving and processing the order.
 *
 * @return A pointer to the "ReceivedOrder" state.
 */
TableState* RequestToOrder::getNextState()
{
    return new ReceivedOrder();
    
}

/**
 * @brief Returns a string representation of the "Request to Order" state.
 *
 * This function returns a string that represents the name of the state, which is "Request to Order."
 *
 * @return The string "Request to Order."
 */
std::string RequestToOrder::toString()
{
    return "Request to Order";
}