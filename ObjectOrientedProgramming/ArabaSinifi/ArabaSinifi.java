package ArabaSinifi;

import Ders2.Araba;

public class ArabaSinifi {

	String araba;
	String renk;
	int yil;
	int fiyat;

	public ArabaSinifi() {
		System.out.println("nesne oluştu");
	}
	
	public ArabaSinifi(String araba,String renk, int yil1, int fiyat1) {
		this.araba=araba;
		this.renk=renk;
		yil=yil1;
		fiyat=fiyat1;
	}
	
	public static void main(String[] args) {
		
		ArabaSinifi araba1 = new ArabaSinifi("Nissan","mavi",2015,15000);
		System.out.println(araba1.araba);
		System.out.println(araba1.renk);
		System.out.println(araba1.yil);
		System.out.println(araba1.fiyat);
		
	}

}
