#!/usr/bin/env php
<?php
// content.php for  in /home/nicolas/horbac_n/content
// 
// Made by HORBACZ Nicolas
// Login   <horbac_n@etna-alternance.net>
// 
// Started on  Tue Apr  4 14:10:28 2017 HORBACZ Nicolas
// Last update Tue Apr  4 14:21:19 2017 HORBACZ Nicolas
//

$i = 1;
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
	echo "content.php: {$argv[$i]}: Permission denied\n";
      }
    else if ($open = fopen($argv[$i], "r"))
      {
	echo fread($open, filesize($argv[$i]));
	fclose($open);
      }
    else
      {
	echo "content.php: {$argv[$i]}: Cannot open file\n";
      }
    $i++;
  }    