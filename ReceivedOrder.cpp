#include "ReceivedOrder.h"
#include "AwaitingBill.h"

/**
 * @brief Handles the behavior of a table that has received and is processing an order.
 *
 * This function handles the actions that a table in the "Received Order" state should perform, such as receiving an order,
 * dining, and simulating a dining period.
 *
 * @param table The table in the "Received Order" state to be handled.
 */
void ReceivedOrder::handle(Table& table)
{
    // table.giveOrder(table.getWaiter().giveOrder()); // Optionally, handle order-related logic here.
    std::cout << "Table " << to_string(table.getTableNumber()) << " has received their order..." << std::endl;
    std::cout << "Table " << to_string(table.getTableNumber()) << " is dining..." << std::endl;
    ThreadSleep::threadSleep(); // Simulate a dining period.
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state, which is "AwaitingBill," as the table transitions from dining to awaiting the bill.
 *
 * @return A pointer to the "AwaitingBill" state.
 */
TableState* ReceivedOrder::getNextState()
{
    return new AwaitingBill();
}

/**
 * @brief Returns a string representation of the "Received Order" state.
 *
 * This function returns a string that represents the name of the state, which is "Received Order."
 *
 * @return The string "Received Order."
 */
std::string ReceivedOrder::toString()
{
    return "Received Order";
}
