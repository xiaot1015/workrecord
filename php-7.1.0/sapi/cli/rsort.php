<?php
/**
 *Created by vim
 *Author: xiaot
 *create time: 六  8/ 5 23:53:32 2017
 */ 
$arr = [];
while($i < 20){
    $a = $b = [];
    $a[] = 'source_'.$i ;
    $b[] = 'b_sour_'.$i ;
    $arr[] = $b;
    $arr[] = $a;
    $i++;
}
echo count($arr);
print_r($arr);
$result = rsort($arr);
var_dump($result);
print_r($arr);

