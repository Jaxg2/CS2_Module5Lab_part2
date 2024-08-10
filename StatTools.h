#ifndef STATTOOLS_H
#define STATTOOLS_H
#include <vector>
#include <iostream>
using namespace std;

template <class T>
class StatTools
{
public:
	static T max(const vector<T>& data);
	static T min(const vector<T>& data);
	static double mean(const vector<T>& data);
	static vector<T> mode(const vector<T>& data);
	static double median(vector<T> data);
	static void stemAndLeafPlot(const vector<T>& data);
	static void barChart(const vector<T>& data);
};

#endif