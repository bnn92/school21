<?php

include_once('Lannister.class.php');

class Tyrion extends Lannister
{
	public function sleepWith($partner)
	{
		if (is_subclass_of($partner, 'Lannister'))
			echo "Not even if I'm drunk !" . PHP_EOL;
		else
			echo "Let's do this." . PHP_EOL;
	}
}

?>