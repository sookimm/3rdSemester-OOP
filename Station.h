// Name: Sooyeon Kim
// Seneca Student ID: 149385213
// Seneca email: skim499@myseneca.ca
// Date of completion: Apr 2, 2023
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_STATION_H
#define SDDS_STATION_H
#include <string>
namespace sdds {

	class Station {
		int m_stationId{};
		std::string m_itemName{};
		std::string m_desc{};
		size_t m_nextSerialNum{};
		size_t m_numOfItems{};
		static size_t m_widthField;
		static int id_generator;
	public:
		Station(const std::string& str);
		const std::string& getItemName() const;
		size_t getNextSerialNumber();
		size_t getQuantity() const;
		void updateQuantity();
		void display(std::ostream& os, bool full) const;
	};

}

#endif
