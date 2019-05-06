function factorial(num) {
  let facto = 1;
  if (num > 1) {
    for (let i = num; i > 0; i -= 1) {
      facto *= i;
    }
  }
  return `Factorial of ${ num } is: ${ facto }`;
}
