//add include statements
#include "func.h"

//add function code here

// Calculate the GC content of a DNA string
double get_gc_content(const std::string& dna) {
    int gc_count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            gc_count++;
        }
    }
    return static_cast<double>(gc_count) / dna.length();
}

// Reverse the DNA string without using the standard library function
std::string get_reverse_string(std::string dna) {
    std::string reversed;
    for (int i = dna.length() - 1; i >= 0; --i) {
        reversed += dna[i];
    }
    return reversed;
}

// Get the complement of the DNA string
std::string get_dna_complement(std::string dna) {
    // Reverse the string first
    dna = get_reverse_string(dna);

    // Replace each nucleotide with its complement
    for (char& nucleotide : dna) {
        switch (nucleotide) {
            case 'A':
                nucleotide = 'T';
                break;
            case 'T':
                nucleotide = 'A';
                break;
            case 'C':
                nucleotide = 'G';
                break;
            case 'G':
                nucleotide = 'C';
                break;
        }
    }

    return dna;
}