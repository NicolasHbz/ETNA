#!/usr/bin/env php
<?php
// imagepanel.php for  in /home/nicolas/horbac_n
// 
// Made by HORBACZ Nicolas
// Login   <horbac_n@etna-alternance.net>
// 
// Started on  Fri Apr  7 11:29:35 2017 HORBACZ Nicolas
// Last update Sat Apr  8 11:53:36 2017 HORBACZ Nicolas
//

$i = 1;
$j = 0;
$x = 0;
$y= 0;
while ($argc > $i)
  {
    $url= $argv[$i];
    if (preg_match('#(((https?|ftp)://(w{3}\.)?)(?<!www)(\w+-?)*\.([a-z]{2,4}))#', $url))
      {
	$valid = $url;
	$html = file_get_contents($argv[$i]);
	if (isset($valid))
	  {
	    preg_match_all('#<img .*src=(?:"|\')(.+)(?:"|\').*>#Uis', $html, $matches);
	    $tableau = $matches[1];
	    print_r($tableau);
	    $background = imagecreatetruecolor(2000, 1000);
	    while (isset($tableau[$j]))
	      {
		if ((preg_match_all('#http#i', $tableau[$j])) && (preg_match_all('#jpg|jpeg#i', $tableau[$j])))
		  {
		    $src_im = imagecreatefromjpeg($tableau[$j]);
		    imagecopyresized($background, $src_im, $x, $y, 0, 0, 200, 200, imagesx($src_im), imagesy($src_im));
		    imagejpeg($background, "./image.jpg");
		    $x = $x + 200;
		    if ($x >= 2000)
		      {
			$x = 0;
			$y = $y + 200;
		      }
		  }
		$j++;
	      }
	  }
      }
    $i++;
  }
