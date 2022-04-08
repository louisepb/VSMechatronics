void SampleFunction1 ( int x )
{	
	int i,j,k;
	return;
}

void SampleFunction2 ( int x )
{
	int i,j,k;
	SampleFunction1(x);
	return;
}

// Main : Execution starts here...
int main(void)
{
	int i = 1;
	SampleFunction2(i);
	return 0;
}