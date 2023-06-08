#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"


class Troc
{
    public:
        Troc();
        /** Call this to start the sim */
        void init();
    private: 
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterAsk();
        void enterBid();
        void printWallet();
        void gotoNextTimeframe();
        int getUserOption();
        /// <summary>
        /// do we still need to run the app
        /// </summary>
        /// <param name="userOption"></param>
        /// <returns></returns>
        void processUserOption(int userOption);
        void quit();

        std::string currentTime;
        bool isRunning;

        OrderBook orderBook{"20200317.csv"};

        Wallet wallet;

};
