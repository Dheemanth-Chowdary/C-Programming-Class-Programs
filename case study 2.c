main()
{
	char gender,ms;
	int age;
	printf("Enter age,gender,marital status: ");
	scanf("%d%c%c",&age,&gender,&ms);
	if((ms=='m')||(ms='u'&&gender=='m'&&age>30)||(ms=='u'&&gender=='f'&&age>25))
	printf("Driver is insured.");
	else
	printf("Driver is not insured.");
	return 0;

}
