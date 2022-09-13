//
// Created by khanh on 13/09/2022.
//

#include "Logger.h"

void Logger::logger(std::string fileName, std::string message) {
    auto currentSeconds = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(currentSeconds);

    string resorcePath = "../loggerdata/"+fileName;
    ofstream LoggerResource(resorcePath, ios_base::app);
    LoggerResource<<message<< " at "<<ctime(&currentTime);

    LoggerResource.close();
}