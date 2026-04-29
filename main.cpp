#include <iostream>
#include <string>
#include "src/flight_algorithm.h"
#include "src/delivery_tracker.h"
#include "src/package_manager.h"

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "   Drone Package Delivery System v1.0   " << endl;
    cout << "   SQE Lab 13 - SCM Plan Demo           " << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Initialize drone
    string droneID = "DRN-007-ALPHA";
    cout << "Drone ID     : " << droneID << endl;
    cout << "Status       : Active" << endl;
    cout << "Current Zone : Zone 3 - Main Campus" << endl;
    cout << endl;

    // Flight algorithm demo
    FlightAlgorithm flight;
    flight.setDroneID(droneID);
    flight.calculateRoute("Warehouse-A", "Block-C Room-301");
    flight.displayRoute();

    // Package manager demo
    PackageManager pkgMgr;
    pkgMgr.assignPackage("PKG-1001", droneID);
    pkgMgr.assignPackage("PKG-1002", droneID);
    pkgMgr.displayPackages();

    // Delivery tracker demo
    DeliveryTracker tracker;
    tracker.updateStatus("PKG-1001", "In Transit");
    tracker.updateStatus("PKG-1002", "Out for Delivery");
    tracker.displayAllStatus();

    cout << endl;
    cout << "========================================" << endl;
    cout << "   System running successfully.         " << endl;
    cout << "========================================" << endl;

    return 0;
}
