// #include "DelegatingCompositebill.h" 
// #include "CompositeBillPayer.h"
// #include "BillPayer.h"
// #include <random>
// #include <string.h>
// #include "Table.h"

// using namespace std;

// void composite1Test();
// void composite2Test();
// void composite3Test();

// int main(){
//     srand(time(0));
//     composite1Test();
//     composite2Test();

//     cout << endl;
//     cout << "DONE" << endl;

    
//     return 0;
// }

// void composite1Test(){
//     vector<BillPayer*> leafBills1;
//     vector<BillPayer*> leafBills2;


//     srand(time(0));

//     int customerNumber=0;
//     for(; customerNumber<5; customerNumber++){
//         float randomPrice = (rand() % 100 + 50)/2.0;
//         string customerName = "Customer" + to_string(customerNumber);
//         BillPayer* tempBill = new BillPayer(randomPrice, customerName);
//         leafBills1.push_back(tempBill);
//     }

//     for(; customerNumber<11; customerNumber++){
//         float randomPrice = (rand() % 100 + 100)/2.0;
//         string customerName = "Customer" + to_string(customerNumber);
//         BillPayer* tempBill = new BillPayer(randomPrice, customerName);
//         leafBills2.push_back(tempBill);
//     }
//     CompositeBillPayer* compositeBill1 = new CompositeBillPayer(leafBills1[0]->getPayerName(), leafBills1);
//     CompositeBillPayer* compositeBill2 = new CompositeBillPayer(leafBills2[0]->getPayerName(), leafBills2);

//     DelegatingCompositeBill* delegatingBill = new DelegatingCompositeBill();
//     delegatingBill->addBill(compositeBill1);
//     delegatingBill->addBill(compositeBill2);
//     delegatingBill->addBill(new BillPayer(50.4,"Andrew"));

//     cout << "=======================Printing Bill=============================" << endl;
//     cout << delegatingBill->getBillReceipt() << endl;

//     delete delegatingBill;
// }

// void composite2Test(){
//     BillComponent*  bill = new DelegatingCompositeBill({new DelegatingCompositeBill({new BillPayer(99.9,"Jackson")})});
//     cout << bill->getBillReceipt();

//     BillComponent* bill2 = new BillPayer(50.4, "Jason");
//     cout << bill2->getBillReceipt();

//     BillComponent* bill3 = new DelegatingCompositeBill({bill,bill2});
//     cout << bill3->getBillReceipt();
// }

// void composite2Test(){
//     Table* t = new Table();
//     t->addCust(new Customer("John"));
//     t->addCust(new Customer("Jill"));
//     t->addCust(new Customer("Jacob"));
//     t->addCust(new Customer("Cena"));

//     BillComponent* bill = t->generateBill();
//     cout << bill->getBillReceipt();
// }