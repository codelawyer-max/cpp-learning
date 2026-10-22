#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct product
{
    int productID;
    string name;
    string category;
};

struct order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<product> products{
        {1, "laptop", "electronics"},
        {2, "phone", "electronics"},
        {3, "book", "education"},
        {4, "juicer", "kitchen"},
        {5, "shirt", "clothing"},
        {6, "sandals", "footwear"}};

    deque<string> recentcustomers{"C002", "CO003", "C004"};
    recentcustomers.push_front("C001");
    recentcustomers.push_back("C005");

    list<order> orderhistory;
    orderhistory.push_back({101, 1, 2, "C001", time(0)});
    orderhistory.push_back({102, 2, 4, "C002", time(0)});
    orderhistory.push_back({103, 3, 2, "C003", time(0)});

    set<string> categories;
    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productstock = {
        {1, 10},
        {2, 20},
        {3, 30},
        {4, 40},
        {5, 50},
    };

    multimap<string, order> customerorders;
    for (const auto &order : orderhistory)
    {
        customerorders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerdata = {
        {"C001", "KARTIK MISHRA"},
        {"C002", "PRINCE KUMAR"},
        {"C003", "NIKUNJ RUSTAGI"},
        {"C004", "NAVEEN KUMAR"},
        {"C005", "MD HAMMADUDDIN"},
    };

    unordered_set<string> uniqueproductIDS;
    for (const auto &product : products)
    {
        uniqueproductIDS.insert(to_string(product.productID));
    }

    cout << "Products:\n";
    for (const auto &product : products)
    {
        cout << product.productID << " - "
             << product.name << " - "
             << product.category << endl;
    }

    cout << "\nRecent Customers:\n";
    for (const auto &customer : recentcustomers)
    {
        cout << customer << endl;
    }

    cout << "\nCategories:\n";
    for (const auto &category : categories)
    {
        cout << category << endl;
    }

    cout << "\nProduct Stock:\n";
    for (const auto &stock : productstock)
    {
        cout << "Product ID: " << stock.first
             << ", Stock: " << stock.second << endl;
    }

    return 0;
}