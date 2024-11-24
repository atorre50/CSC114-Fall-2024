#include <iostream>
#include <fstream>
using namespace std;

//total gallons of paint required
double totalGallons(double sqFt) {
    return sqFt / 110;
}

//total hours of labor required
int hrsLabor(double sqFt) {
    return (sqFt / 110) * 8;
}

//cost of paint
double costPaint(double sqFt, double price) {
    return totalGallons(sqFt) * price;
}

//labor charges
double laborCharges(double sqFt) {
    return hrsLabor(sqFt) * 25;
}

//total cost of the job
double totalCost(double sqFt, double price) {
    return laborCharges(sqFt) + costPaint(sqFt, price);
}

int main() {
    // Relied on external sources
    ifstream inFile("PaintJobInput.txt");
    if (!inFile) {
        cout << "Error: Could not open file PaintJobInput.txt\n";
        return 1;
    }

  double numRooms;
  double paintPrice;
    inFile >> numRooms >> paintPrice;

  //relied on external sources
    if (inFile.fail()) { 
        cout << "Error: File format invalid or missing data\n";
        return 1;
    }
    inFile.close();
    

    cout << "Number of rooms to be painted: " << numRooms << endl;
    cout << "Price of paint per gallon: $" << paintPrice << endl;

    
    double wallSqft = 0;
    double totalSqft = 0;
    for (int i = 1; i <= numRooms; i++) {
        cout << "Enter the square feet of wall space for room " << i << ": ";
        cin >> wallSqft;
        totalSqft += wallSqft;
    }

    double gallons = totalGallons(totalSqft);
    int laborHours = hrsLabor(totalSqft);
    double paintCost = costPaint(totalSqft, paintPrice);
    double laborCost = laborCharges(totalSqft);
    double totalJobCost = totalCost(totalSqft, paintPrice);

    cout << "ESTIMATE OF COSTS: " << endl;
    cout << "Gallons of paint required: " << gallons << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Total cost of paint: $" << paintCost << endl;
    cout << "Labor Charges: $" << laborCost << endl;
    cout << "TOTAL COST OF PAINT JOB: $" << totalJobCost << endl;
    

    // saving to file
    string saveToFile;
    cout << "Would you like to save the estimate to a file? Yes or No?: "<< endl;
    cin >> saveToFile;

    if (saveToFile == "Yes" || saveToFile == "yes") {
        ofstream outFile("PaintJobEstimate.txt");
        outFile << "ESTIMATE OF COSTS: " << endl;
        
        outFile << "Gallons of paint required: " << gallons << endl;
        outFile << "Hours of labor required: " << laborHours << endl;
        outFile << "Total cost of paint: $" << paintCost << endl;
        outFile << "Labor Charges: $" << laborCost << endl;
        outFile << "TOTAL COST OF PAINT JOB: $" << totalJobCost << endl;
        outFile.close();
        cout << "Estimate saved to PaintJobEstimate.txt" << endl;
    } else {
        cout << "Estimate not saved" << endl;
    }

    return 0;
}
