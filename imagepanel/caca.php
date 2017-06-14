#!/usr/bin/env php
<?php
// caca.php for  in /home/nicolas/horbac_n
// 
// Made by HORBACZ Nicolas
// Login   <horbac_n@etna-alternance.net>
// 
// Started on  Sat Apr  8 09:39:45 2017 HORBACZ Nicolas
// Last update Sat Apr  8 09:44:51 2017 HORBACZ Nicolas
//

$image = imagecreatetruecolor(800, 600);
$red = imagecolorallocate($image, 255, 0, 0);
imagefilledrectangle($image, 100, 100,  700, 500, $red);

function adresse($url)
{
  $addr1 = "/^(http|https|ftp):\/\/(([A-Z0-9][A-Z0-9_-]*)(\.[A-Z0-9][A-Z0-9_-]*)+.(com|org|net|dk|at|us|tv|info|uk|co.uk|biz|se|fr)$)(:(\d+))?\/?/i";
  $addr2 = "/^(www)((\.[A-Z0-9][A-Z0-9_-]*)+.(com|org|net|dk|at|us|tv|info|uk|co.uk|biz|se|fr)$)(:(\d+))?\/?/i";
  if (preg_match($addr1, $url) || preg_match($addr2, $url))
    {
      return true;
    }
  else
    {
      echo "Dude... ლ(｀ー´ლ) " .$url. " iz no url...\n";
      return false;
    }
}
$tab = [];
$i = 1;
$j = 0;

while ($i < $argc)
  {
    if ($i < ($argc - 1) && adresse($argv[$i]))
      {
	$content = file_get_contents($argv[$i]);
	preg_match_all("#<img[^>]+src=\"(http[^\">]+[jpg|jpeg|png])\"#", $content, $match);
	$match = $match[1];
	$max = sizeof($match);
	if ($max > 0)
	  {
	    while (isset($match[$j]))
	      {
		$tab[$j] = $match[$j];
		$j = $j + 1;
	      }
	  }
	else
	  {
	    echo ('no images bro... (╯°□°）╯︵ ┻━┻');
	  }
      }
    $base = $argv[$i];
    $i = $i + 1;
  }
$k = 0;
while (isset($tab[$k]))
  {
    $insert = imagecreatefromjpeg($tab[$k]);
    imagecopy($image, $insert, 200, 150, 0, 0, imagesx($insert), imagesy($insert));
    imagejpeg($insert, './lesimagestest.jpg');
    imagedestroy($insert);
    $k = $k + 1;
  }