def calculate_age(year_of_birth, current_year):
    age = current_year - year_of_birth
    
    if year_of_birth > current_year:
        return f"You will be born in {year_of_birth - current_year} year{'s' if year_of_birth - current_year != 1 else ''}."
    elif year_of_birth == current_year:
        return "You were born this very year!"
    elif age == 1:
        return "You are 1 year old."
    else:
        return f"You are {age} years old."
