// The Template Method Pattern via the Non-Virtual Interface Idiom.
class GameCharacter
{
public:
	// derived classes do not redefine this
	int healthValue() const
	{
		int retVal = doHealthValue();
		return retVal;
	}

private:
	// derived classes may redefine this
	// default algorithm for calc health
	virtual int doHealthValue() const
	{
		return 0;
	}
};


class MyCoolCharacter : public GameCharacter
{
private:
	int doHealthValue() const
	{
		return 17;
	}
};