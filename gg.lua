number = math.random(0, 10)
win = false
answer = 0

while true do
	if (win ~= true) then
		answer = tonumber(io.read())
	if (answer > number) then
		print("number too low!!")
	else if (answer < number) then
		print("number to big!!")
  else if (answer == number) then
		print("You win!")
    win = true
end
end
end
end
end
