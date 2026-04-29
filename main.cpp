#include <iostream>
#include <string>
#include "src/flight_algorithm.h"
#include "src/delivery_tracker.h"
#include "src/package_manager.h"

using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "   Drone Package Delivery System v1.1   " << endl;
    cout << "   Enhanced SCM Demo                    " << endl;
    cout << "========================================" << endl << endl;

    // Initialize drone details
    string droneID = "DRN-007-ALPHA";
    int batteryLevel = 85;

    cout << "Drone ID       : " << droneID << endl;
    cout << "Status         : Active" << endl;
    cout << "Battery Level  : " << batteryLevel << "%" << endl;
    cout << "Current Zone   : Zone 3 - Main Campus" << endl << endl;

    // Check battery before operation
    if (batteryLevel < 20) {
        cout << "⚠ Warning: Low Battery! Return to charging station." << endl;
        return 0;
    }

    // Flight algorithm demo
    FlightAlgorithm flight;
    flight.setDroneID(droneID);
    flight.calculateRoute("Warehouse-A", "Block-C Room-301");
    flight.displayRoute();

    cout << endl;

    // Package manager demo
    PackageManager pkgMgr;
    pkgMgr.assignPackage("PKG-1001", droneID);
    pkgMgr.assignPackage("PKG-1002", droneID);
    pkgMgr.assignPackage("PKG-1003", droneID); // new package
    pkgMgr.displayPackages();

    cout << endl;

    // Delivery tracker demo
    DeliveryTracker tracker;
    tracker.updateStatus("PKG-1001", "In Transit");
    tracker.updateStatus("PKG-1002", "Out for Delivery");
    tracker.updateStatus("PKG-1003", "Pending");

    cout << "\n--- Delivery Status ---" << endl;
    tracker.displayAllStatus();

    cout << endl;

    // Simulate delivery completion
    cout << "Completing deliveries..." << endl;
    tracker.updateStatus("PKG-1001", "Delivered");
    tracker.updateStatus("PKG-1002", "Delivered");

    cout << "\n--- Updated Delivery Status ---" << endl;
    tracker.displayAllStatus();

    cout << endl;
    cout << "========================================" << endl;
    cout << "   System running successfully.         " << endl;
    cout << "   Version upgraded to v1.1             " << endl;
    cout << "========================================" << endl;

    return 0;
}
