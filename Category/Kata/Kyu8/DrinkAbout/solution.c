//    do not allocate memory:
//    return a string literal
const char *people_with_age_drink(unsigned age)
{
  if (age <= 13)
    return "drink toddy";
  if (age > 13 && age < 18)
    return "drink coke";
  if (age > 17 && age <= 20)
    return "drink beer";
  if (age > 20)
    return "drink whisky";
}
