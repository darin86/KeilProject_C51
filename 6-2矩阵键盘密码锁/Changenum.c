unsigned int changenum(unsigned int number)
{
	unsigned int ch=0;
	switch (number)
	{
	case 1:
		ch=1;
		break;
	case 2:
		ch=2;
		break;
	case 3:
		ch=3;
		break;
	case 5:
		ch=4;
		break;
	case 6:
		ch=5;
		break;
	case 7:
		ch=6;
		break;
	case 9:
		ch=7;
		break;
	case 10:
		ch=8;
		break;
	case 11:
		ch=9;
		break;
    case 13://取消键
        ch=11;
        break;
	case 14:
		ch=10;
		break;
    case 15://确认键
        ch=12;
        break;
	default:
		break;
	}

    return ch;
}