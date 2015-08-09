/* 
 * File:   Process.h
 * Author: manasbala
 *
 * Created on August 9, 2015, 10:14 AM
 */

#ifndef PROCESS_H
#define	PROCESS_H

class Process {
private:
	int processId;
	int brustTime;
	int brustTimeBalance;
public:
	Process();
	Process(int id, int bt, int btl);

	int getBrustTime() const {
		return brustTime;
	}

	void setBrustTime(int brustTime) {
		this->brustTime = brustTime;
	}

	int getBrustTimeBalance() const {
		return brustTimeBalance;
	}

	void setBrustTimeBalance(int brustTimeBalance) {
		this->brustTimeBalance = brustTimeBalance;
	}

	int getProcessId() const {
		return processId;
	}

	void setProcessId(int processId) {
		this->processId = processId;
	}
};

#endif	/* PROCESS_H */

