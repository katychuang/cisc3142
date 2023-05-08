// This file shows basic functions of reading in a CSV file using C++98
// Please add your name to your code! 

/* Homework Objective: fix this program to match the requirements listed: 
  1. successfully reads all lines of the input file
  2. calculate the average price per brand, average price per category 
  3. writes to an output file
  4. for each unique year, list the count of skus and also print out the skus as a list i.e. 2000 (3): 111, 211, 311 and make a new line per year.

All programs must be able to compile in C++98 standard (the default version on Linux Machine). That means you cannot use the new features of C++11! :(

*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>

using namespace std; 

int main() {

  // define variables
  string sku, brand, category, year, price; 
  vector<int>vSKU;
  vector<string>vBrand;
  vector<string>vCategory;
  vector<int>vYear;
  vector<float>vPrice;
  set<string>uniqBrand;
  set<string>uniqCategory;
  set<string>::iterator it;

  //ifstream in_stream;
  ifstream in_stream("data.csv");
  //in_stream.open("data.csv"); //opening the file.

  if (!in_stream.fail()) { //if the file is open

    string line;
    cout << "Reading file..." << endl;

    while (getline (in_stream, line)) { //while the end of file is NOT reached
     cout << line << endl;

     // Fields: sku,brand,category,year,price

     getline(in_stream, sku, ',');
     stringstream ssku(sku); 
     int iSKU = 0;
     ssku >> iSKU;
     vSKU.push_back(iSKU);

     getline(in_stream, brand, ',');
     vBrand.push_back(brand);
     uniqBrand.insert(brand);

     getline(in_stream, category, ',');
     vCategory.push_back(category);
     uniqCategory.insert(category);

     getline(in_stream, year, ','); 
     stringstream syear(year);
     int iYear;
     syear >> iYear;
     vYear.push_back(iYear);

     getline(in_stream, price, '\n'); 
     stringstream sprice(price);
     float fPrice;
     sprice >> fPrice;
     vPrice.push_back(fPrice);
     
    }

    in_stream.close(); //closing the file cout << "Number of entries: " << i-1 << endl;

   } else {
    cout << "Unable to open file"; 
   }
 
  //output values 
  cout << "\n Data Stored:\nSKU\tBrand\tCat\tYear\tPrice" << endl;

  for (int j = 0; j < vSKU.size(); j++) {
    cout << vSKU[j] << "\t" << vBrand[j] << "\t" << vCategory[j] << "\t" << vYear[j] << "\t" << vPrice[j] << endl;
  }

  cout << endl;
   
  cout << "\nContents of uniqBrand: ";
  for (it=uniqBrand.begin(); it!=uniqBrand.end(); ++it)
    cout << ' ' << *it;

  cout << "\nContents of uniqCatetgory: ";
  for (it=uniqCategory.begin(); it!=uniqCategory.end(); ++it)
    cout << ' ' << *it;
  
  cout << "\n\nAverage per brand\nBrand   sum\tavg\n"; 
  for (it=uniqBrand.begin(); it!=uniqBrand.end(); ++it){
    cout << *it << '\t'; 
    float sum = 0.0;
    int count = 0;
    for (int j = 0; j < vSKU.size(); j++) {
     if (vBrand[j] == *it){
      sum += vPrice[j];
      count++;
     }
    }
    cout << sum << '\t' << sum/count << endl;
  }
  
  cout << "\n\nAverage per Category\n \tsum\tavg\n"; 
  for (it=uniqCategory.begin(); it!=uniqCategory.end(); ++it){
    cout << *it << '\t'; 
    float sum = 0.0;
    int count = 0;
    for (int j = 0; j < vSKU.size(); j++) {
     if (vCategory[j] == *it){
      sum += vPrice[j];
      count++;
     }
    }
    cout << sum << '\t' << sum/count << endl;
  }

  cout << endl;

}
