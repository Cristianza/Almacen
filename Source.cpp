#include<iostream>
#include<conio.h>
using namespace std;
void main(){
	int a;
	int aa;
	int acom;
	int bb;
	int c;
	float caja;
	int cas;
	float cc;
	int cdv;
	int codcom;
	float cont;
	int d;
	int dev;
	int eli;
	int ff;
	int gg;
	float hh;
	int i;
	int j;
	int jj;
	int kk;
	int ll;
	int m;
	int mm;
	int moda;
	int nn;
	int np;
	int numcom;
	int numdev;
	int numven;
	float pdc[1000];
	int pp[100];
	float prod[1000][1000];
	int q;
	int sall;
	int ss;
	int sw;
	int t;
	int tc;
	float totcom;
	float totdev;
	float totven;
	int uni;
	int unidev;
	float uvd[100];
	int var;
	int w;
	int xx;
	int z;
	cont = 0;
	totven = 0;
	totdev = 0;
	totcom = 0;
	numcom = 0;
	kk = 1;
	t = 0;
	j = 1;
	tc = 0;
	caja = 0;
	numdev = 0;
	numven = 0;
	do {
		cout << "digite el numero de productos a la venta" << endl;
		cin >> np;
		if (np<=0) {
			cout << " numero de unidades invalido " << endl;
			cout << " porfavor digite un numero de unidades mayor que 0 " << endl;
		}
	} while (np<=0);
	for (i=1;i<=np;i++) {
		cout << " digite el codigo del producto" << "  " << i << endl;
		cin >> prod[1][i];
		prod[2][i] = (5);
	}
	for (i=1;i<=np;i++) {
		cout << " digite el precio de compra de el producto con codigo:   " << prod[1][i] << endl;
		cin >> pdc[i];
	}
	for (i=1;i<=np;i++) {
		prod[3][i] = (pdc[i]+(pdc[i]*(0.2)));
	}
	d = 1;
	while (d==1) {
		do {
			cout << " si desea ir al sector de bodega digite (1)" << endl;
			cout << " si deses ir al sector de vetas digite (2)" << endl;
			cout << " si desea ir al sector de devoluciones digite (3)" << endl;
			cout << " si el dia ha terminado digite (4)" << endl;
			cin >> m;
			if (m!=1 && m!=2 && m!=3 && m!=4) {
				cout << " opcion invalida " << endl;
				cout << " porfavor digite un opcion valida " << endl;
			}
		} while (!(m==1 || m==2 || m==3 || m==4));
		while (m==1) {
			do {
				cout << " si desea ver el numero de unidades por producto digite (1)" << endl;
				cout << " si desea saber el precio de venta por unidad de cada producto digite (2)" << endl;
				cout << " si desea añadir un producto ala venta digite (3)" << endl;
				cout << " si desea sacar un producto de circulacon digite (4)" << endl;
				cout << " si desea comprar productos digite (5)" << endl;
				cout << " si desea salir de este menu digite (6)" << endl;
				cin >> w;
				if (w!=1 && w!=2 && w!=3 && w!=4 && w!=5 && w!=6) {
					cout << " opcion invalida " << endl;
					cout << " porfavor digite un opcion valida " << endl;
				}
			} while (!(w==1 || w==2 || w==3 || w==4 || w==5 || w==6));
			sw = 1;
			q = 1;
			while ((q==1)) {
				if ((w==1)) {
					for (i=1;i<=np;i++) {
						cout << " hay" << " " << prod[2][i] << " " << "unidades del producto con codigo  " << prod[1][i] << endl;
					}
					do {
						cout << " para volver al menu anterior digite (2)" << endl;
						cin >> q;
						if (q!=2) {
							cout << " opcion invalida " << endl;
							cout << " porfavor digite un opcion valida " << endl;
						}
					} while (q!=2);
				}
				if ((w==2)) {
					for (i=1;i<=np;i++) {
						cout << "el precio de venta del producto con codigo " << prod[1][i] << " es:" << prod[3][i] << endl;
					}
					do {
						cout << " para volver al menu anterior digite (2)" << endl;
						cin >> q;
						if (q!=2) {
							cout << " opcion invalida " << endl;
							cout << " porfavor digite un opcion valida " << endl;
						}
					} while (q!=2);
				}
				if ((w==3)) {
					do {
						aa = 0;
						cout << " digite el codigo del producto a poner en venta " << endl;
						cin >> ll;
						for (i=1;i<=np;i++) {
							if (ll!=prod[1][i]) {
								aa = aa+1;
							}
						}
						if (aa==np) {
							prod[1][np+1] = ll;
						} else {
							cout << " codigo de producto invalido " << endl;
							cout << " este producto ya esta en venta " << endl;
							cout << " digite un codigo de producto valido " << endl;
						}
					} while (aa!=np);
					cout << " digite el presio de compra del producto agregado " << endl;
					cin >> pdc[np+1];
					prod[3][np+1] = (pdc[np+1]+(pdc[np+1]*(0.2)));
					prod[2][np+1] = (5);
					np = np+1;
					do {
						cout << " para volver al menu anterior digite (2)" << endl;
						cin >> q;
						if (q!=2) {
							cout << " opcion invalida " << endl;
							cout << " porfavor digite un opcion valida " << endl;
						}
					} while (q!=2);
				}
				if ((w==4)) {
					xx = 0;
					do {
						cout << " digite el codigo del producto que desea sacar de circulacion" << endl;
						cin >> eli;
						for (i=1;i<=np;i++) {
							if (eli==prod[1][i]) {
								xx = xx+1;
							}
						}
						if (xx!=1) {
							cout << " codigo de producto invalido " << endl;
							cout << " este producto no esta en venta " << endl;
							cout << " digite un codigo de producto valido " << endl;
						}
					} while (xx!=1);
					for (i=1;i<=np;i++) {
						if (eli==prod[1][i]) {
							for (j=i;j<=np-1;j++) {
								prod[1][j] = (prod[1][j+1]);
								prod[2][j] = (prod[2][j+1]);
								prod[3][j] = (prod[3][j+1]);
							}
							np = np-1;
						}
					}
					do {
						cout << " para volver al menu anterior digite (2)" << endl;
						cin >> q;
						if (q!=2) {
							cout << " opcion invalida " << endl;
							cout << " porfavor digite un opcion valida " << endl;
						}
					} while (q!=2);
				}
				if ((w==5)) {
					bb = 0;
					do {
						cout << " digite el codigo del producto que desea comprar " << endl;
						cin >> codcom;
						for (i=1;i<=np;i++) {
							if (codcom==prod[1][i]) {
								bb = bb+1;
							}
						}
						if (bb!=1) {
							cout << " codigo de producto invalido " << endl;
							cout << " este producto no esta en bodega " << endl;
							cout << " digite un codigo de producto valido " << endl;
						}
					} while (bb!=1);
					do {
						cout << " digite el numero de unidades que desea comprar " << endl;
						cin >> uni;
						if (uni<=0 || uni>5) {
							cout << " numero de unidades incorrectos" << endl;
							cout << " por favor digite un numero de unidades correcto " << endl;
						}
					} while ((uni>5));
					for (i=1;i<=np;i++) {
						if (prod[1][i]==codcom) {
							a = i;
						}
					}
					if (caja>=uni*pdc[a] && prod[2][a]+uni<=5) {
						prod[2][a] = (prod[2][a]+uni);
						caja = caja-(uni*pdc[a]);
						totcom = totcom+(uni*pdc[a]);
						numcom = numcom+1;
					} else {
						if (caja<uni*pdc[a]) {
							cout << " no se puede hacer la compra ya que no hay suficiente dinero en caja " << endl;
						}
						if (prod[2][a]+uni>5) {
							cout << " el numero de unidades del producto excede la capacidad de la bodega " << endl;
						}
					}
					do {
						cout << " para volver al menu anterior digite (2)" << endl;
						cin >> q;
						if (q!=2) {
							cout << " opcion invalida " << endl;
							cout << " porfavor digite un opcion valida " << endl;
						}
					} while (q!=2);
				}
				if ((w==6)) {
					q = 2;
					m = 100;
				}
			}
		}
		while (m==2) {
			do {
				cout << " ¿ tiene rageta amigo ? " << endl;
				cout << " si tiene targeta amigo digite (1)" << endl;
				cout << " si no tiene targeta amigo digite (2)" << endl;
				cout << " si quiere ver el dinero que hay en caja digite (3)" << endl;
				cout << " si desea regresar al menu anterior digite digite (4) " << endl;
				cin >> z;
				if (z!=1 && z!=2 && z!=3 && z!=4) {
					cout << " opcion invalida " << endl;
					cout << " porfavor digite un opcion valida " << endl;
				}
			} while (!(z==1 || z==2 || z==3 || z==4));
			acom = 0;
			mm = 1;
			while (z==1) {
				cas = 1;
				ff = 1;
				hh = 0;
				while (cas==1) {
					jj = 0;
					nn = 0;
					do {
						cout << " digite el codigo del producto a vender " << endl;
						cin >> cdv;
						for (i=1;i<=np;i++) {
							if (cdv==prod[1][i]) {
								nn = nn+1;
							}
						}
						if (nn!=1) {
							cout << " codigo de producto invalido " << endl;
							cout << " este producto no esta en bodega " << endl;
							cout << " digite un codigo de producto valido " << endl;
						}
					} while (nn!=1);
					do {
						cout << " digite el numero de unidades a vender " << endl;
						cin >> uvd[mm];
						if (uvd[mm]<=0) {
							cout << " numero de unidades invalido " << endl;
							cout << " digite un numero de unidades mayor que 0 " << endl;
						}
					} while (uvd[mm]<=0);
					i = 1;
					while ((i<=np && jj==0)) {
						if (cdv==prod[1][i]) {
							pp[m] = (i);
							jj = 1;
						} else {
							i = i+1;
						}
					}
					if (prod[2][pp[mm]]<uvd[mm]) {
						cout << " no hay suficientes unidades del producto  " << prod[1][mm] << "  para realizar la venta " << endl;
						cout << " la venta ha sido cancelada " << endl;
						do {
							cout << " digite (2) para regresar " << endl;
							cin >> c;
							if (c!=2) {
								cout << " opcion invalida " << endl;
								cout << " porfavor digite un opcion valida " << endl;
							}
						} while (c!=2);
						cas = 100;
						m = 100;
						z = 100;
					} else {
						tc = (prod[3][pp[mm]]*uvd[mm]);
						acom = acom+tc;
						do {
							cout << " si desea agregar algo mas a la compra digite (1) " << endl;
							cout << " en caso contrario digite (2) " << endl;
							cin >> cas;
							if (cas!=1 && cas!=2) {
								cout << " opcion invalida " << endl;
								cout << " porfavor digite un opcion valida " << endl;
							}
						} while (!(cas==1 || cas==2));
						cc = 1;
						if (cas==1) {
							ff = ff+1;
							mm = mm+1;
							sall = 0;
						}
						if (cas==2) {
							mm = 1;
							for (i=1;i<=ff;i++) {
								cout << " producto. " << prod[1][pp[mm]] << endl;
								cout << " numero de unidades: " << uvd[mm] << endl;
								prod[2][pp[mm]] = prod[2][pp[mm]]-uvd[mm];
								mm = mm+1;
								hh = hh+1;
							}
						}
						sall = 1;
					}
				}
				if (sall==1) {
					if (acom>100000 && acom<=500000) {
						acom = acom-(acom*(0.2));
					}
					if (acom>500000) {
						acom = acom-(acom*(0.3));
					}
					totven = totven+acom;
					caja = caja+acom;
					if (hh==ff) {
						cout << " total: " << acom << endl;
					}
					do {
						cout << " digite (2) para regresar " << endl;
						cin >> cas;
						if (cas!=2) {
							cout << " opcion invalida " << endl;
							cout << " porfavor digite un opcion valida " << endl;
						}
					} while (cas!=2);
					if (cas==2) {
						numven = numven+1;
						z = 100;
						m = 100;
					}
				}
			}
			while ((z==2)) {
				do {
					cout << " ¿ desea solicitar la targeta amigo ? " << endl;
					cout << " si desea solicitar la targeta amigo digite (1)" << endl;
					cout << " si no desea solicitar la targeta amigo digite (2)" << endl;
					cout << " si desea salir al menu anterior digite (3) " << endl;
					cin >> ss;
					if (ss!=1 && ss!=2 && ss!=3) {
						cout << " opcion invalida " << endl;
						cout << " porfavor digite un opcion valida " << endl;
					}
				} while (!(ss==1 || ss==2 || ss==3));
				if (ss==1) {
					cas = 1;
					ff = 1;
					hh = 0;
					while (cas==1) {
						jj = 0;
						nn = 0;
						do {
							cout << " digite el codigo del producto a vender " << endl;
							cin >> cdv;
							for (i=1;i<=np;i++) {
								if (cdv==prod[1][i]) {
									nn = nn+1;
								}
							}
							if (nn!=1) {
								cout << " codigo de producto invalido " << endl;
								cout << " este producto no esta en bodega " << endl;
								cout << " digite un codigo de producto valido " << endl;
							}
						} while (nn!=1);
						do {
							cout << " digite el numero de unidades a vender " << endl;
							cin >> uvd[mm];
							if (uvd[mm]<=0) {
								cout << " numero de unidades invalido " << endl;
								cout << " digite un numero de unidades mayor que 0 " << endl;
							}
						} while (uvd[mm]<=0);
						i = 1;
						while ((i<=np && jj==0)) {
							if (cdv==prod[1][i]) {
								pp[mm] = (i);
								jj = 1;
							} else {
								i = i+1;
							}
						}
						if (prod[2][pp[mm]]<uvd[mm]) {
							cout << " no hay suficientes unidades del producto  " << prod[1][mm] << "  para realizar la venta " << endl;
							cout << " la venta ha sido cancelada " << endl;
							do {
								cout << " digite (2) para regresar " << endl;
								cin >> c;
								if (c!=2) {
									cout << " opcion invalida " << endl;
									cout << " porfavor digite un opcion valida " << endl;
								}
							} while (c!=2);
							cas = 100;
							m = 100;
							z = 100;
						} else {
							tc = (prod[3][pp[mm]]*uvd[mm]);
							acom = acom+tc;
							do {
								cout << " si desea agregar algo mas a la compra digite (1) " << endl;
								cout << " en caso contrario digite (2) " << endl;
								cin >> cas;
								if (cas!=1 && cas!=2) {
									cout << " opcion invalida " << endl;
									cout << " porfavor digite un opcion valida " << endl;
								}
							} while (!(cas==1 || cas==2));
							cc = 1;
							if (cas==1) {
								ff = ff+1;
								mm = mm+1;
								sall = 0;
							}
							if (cas==2) {
								for (i=1;i<=ff;i++) {
									cout << " producto. " << prod[1][pp[mm]] << endl;
									cout << " numero de unidades: " << uvd[mm] << endl;
									prod[2][pp[mm]] = prod[2][pp[mm]]-uvd[mm];
									mm = mm+1;
									hh = hh+1;
								}
							}
							sall = 1;
						}
					}
					if (sall==1) {
						acom = acom-(acom*(0.1));
						totven = totven+acom;
						caja = caja+acom;
						if (hh==ff) {
							cout << " total: " << acom << endl;
						}
						do {
							cout << " digite (2) para regresar " << endl;
							cin >> cas;
							if (cas!=2) {
								cout << " opcion invalida " << endl;
								cout << " porfavor digite un opcion valida " << endl;
							}
						} while (cas!=2);
						if (cas==2) {
							z = 100;
							m = 100;
							numven = numven+1;
						}
					}
				}
				if (ss==2) {
					cas = 1;
					ff = 1;
					hh = 0;
					while (cas==1) {
						jj = 0;
						nn = 0;
						do {
							cout << " digite el codigo del producto a vender " << endl;
							cin >> cdv;
							for (i=1;i<=np;i++) {
								if (cdv==prod[1][i]) {
									nn = nn+1;
								}
							}
							if (nn!=1) {
								cout << " codigo de producto invalido " << endl;
								cout << " este producto no esta en bodega " << endl;
								cout << " digite un codigo de producto valido " << endl;
							}
						} while (nn!=1);
						do {
							cout << " digite el numero de unidades a vender " << endl;
							cin >> uvd[mm];
							if (uvd[mm]<=0) {
								cout << " numero de unidades invalido " << endl;
								cout << " digite un numero de unidades mayor que 0 " << endl;
							}
						} while (uvd[mm]<=0);
						i = 1;
						while ((i<=np && jj==0)) {
							if (cdv==prod[1][i]) {
								pp[mm] = (i);
								jj = 1;
							} else {
								i = i+1;
							}
						}
						if (prod[2][pp[mm]-1]<uvd[mm]) {
							cout << " no hay suficientes unidades del producto  " << prod[1][mm] << "  para realizar la venta " << endl;
							cout << " la venta ha sido cancelada " << endl;
							do {
								cout << " digite (2) para regresar " << endl;
								cin >> c;
								if (c!=2) {
									cout << " opcion invalida " << endl;
									cout << " porfavor digite un opcion valida " << endl;
								}
							} while (c!=2);
							cas = 100;
							m = 100;
							z = 100;
						} else {
							tc = (prod[3][pp[mm]]*uvd[mm]);
							acom = acom+tc;
							do {
								cout << " si desea agregar algo mas a la compra digite (1) " << endl;
								cout << " en caso contrario digite (2) " << endl;
								cin >> cas;
								if (cas!=1 && cas!=2) {
									cout << " opcion invalida " << endl;
									cout << " porfavor digite un opcion valida " << endl;
								}
							} while (!(cas==1 || cas==2));
							cc = 1;
							if (cas==1) {
								ff = ff+1;
								mm = mm+1;
								sall = 0;
							}
							if (cas==2) {
								mm = 1;
								for (i=1;i<=ff;i++) {
									cout << " producto. " << prod[1][pp[mm]] << endl;
									cout << " numero de unidades: " << uvd[mm] << endl;
									prod[2][pp[mm]] = prod[2][pp[mm]]-uvd[mm];
									hh = hh+1;
									mm = mm+1;
								}
							}
							prod[2][mm] = (prod[2][mm]-uvd[mm]);
							sall = 1;
						}
					}
					if (sall==1) {
						totven = totven+acom;
						caja = caja+acom;
						if (hh==ff) {
							cout << " total: " << acom << endl;
						}
						do {
							cout << " digite (2) para regresar " << endl;
							cin >> cas;
							if (cas!=2) {
								cout << " opcion invalida " << endl;
								cout << " porfavor digite un opcion valida " << endl;
							}
						} while (cas!=2);
						if (cas==2) {
							numven = numven+1;
							z = 100;
							m = 100;
						}
					}
				}
				if (ss==3) {
					z = 100;
				}
			}
			while (z==3) {
				cout << " el caja hay " << caja << " $" << endl;
				do {
					cout << " digite (1) para regresar " << endl;
					cin >> gg;
					if (gg!=1) {
						cout << " opcion invalida " << endl;
						cout << " porfavor digite un opcion valida " << endl;
					}
				} while (gg!=1);
				if (gg==1) {
					z = 100;
					m = 100;
				}
			}
			while (z==4) {
				z = 100;
				m = 100;
			}
		}
		while (m==3) {
			cout << " ¿cual fue la modalidad de pago al hacer la compra? " << endl;
			cout << " tarjeta amigo (1)" << endl;
			cout << " tarjeta amigo [solicitud] (2) " << endl;
			cout << " sin tarjeta amigo (3) " << endl;
			cin >> moda;
			cout << " digite el codigo del producto a devolver " << endl;
			cin >> dev;
			cont = 0;
			for (i=1;i<=np;i++) {
				if (dev==prod[1][i]) {
					cont = cont+1;
				}
			}
			if (cont==1) {
				do {
					cout << " digiteb el numero de unidades a devolver " << endl;
					cin >> unidev;
					if (unidev<=0 || unidev>5) {
						cout << " el numero de unidades a devolver es incorrecto " << endl;
						cout << " vuelva a digitarlo " << endl;
					}
				} while (unidev>5);
				for (i=1;i<=np;i++) {
					if (dev==prod[1][i]) {
						var = i;
					}
				}
				ss = (unidev*prod[3][var]);
				if (moda==1) {
					if (ss>100000 && ss<=500000) {
						ss = ss-(ss*0.2);
					}
					if (ss>500000) {
						ss = ss-(ss*0.3);
					}
					if (caja>=ss) {
						caja = caja-ss;
						totdev = totdev+ss;
						numdev = numdev+1;
					} else {
						cout << " no hay suficinete dinero en caja para hacer la devolucion " << endl;
					}
				}
				if (moda==2) {
					ss = ss-(ss*0.1);
					if (caja>=ss) {
						caja = caja-ss;
						totdev = totdev+ss;
						numdev = numdev+1;
					} else {
						cout << " no hay suficinete dinero en caja para hacer la devolucion " << endl;
					}
				}
				if (moda==3) {
					if (caja>=ss) {
						caja = caja-ss;
						totdev = totdev+ss;
						numdev = numdev+1;
					} else {
						cout << " no hay suficinete dinero en caja para hacer la devolucion " << endl;
					}
				}
				do {
					cout << " para volver al menu anterior digite (2) " << endl;
					cin >> q;
					if (q!=2) {
						cout << " opcion invalida " << endl;
						cout << " porfavor digite un opcion valida " << endl;
					}
				} while (q!=2);
				m = 100;
			} else {
				cout << " no se puede hacer la devolucion porque el producto no esta en circulacion " << endl;
				do {
					cout << " para volver al menu anterior digite (2) " << endl;
					cin >> q;
					if (q!=2) {
						cout << " opcion invalida " << endl;
						cout << " porfavor digite un opcion valida " << endl;
					}
				} while (q!=2);
				m = 100;
			}
		}
		while (m==4) {
			cout << " en el dia se realinaron " << numven << " ventas" << endl;
			cout << " el total de ventas del dia es de: " << totven << " $ " << endl;
			cout << " en el dia se realizaron " << numdev << " devoluciones " << endl;
			cout << " el total de devoluciones del dia es: " << totdev << " $ " << endl;
			cout << " en el dia se realizaron " << numcom << " compras a los productores " << endl;
			cout << " el total de compras a los productores es: " << totcom << " $ " << endl;
			do {
				cout << " para cerrar digite (2) " << endl;
				cin >> d;
				if (d!=2) {
					cout << " opcion invalida " << endl;
					cout << " porfavor digite un opcion valida " << endl;
				}
			} while (d!=2);
			m = 100;
		}
		_getch();
	}
