<?php

include_once('Lannister.class.php');

class Jaime extends Lannister
{
	public function sleepWith($partner)
	{
		if (is_subclass_of($partner, 'Lannister'))
		{
			if (get_class($partner) === 'Cersei')
			{
                echo "With pleasure, but only in a tower in Winterfell, then." . PHP_EOL;
			}
			else
                echo "Not even if I'm drunk !" . PHP_EOL;
		}
        else
            echo "Let's do this." . PHP_EOL;
	}
}
​
?>