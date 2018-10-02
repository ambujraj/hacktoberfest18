def palindrome(element)
  i=0
  j=element.length() -1
  palindrome = true
  while i < j and palindrome
    palindrome = element[i] == element[j]
    i+=1
    j-=1
  end
  return palindrome
end

puts("Enter a word")
var=gets.chomp()
is_palindrome=palindrome(var)
if is_palindrome
  puts ("It is a palindrome.")
else
  puts ("It is not a palindrome.")
end
