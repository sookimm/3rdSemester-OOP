// Name: Sooyeon Kim
// Seneca Student ID: 149385213
// Seneca email: skim499@myseneca.ca
// Date of completion: Apr 2, 2023
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_WORKSTATION_H
#define SDDS_WORKSTATION_H
#include <iostream>
#include <deque>
#include "CustomerOrder.h"
#include "Station.h"
namespace sdds {
	extern std::deque<CustomerOrder> g_pending;
	extern std::deque<CustomerOrder> g_completed;
	extern std::deque<CustomerOrder> g_incomplete;

	class Workstation : public Station {
		std::deque<CustomerOrder> m_orders;
		Workstation* m_pNextStation=nullptr;
	public:
		Workstation(const std::string& str);
		Workstation(const Workstation& I) = delete;
		Workstation(Workstation&& I) = delete;
		Workstation& operator=(const Workstation& other) = delete;
		Workstation& operator=(Workstation& other) = delete;
		void fill(std::ostream& os);
		bool attemptToMoveOrder();
		void setNextStation(Workstation* station = nullptr);
		Workstation* getNextStation() const;
		void display(std::ostream& os) const;
		Workstation& operator+=(CustomerOrder&& newOrder);
	};


}


#endif
