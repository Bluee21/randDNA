#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string letter_base, int seqLength){
	string randSeed;
	
	mt19937 eng2(seed);
	
	uniform_int_distribution<int> unifrm(0, letter_base.size()-1);
	
	for(int n=0; n < seqLength; n++) {
		
		int i = unifrm(eng2);
		randSeed = randSeed + letter_base[i];
		
		
	}
	return randSeed;
}
