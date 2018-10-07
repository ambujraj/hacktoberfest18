<?php
function is_prime($n)
{
  for ($i = $n; --$i && $n % $i; );
  return $i == 1;
}

$number = 7;
var_dump(is_prime($number));