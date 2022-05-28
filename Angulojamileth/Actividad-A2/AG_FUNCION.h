
int AG_Suma()
{
	int AG_ax, AG_bx, AG_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>AG_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>AG_bx;
	AG_cx = AG_ax+AG_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<AG_ax<<" + "<<AG_bx<<" es igual a: "<<AG_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: ANGULO JAMILETH"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AG_CuentaMoneda()
{
	int AG_n,AG_c, AG_c1, AG_c2, AG_cl, AG_cz;
	float AG_x, AG_al, AG_a, AG_a1, AG_a2, AG_az;
	AG_c = 0;
	AG_c1 = 0;
	AG_c2 = 0;
	AG_a = 0;
	AG_a1 = 0;
	AG_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>AG_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>AG_x;
		AG_c = AG_c+1;
		AG_a = AG_a+AG_x;
		if(AG_x==0.25)
			{
				AG_c1 =AG_c1+1;
				AG_a1 = AG_x+AG_a1;
			}
		else
			{
				AG_c2 = AG_c2+1;
				AG_a2 = AG_a2+AG_x;
			}
	}
	while(AG_c<AG_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<AG_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<AG_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<AG_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<AG_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<AG_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<AG_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor:ANGULO JAMILETH"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AG_PuntoVenta()
{
	float AG_xx, AG_cc, AG_at, AG_nn, AG_vb, AG_viva, AG_vdes, AG_vfi, AG_vft;
	AG_cc = 0;
	AG_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> AG_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<AG_cc+1 <<": " ;   cin>> AG_xx;
		AG_cc = AG_cc+1;
		AG_at = AG_at+AG_xx;
	}
	while(AG_cc<AG_nn);			
	AG_vb = AG_at;
	AG_viva = AG_vb*0.12;
	AG_vdes = AG_vb*0.10;
	AG_vfi = AG_vb+AG_viva;
	AG_vft = AG_vfi-AG_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<AG_vfi<<endl;
	cout<<"Valor final es: "<<AG_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor:ANGULO JAMILETH"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AG_Edad()
{
	int AG_diaAct; 
	int AG_mesAct; 
	int AG_anoAct; 
	int AG_diaNac; 
	int AG_mesNac; 
	int AG_anoNac;			
	int AG_anoR, AG_mesR, AG_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> AG_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> AG_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> AG_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> AG_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> AG_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> AG_diaNac;			
	if (AG_anoAct > AG_anoNac)
	{
		if(AG_mesAct > AG_mesNac)	 
		{
			AG_anoR=AG_anoAct-AG_anoNac;	
			AG_mesR=AG_mesAct-AG_mesNac;					
		}
		else
		{
			AG_anoR=AG_anoAct-AG_anoNac-1;	
			AG_mesR=(AG_mesAct+12)-AG_mesNac;					
		}												
		if(AG_diaAct > AG_diaNac)
		{				
			AG_diaR=AG_diaAct-AG_diaNac;
		}
		else
		{
			AG_mesR=AG_mesR-1;
			AG_diaR=(AG_diaAct+30)-AG_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<AG_anoR<< endl;
		cout << " Mes: " <<AG_mesR << endl;
		cout << " Dia: " << AG_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int AG_Compara()
{
	int AG_aa, AG_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> AG_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> AG_bb;
	if (AG_aa==AG_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (AG_aa>AG_bb)
		{
		cout<<AG_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<AG_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor:ANGULO JAMILETH"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AG_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. SUMA DE 2 NÚMEROS"<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADORA DE EDAD"<<endl;
		cout<<"4. COMPARACIÓN DE 2 NÚMEROS"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				AG_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				AG_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				AG_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				AG_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				AG_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);

	return(0);
}
