bool is_vowel(char letter)
{
    return (letter == 'a' || letter == 'i' || letter == 'e' 
                            || letter == 'o' || letter  == 'u');
}
bool is_consonant(char letter)
{
    return !(letter == 'a' || letter == 'i' || letter == 'e' 
                            || letter == 'o' || letter == 'u');
}
bool is_even(int num)
{
    return num % 2 == 0;
}