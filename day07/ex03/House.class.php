<?php

class House
{
	public function introduce()
	{
		$res = "House " . $this->getHouseName() . " of " . $this->getHouseSeat() . " : \"" . $this->getHouseMotto() . "\"\n";
		echo "$res";
	}

}

?>