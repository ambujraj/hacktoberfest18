function recurion(count) {
  if(count === 1) return;
  console.log(count);
  return recurion(--count);
}
recurion(10);