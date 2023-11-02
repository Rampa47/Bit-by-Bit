## Customer Subsystem

### System Requirements

The Customer subsystem is responsible for managing actions that are typically performed by customers within a restaurant, based on a multitude of different factors - all of which have an effect on the disposition of the customer.   <br>

**Functional Requirements** <br>
* The intended functionality of a customer includes ordering  and consuming meals, paying bills, tipping waiters, and complaint filing. 
* These actions are performed as either a result of the state of the table (in which the customer resides), or the mood of the customer (```CustomerDisposition```)
  
<br>
  
**End-User Requirements** <br>
* When creating a customer object, an end-user is must provide a name for said customer using it's constructor, passing a name as a parameter
* Alternatively, the default Customer constructor can be used to create a customer with a randomly selected name. <br>

    ```c++
    //parameterized constructor
    Customer* customer1 = new Customer("Jess");

    //default constructor
    Customer* customer2 = new Customer(); //assigned a random name
    ```
* The Customer class uses an ```expressMood()``` method which performs different functionality based on the state of the customer -  represented by the ```CustomerDisposition``` class mentioned above.
  * When invoked, an instance of a waiter must be passed as an argument, such that the customer (state) can interact with this waiter in various, context dependent ways [see [processes](#processes) section]
  * _This method should only be called when the state of the customer will no longer change_
* The ```order()``` method returns a new Order object (comprising multiple food items).  
* The ```receiveOrder()``` method is called when the customer receives their order.
  *  This method takes an Order object as a parameter.

**Restrictions** <br>


### Processes
### Patterns Used
### Objects involved (System Interface)