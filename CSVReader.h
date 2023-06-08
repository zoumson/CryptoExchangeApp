#pragma once

#include "OrderBookEntry.h"
#include <vector>
#include <string>


class CSVReader
{
    public:
     CSVReader();

     //static std::vector<OrderBookEntry> readCSVToOrderBookEntry(std::string csvFile);
     static std::vector<std::vector<std::string>> readCSVToMatrix(std::string csvFile);
     static std::vector<OrderBookEntry> readCSVToOrderBookEntry(std::string csvFile);


     static std::vector<std::string> tokenise(std::string csvLine, char separator);
    
     static OrderBookEntry stringsToOBE(std::string price, 
                                        std::string amount, 
                                        std::string timestamp, 
                                        std::string product, 
                                        OrderBookType OrderBookType);

    private:
     static OrderBookEntry stringsToOBE(std::vector<std::string> strings);
     
};