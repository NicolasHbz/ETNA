#!/usr/bin/env php
<?php
// count_word_sort.php for  in /home/nicolas/horbac_n/count_word_sort
// 
// Made by HORBACZ Nicolas
// Login   <horbac_n@etna-alternance.net>
// 
// Started on  Thu Apr  6 10:31:21 2017 HORBACZ Nicolas
// Last update Thu Apr  6 19:26:07 2017 HORBACZ Nicolas
//

$i = 1;
$size = 0;
while ($i < $argc)
  {
    if (!(file_exists($argv[$i])))
      {
	echo "content.php: {$argv[$i]}: No such file or directory\n";
      }
    else if (is_dir($argv[$i]))
      {
	echo "content.php: {$argv[$i]}: Is a directory\n";
      }
    else if (!(is_readable($argv[$i])))
      {
	echo "content.php: {$argv[$i]}: Permission denied\n!";
      }
    else if ($open = fopen($argv[$i], "r"))
      {
	$preg = preg_split('/[\W]+/', file_get_contents($argv[$i]));
	$implode = implode(",", $preg);
	$tab = explode(",", $implode);
	array_pop($tab);
	while (isset($tab[$size]))
	  {
	    $size++;
	  }
	
	$j = 0;
	$tmp;
	while ($j < $size - 1)
	  {
	    echo $j;
	    //echo "{$tab[$j]} "; echo "{$tab[$j + 1]}\n";
	    if (ord($tab[$j]) > ord($tab[$j + 1]))
	      {
		$tmp = $tab[$j];
		$tab[$j] = $tab[$j + 1];
		$tab[$j + 1] = $tmp;
		$j = 0;
	      }
	    $j++;
	    /* echo "DEBUT\n"; */
	    /* print_r($tab); */
	    /* echo "FIN\n"; */
	  }	
	
      }
    else
      {
	echo "content.php: {$argv[$i]}: Cannot open file\n";
      }
    $i++;
  }
print_r($tab);
