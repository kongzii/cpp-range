#include <vector>

namespace kongzii {
	template<typename T>
	inline void swap(T &start, T &stop) {
		start += stop;
		stop = start - stop;
		start -= stop;
	}

	template<typename T>
	std::vector<T> range(T start, T stop, const T step) {
		std::vector<T> vecRange;
		vecRange.reserve(stop - start);

		if (step < 0) { swap(start, stop); }

		for(T i = start; ((step < 0) ? i > stop : i < stop); i += step) {
			vecRange.push_back(i);
		}

		return vecRange;
	}

	template<typename T>
	std::vector<T> range(const T start, const T stop) {
		return range(start, stop, 1);
	}

	template<typename T>
	std::vector<T> range(const T stop) {
		return range(0, stop, 1);
	}
}