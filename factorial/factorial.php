<?php

function factorial( $n ) {
 
  // Base case
  if ( $n == 0 ) {
    return 1;
  }
 
  // Recursion
  $result = ( $n * factorial( $n-1 ) );
  return $result;
}
 
var_dump(factorial( 5 ));