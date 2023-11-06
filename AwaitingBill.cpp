/**
 * @file AwaitingBill.h
 */

#include "AwaitingBill.h"
#include "ReadyToLeave.h"

/**
 * @brief Handles the behavior of a table in the "Awaiting Bill" state.
 *
 * This function handles the actions that a table in the "Awaiting Bill" state
 * should perform, such as waiting for the bill, generating the bill receipt,
 * and transitioning to the "Ready To Leave" state.
 *
 * @param table The table to be handled.
 */
void AwaitingBill::handle(Table& table)
{
    std::cout << "Table " << to_string(table.getTableNumber()) << " is waiting for the bill..." << std::endl;
    table.message = "Table is ready for the bill.";
    table.send();
    ThreadSleep::threadSleep();
    BillComponent* bill = table.generateBill();
    std::cout << "Table " << to_string(table.getTableNumber()) << " Receipt: " << endl;
    std::cout << bill->getBillReceipt();
    ThreadSleep::threadSleep();
    if (bill->isTab())
    {
        std::cout << "  [Table " << to_string(table.getTableNumber()) << " has opened a tab...]" << std::endl;
    }
    else
    {
        std::cout << "  [Table " << to_string(table.getTableNumber()) << " has paid the bill...]" << std::endl;
    }
    delete bill;
}

/**
 * @brief Returns the next state after handling the current state.
 *
 * This function returns the next state, which is "Ready To Leave," as the
 * table transitions from "Awaiting Bill" to "Ready To Leave."
 *
 * @return A pointer to the "ReadyToLeave" state.
 */
TableState* AwaitingBill::getNextState()
{
    return new ReadyToLeave();
}

/**
 * @brief Returns a string representation of the "Awaiting Bill" state.
 *
 * This function returns a string that represents the name of the state.
 *
 * @return The string "Awaiting Bill."
 */
std::string AwaitingBill::toString()
{
    return "Awaiting Bill";
}
