
/*
Filters.hpp - This file is part of BayesTyper (https://github.com/bioinformatics-centre/BayesTyper)


The MIT License (MIT)

Copyright (c) 2016 Jonas Andreas Sibbesen and Lasse Maretty

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/


#ifndef __bayesTyper__Filters_hpp
#define __bayesTyper__Filters_hpp

#include <vector>

#include "Utils.hpp"
#include "OptionsContainer.hpp"
#include "NegativeBinomialDistribution.hpp"

using namespace std;


class Filters {

	public:

		Filters(const OptionsContainer & options_container, const vector<vector<NegativeBinomialDistribution> > &);

		float minGenotypePosterior() const;
		float minNumberOfKmers() const;
		
		float minFractionObservedKmers(const ushort) const;
	
	private:

		float min_genotype_posterior;
		float min_number_of_kmers;

		vector<float> min_fraction_observed_kmers;
};

#endif