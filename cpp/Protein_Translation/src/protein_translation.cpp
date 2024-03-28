#include "protein_translation.h"

namespace protein_translation {
    std::vector<std::string> protein_translation::proteins(const std::string& rna) {
        std::vector<std::string> to_protein;
        for (std::string::size_type i = 0; i < rna.size(); i += 3) {
            std::string codon = rna.substr(i, 3);
            if (codon == "AUG")
                to_protein.push_back("Methionine");
            else if (codon == "UUU" || codon == "UUC")
                to_protein.push_back("Phenylalanine");
            else if (codon == "UUA" || codon == "UUG")
                to_protein.push_back("Leucine");
            else if (codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG")
                to_protein.push_back("Serine");
            else if (codon == "UAU" || codon == "UAC")
                to_protein.push_back("Tyrosine");
            else if (codon == "UGU" || codon == "UGC")
                to_protein.push_back("Cysteine");
            else if (codon == "UGG")
                to_protein.push_back("Tryptophan");
            else if (codon == "UAA" || codon == "UAG" || codon == "UGA")
                break;
        }

        return to_protein;
    }
}  // namespace protein_translation



int main() {

	std::string rna = "AUGUUUUCU"; 
	std::vector<std::string> proteins = protein_translation::proteins(rna); 
	std::cout << "Translated Proteins:" << std::endl;
	for (const std::string& protein : proteins) {
		std::cout << protein << std::endl;
	}
	return 0; 
}