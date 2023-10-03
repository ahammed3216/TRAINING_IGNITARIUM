#include<stdio.h>
typedef int int32_t;
typedef char int8_t;


int8_t WriteData();
int8_t ReadData(int32_t a);
int8_t SearchModel(int32_t a);

typedef struct vehicle{
	
	int8_t id;
	int8_t brand[10];
	int8_t VehicleType[10];
	int32_t VehicleModel;
	struct TechSpec
	{
	
		int8_t air_bag;
		int8_t traction;
		int8_t abs;
		int8_t esp;
		int8_t speakers;
	
	
	}tech;


}vehicle_databse;



vehicle_databse data[10];
int main()
{


	int8_t option='Z';
	int32_t search_id =0,search_model=0;
	
	while (option !='Q')
	{

		printf("\nEnter A to Enter the details of the vehicle\nEnter B to serach the details of the vehicle with id\nenter C to search the detils of the vehicles with model number\nEnter Q to Quit ");
		printf("\n\nplease Enter the option ");
		scanf(" %c",&option);
		if(option=='A')
		{
			printf("Enter the details of the vehicle ");
			WriteData();
		}
		else if(option =='B')
		{
		
			printf("\nEnter the id of the vehicle to fetch the data");
			scanf("%d",&search_id);
			ReadData(search_id);
		
		}
		else if(option =='C')
		{
		
			printf("\nplease enter the model to search "); 
			scanf("%d",&search_model);
			SearchModel(search_model);
		
		
		}
		else if (option =='Q')
		{
		
			printf("\nQuitting the application ");
		
		}
		else
		{
		
			printf("\nInvalid option ");
		
		}
	
	
	
	}




}



int8_t WriteData()
{


	int8_t i=0;
	for(i=0;i<10;i++)
	{
		if((data+i)->id ==0)
		{
			printf("\nEnter the id of the vehicle  :");
			scanf("%hhd",&((data+i)->id));
			printf("\nEnter the brandname of the vehicle :");
			scanf("%s",(data+i)->brand);
			printf("\nEnter the vehicle type (SEDAN,SUV)");
			scanf("%s",(data+i)->VehicleType);
			printf("\nEnte the model of the vehicle in year(200) ");
			scanf("%d",&(data+i)->VehicleModel);
			printf("\nEnter the no of airbags in the vehicel ");
			scanf("%hhd",&(data[i].tech.air_bag));
			printf("\nEnter 1 if the vehicle has abs and 0 if not");
			scanf("%hhd",&(data[i].tech.abs));
			printf("\nEnter the number of speakers available in the vehicle ");
			scanf("%hhd",&(data[i].tech.speakers));

			return 1;
			
		}
	
	
	
	
	{
	
		printf("\nThe size of the database is over !!!!please contact the admin team ");
	}
	}

}

int8_t ReadData(int a)
{

	int8_t i=0;
	for(i=0;i<10;i++)
	{
	
		if((data+i)->id == a)
		{
		
			printf("\n\nThe brandname of the vehicle is %s",((data+i)->brand));
			printf("\nThe vegicle type of the vehicle is %s",((data+i)->VehicleType));
			printf("\nthe Model of the vehicle is %d",((data+i)->VehicleModel));
			printf("\nthe number of airbags in the vehicle is %hhd",(data[i].tech.air_bag));
			if (data[i].tech.abs ==1)
				printf("\nthid vehicle has  abs property");
			else
				printf("\nThis vehicle has no abs propert");
			printf("\nThe number of speakers available in the vehicle is %hhd",(data[i].tech.speakers));
		
		
		}
		else
		{
			printf("\nThe vegicle is not found in this id ");
		
		}
	
	
	}



}


int8_t SearchModel(int32_t a)
{

	int8_t i=0,search_id=0;
	for(i=0;i<10;i++)
	{
		//printf("\n%d",((data+i)->VehicleModel));	
		if(((data+i)->VehicleModel) == a)
		{
		
			search_id=(data+i)->id;
			ReadData(search_id);
		
		}
		else
		{
			printf("\nthe vehicle is not found in this model number ");
		
		}
	
	
	
	
	}



}



