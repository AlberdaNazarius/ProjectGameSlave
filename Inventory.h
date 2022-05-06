#pragma once
#include <map>
#include <string>
#include "Interfaces.h"

using namespace std;

class Inventory : public IData
{
public:
	static void Change_Item(string item_name, int number);
    static bool Check_Tool(string tool_id);
	static void ExploreArea();
	static void DisplayCharacteristics();
	static int ReturnNumberOfItems(string item_name);

	void ReloadData(map<std::string, int> data) override;
	void DisplayStats() override;
	std::map<std::string, int> WhatToSave() override;
private:
	static int food, water, wood, tinder, medicine;
	static map<string, bool> tools;
};
