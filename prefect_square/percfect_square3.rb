
def perfect_square(number)
  perfect=false
  x=1
  current=1

  while not perfect and current < number
    current=x*x
    perfect= current == number
    x+=1
  end
  return perfect
end

puts("Enter a number")
n=gets.chomp
is_perfect=perfect_square(n.to_i)
if is_perfect
  puts("It is a perfect square")
else
  puts("It is not a perfect square")
end
