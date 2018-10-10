<?php

function twoSum(Int $target_number, Array $array){
    $found_numbers = array();

    foreach($array as $number){
        $target_value = $target_number - $number;
        if(in_array($found_numbers,$target_value)){
            echo("$target_value + $number = $target_number");
            return;
        }
        $found_numbers[] = $target_value;
    }

    return;
}

?>