<?php

class NightsWatch implements IFighter
{
	public $arr;

	public function recruit($new)
	{
			$this->arr[] = $new;
	}
	public function fight()
	{
		foreach ($this->arr as $i)
		{
			if (method_exists($i, "fight"))
				$i->fight();
		}
	}
}

?>