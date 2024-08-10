//Jaxon
#include "StatTools.h"
#include <iostream>
using namespace std;


template<class T>

T StatTools<T>::max(const vector<T>& data)
{
	return *max(data.begin(), data.end));
}

template <class T>
T StatTools<T>::min(const vector<T>& data)
{
	return *min(data.begin(), data.end));
}

template <class T>

double StatTools<T>::mean(const vector<T>& data)
{
	if (data.empty())
		return 0.0;
}

template <class T>
vector<T> StatTools<T>::mode(const vector<T>& data)
{
	map<T, int> frequency;
	for (const auto& num : data)
	{
		frequency[num]++;
	}

	int maxFreq = 0;
	for (const auto& pair : frequency)
	{
		if (pair.second > maxFreq)
		{
			maxFreq = pair.second;
		}
	}
	return modes;
}
template <class T>

double StatTools<T>::median(vector<T> data)
{
	if (data.empty()) return 0.0;
	sort(data.begin(), data.end());
	size_t size = data.size();
	if (size % 2 == 0)
	{
		return (data[size / 2 - 1] + data[size / 2]) / 2.0;
	}
	else
	{
		return data[size / 2];
	}
}
template <class T>

void StatTools<T>::stemAndLeafPlot(const vector<T>& data)
{
	if (data.empty()) return;
	map<T, vector<T>> stemLeaf;

	for const(auto & num: data)
	{
		T stem = num / 10;
		T leaf = num % 10;
		stemLeaf[stem].push_back(leaf);
	}

	cout << "Stem and leaf plot: " << endl;
	for (const auto& pair : stemLeaf)
	{
		cout << pair.first << " | ";
		for (const auto& leaf : pair.second)
		{
			cout << leaf << " ";
		}
		cout << endl;
	}
}
template <class T>

void StatTools<T>::barChart(const vector<T>& data)
{
	if (data.empty()) return;
	map<T, int> frequency;

	for (const auto& num : data)
	{
		frequency[num]++;
	}

	cout << "Bar Chart: " << endl;
	for (const auto& pair : frequency)
	{
		cout << setw(4) << pair.first << " : " << string(pair.second, '*') << endl;
	}
}

int main()
{
	vector<double> doubles = { 1, 2, 2, 3, 4, 4, 4, 5 };

	cout << "Max: : " << StatTools<double>::max(doubles) << endl;
	cout << "Min: " << StatTools<double>::min(doubles) << endl;
	cout << "Mean: " << StatTools<double>::mean(doubles) << endl;
	cout << "Median: " << StatTools<double>::median(doubles) << endl;
	cout << "Mode: ";
	for (const auto& m : StatTools<double>::mode(doubles))
	{
		cout << m << " ";
	}

	cout << endl;

	StatTools<double>::stemAndLeafPlot(doubles);
	StatTools<double>::barChart(doubles);
	return 0;
}
