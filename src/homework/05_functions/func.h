//add function(s) prototype here
#ifndef FUNC_H
#define FUNC_H

#include <string>

// Function to get GC content of a DNA string
double get_gc_content(const std::string& dna);

// Function to reverse a DNA string
std::string get_reverse_string(std::string dna);

// Function to get the DNA complement
std::string get_dna_complement(std::string dna);

#endif