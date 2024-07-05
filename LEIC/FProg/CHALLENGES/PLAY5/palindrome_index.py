# Function to check if a string is a palindrome
def palindrome_check(x:str) -> bool:
    return(x==x[::-1])

# Function to find the index of the character to remove to make the string a palindrome
def palindrome_index(x:str) -> int:
    # If the string is already a palindrome, return -1
    if palindrome_check(x):
        return (-1)
    else:
        # Iterate through each character in the string
        for i in range(len(x)):
            # Check if removing the current character makes the string a palindrome
            if palindrome_check(x[:i]+x[i+1:]):
                # Return the index of the character to remove
                return i
        # If no character can be removed to make the string a palindrome, return -1
        return -1