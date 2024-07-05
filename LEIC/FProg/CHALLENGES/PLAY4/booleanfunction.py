def validate(grade):
    valid=(type(grade)==int or type(grade)== float) and 0<=grade<=100
    return valid

