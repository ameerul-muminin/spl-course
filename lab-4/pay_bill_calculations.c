#include <stdio.h>

int main()
{
	int level, job_number, basic_pay, conveyance_allowance, entertainment_allowance, perks;
	float house_rent, gross_salary, income_tax, net_salary;

	printf("Enter level, job number, and basic pay\nEnter 0 (zero) for level to END\n");
	scanf("%d %d %d", &level, &job_number, &basic_pay);

	switch (level)  {
		case 1:
			conveyance_allowance = 1000;
			entertainment_allowance = 500;
			perks = conveyance_allowance + entertainment_allowance;
			house_rent = 0.25 * basic_pay;
			gross_salary = basic_pay + house_rent + perks;
			if (gross_salary <= 2000) {
				income_tax = 0;
				net_salary = gross_salary - income_tax;
			}
			else if (2000 < gross_salary && gross_salary <= 4000) {
					income_tax = 0.03 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else if(4000 < gross_salary && gross_salary <= 5000) {
					income_tax = 0.05 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else {
					income_tax = 0.08 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}

			printf("%d %d %.2f", level, job_number, net_salary);
			break;
		case 2:
			conveyance_allowance = 750;
			entertainment_allowance = 200;
			perks = conveyance_allowance + entertainment_allowance;
			house_rent = 0.25 * basic_pay;
			gross_salary = basic_pay + house_rent + perks;
			if (gross_salary <= 2000) {
				income_tax = 0;
				net_salary = gross_salary - income_tax;
			}
			else if (2000 < gross_salary && gross_salary <= 4000) {
					income_tax = 0.03 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else if(4000 < gross_salary && gross_salary <= 5000) {
					income_tax = 0.05 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else {
					income_tax = 0.08 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}

			printf("%d %d %.2f", level, job_number, net_salary);
			break;
		case 3:
			conveyance_allowance = 500;
			entertainment_allowance = 100;
			perks = conveyance_allowance + entertainment_allowance;
			house_rent = 0.25 * basic_pay;
			gross_salary = basic_pay + house_rent + perks;
			if (gross_salary <= 2000) {
				income_tax = 0;
				net_salary = gross_salary - income_tax;
			}
			else if (2000 < gross_salary && gross_salary <= 4000) {
					income_tax = 0.03 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else if(4000 < gross_salary && gross_salary <= 5000) {
					income_tax = 0.05 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else {
					income_tax = 0.08 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}

			printf("%d %d %.2f", level, job_number, net_salary);
			break;
		case 4:
			conveyance_allowance = 250;
			entertainment_allowance = 0;
			perks = conveyance_allowance + entertainment_allowance;
			house_rent = 0.25 * basic_pay;
			gross_salary = basic_pay + house_rent + perks;
			if (gross_salary <= 2000) {
				income_tax = 0;
				net_salary = gross_salary - income_tax;
			}
			else if (2000 < gross_salary && gross_salary <= 4000) {
					income_tax = 0.03 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else if(4000 < gross_salary && gross_salary <= 5000) {
					income_tax = 0.05 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}
			else {
					income_tax = 0.08 * gross_salary;
				    net_salary = gross_salary - income_tax;
			}

			printf("%d %d %.2f", level, job_number, net_salary);
			break;
		default:
			printf("END OF THE PROGRAM\n");

	}


    return 0;
}
