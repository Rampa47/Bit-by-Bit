#ifndef COMPLAINTSHANDLER_H
#define COMPLAINTSHANDLER_H
#include <iostream>
#include <string>

using namespace std;
/**
 * @class ComplaintsHandler
 *
 * @brief Base class for ComplaintsHandlers responsible for handling customer complaints.
 */
class ComplaintsHandler
{

public:
    /**
     * @brief Construct a new ChefHandler object.
     *
     * This constructor initializes a new instance of the ChefHandler class.
     */
    ComplaintsHandler();

    /**
     * @brief Destroy the ComplaintsHandler object.
     *
     * This virtual destructor is responsible for cleaning up any resources
     * associated with the ComplaintsHandler object.
     */
    virtual ~ComplaintsHandler();

    /**
     * @brief Handle a customer complaint with a specified degree.
     *
     * This pure virtual function is responsible for handling a customer complaint and
     * processing it based on the given degree of severity.
     *
     * @param c The customer's complaint.
     * @param degree The degree of severity of the complaint.
     */
    virtual void handleComplaint()=0;
    
};

#endif