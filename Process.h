/* 
 * File:   main.cpp
 * Author: manasbala
 * Email: manas.du@gmail.com
 * Github: https://github.com/manasbala
 *
 * Created on August 9, 2015, 10:10 AM
 */

#ifndef PROCESS_H
#define	PROCESS_H

class Process {
private:
    int processId;
    int brustTime;
    int brustTimeBalance;
    int avarageTime;
    int waitingTime;
public:
    Process();
    Process(int id, int bt, int btl);

    int getBrustTime() {
        return brustTime;
    }

    void setBrustTime(int brustTime) {
        this->brustTime = brustTime;
    }

    int getBrustTimeBalance() {
        return brustTimeBalance;
    }

    void setBrustTimeBalance(int brustTimeBalance) {
        this->brustTimeBalance = brustTimeBalance;
    }

    int getProcessId() {
        return processId;
    }

    void setProcessId(int processId) {
        this->processId = processId;
    }

    int getAverageTime() {
        return avarageTime;
    }

    void setAverageTime(int at) {
        this->avarageTime = at;
    }

    int getWaitingTime() {
        return waitingTime;
    }

    void setWaitingTime(int wt) {
        this->waitingTime = wt;
    }
};

#endif	/* PROCESS_H */

