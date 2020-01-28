#include <stdio.h>
#include <stdlib.h>

void sirala (int *yarismaci,int *kyarismaci,int *syarismaci,int *ynum,int x)
{
    int i,k,g,ge,gec,geci;

    for(i=0;i<x;i++){
        for(k=i;k<x;k++){
            if(yarismaci[k]<yarismaci[i])
            {

                g=yarismaci[k];
                yarismaci[k]=yarismaci[i];
                yarismaci[i]=g;

                ge=kyarismaci[k];
                kyarismaci[k]=kyarismaci[i];
                kyarismaci[i]=ge;

                gec=syarismaci[k];
                syarismaci[k]=syarismaci[i];
                syarismaci[i]=gec;

                geci=ynum[k];
                ynum[k]=ynum[i];
                ynum[i]=geci;
            }
        }
    }

}

void esitlik (int *yarismaci,int *kyarismaci,int *syarismaci,int *ynum,int y)
{

    int i,k,g,ge,gec,geci;

    for(i=0;i<y;i++){
    for(k=i;k<y;k++){
     if (yarismaci[k]==yarismaci[i] && kyarismaci[k]<kyarismaci[i])
            {
                      g=yarismaci[k];
                      yarismaci[k]=yarismaci[i];
                      yarismaci[i]=g;

                      ge=kyarismaci[k];
                      kyarismaci[k]=kyarismaci[i];
                      kyarismaci[i]=ge;

                      gec=syarismaci[k];
                      syarismaci[k]=syarismaci[i];
                      syarismaci[i]=gec;

                      geci=ynum[k];
                      ynum[k]=ynum[i];
                      ynum[i]=geci;
            }
        else if (yarismaci[k]==yarismaci[i] && kyarismaci[k]==kyarismaci[i] && ynum[k]>ynum[i])
        {
                      g=yarismaci[k];
                      yarismaci[k]=yarismaci[i];
                      yarismaci[i]=g;

                      ge=kyarismaci[k];
                      kyarismaci[k]=kyarismaci[i];
                      kyarismaci[i]=ge;

                      gec=syarismaci[k];
                      syarismaci[k]=syarismaci[i];
                      syarismaci[i]=gec;

                      geci=ynum[k];
                      ynum[k]=ynum[i];
                      ynum[i]=geci;
        }
    }

    }


}

void ksirala (int *ksirala,int *ynum,int z)
{
    int i,k,g,geci;

    for(i=0;i<z;i++){
        for(k=i;k<z;k++){
            if(ksirala[k]<ksirala[i])
            {

                g=ksirala[k];
                ksirala[k]=ksirala[i];
                ksirala[i]=g;

                geci=ynum[k];
                ynum[k]=ynum[i];
                ynum[i]=geci;
            }

                        }
     }
}

void k_esitlik (int *ksirala,int *ynum,int v)
{
    int i,k,g,geci;

    for(i=0;i<v;i++){
        for(k=i;k<v;k++){
            if(ksirala[k]==ksirala[i] && ynum[k]>ynum[i])
            {

                g=ksirala[k];
                ksirala[k]=ksirala[i];
                ksirala[i]=g;

                geci=ynum[k];
                ynum[k]=ynum[i];
                ynum[i]=geci;
            }

                        }
     }
}

int main()
{
    int ysayisi,hsayisi;
    int hsayac,ysayac,ksayac,psayac,ssayac,sey_sayac;
    int msecim,isecim,cikis;
    int k;


        int ksecim[20][5][3]; //   ysayisi/hsayisi/secimsayisi
        int kpuan[20][5][3]; //   ysayisi/hsayisi/secimsayisi
        int ssecim[5][3];   //   hsayisi/secimsayisi
        int spuan [5][3];   //   hsayisi/secimsayisi


         int yarismaci[20]={0}; //yarismaci genel puani
         int hpuan[5][20];    // haftalik genel puan
         int hkpuan[20][20]={0};   //koclar tarafindan verilen genel puan
         int syarismaci[20]={0}; //seyirci puani
         int kyarismaci[20]={0};  //koc puani
         int haftalik[20]={0};
         int khaftalik[20]={0};
         int shaftalik[20]={0};
         int birincilik[20]={0};
         int ysirala[20];
         int ynum[20];
         int kysirala[20];
         int sysirala[20];
         int kontrol[5][20][3];
         int pkontrol[5][20][3];
         int skontrol [5][3];
         int pskontrol[5][3];
         int a;
         int oncekiyarisma;




 printf("BERKE ONCUL | UGUR CIFTCI\n-------------------------\n 172803011  | 172803053\n");   // Bilgiler
 printf("-------------------------\n\n");




    anamenu:       //ana menuye donus noktası

    printf("---ANA MENU---\n");                  //Ana menu
    printf("1. YENI YARISMA DUZENLEME \n");
    printf("2. SON DUZENLENEN YARISMANIN ISTATISTIKLERINI GORUNTULE \n");
    printf("3. CIKIS\n");
    printf("Lutfen seciniz:");
    scanf("%d" , &msecim);
    printf("\n");

 while (msecim<1 || msecim>3)
 {
   printf("\n\n");
   printf("\aHATA!-Gecerli secim yapiniz!\n\n");            //Gecersiz secim hatasi
   printf("---ANA MENU---\n");
   printf("1. Yeni yarisma duzenleme\n");
   printf("2. Son duzenlenen yarismanin istatistiklerini goruntuleme\n");
   printf("3. Cikis\n");
   printf("Lutfen seciniz:");
   scanf("%d" , &msecim);

 }

 switch (msecim)              //menu secenekleri
 {
 case 1:
     {
         oncekiyarisma=1;    // onceki yarismanin olup olmadigi kontrolu

          printf("----------YENI YARISMA----------\n");
          printf("YARISMA BILGILERI\n\n");


         printf("Yarismaci sayisi:");          //yarisma bilgileri
         scanf("%d" , &ysayisi);

while (ysayisi<5 || ysayisi>20)
         {
             printf("\n");
         printf("\aHATA!\n");
         printf("YARISMACI SAYISI 5-20 ARASI OLMALI\n");
         printf("Yarismaci sayisi:");
         scanf("%d" , &ysayisi);
         }


         printf("Hafta sayisi:");
         scanf("%d" , &hsayisi);
          printf("\n");

          while(hsayisi<3 || hsayisi>5)
          {
              printf("\n");
              printf("\aHATA!\n");
              printf("HAFTA SAYISI 3-5 ARASI OLMALI\n");
              printf("Hafta sayisi:");
              scanf("%d" , &hsayisi);
          }




             printf("\n");

         for (a=0;a<ysayisi;a++)   //birden fazla yarisma yapilmasina karsin sifirlama
         {
             ynum[a]=a+1;
             yarismaci[a]=0;
             syarismaci[a]=0;
             kyarismaci[a]=0;
             haftalik[a]=0;
             khaftalik[a]=0;
             shaftalik[a]=0;
             birincilik[a]=0;
         }



            for(a=0;a<hsayisi;a++)
            {
                for(k=0;k<ysayisi;k++)             //birden fazla yarisma yapilmasina karsin sifirlama
                {
                     hpuan[a][k]=0;
                }
            }

            for(a=0;a<ysayisi;a++)
                for(k=0;k<ysayisi;k++)              //birden fazla yarisma yapilmasina karsin sifirlama
                hkpuan[a][k]=0;






          for(hsayac=0;hsayac<hsayisi;hsayac++)           //Hafta sayar
          {

              printf("---------HAFTA %d---------\n\n",hsayac+1);
              for(ysayac=0;ysayac<ysayisi;ysayac++) //KOCLARIN SAYISI
          {
               for(a=0;a<hsayisi;a++)
               for(ssayac=0;ssayac<ysayisi;ssayac++)    //tekrar kontrollerinin sifirlanmasi
               for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

                printf("-----KOC SECIM VE PUANLAMA-----\n");
              printf("--KOC %d--\n\n",ysayac+1);

              for(ksayac=0;ksayac<=2;ksayac++) //KOCUN 3 SECİMİ
              {



                  printf("%d. SECIM:",ksayac+1);
                  scanf("%d",&ksecim[ysayac][hsayac][ksayac]);
                  kontrol[hsayac][ysayac][ksayac]=ksecim[ysayac][hsayac][ksayac];
                  printf("---------\n\n");

                  tkontrol :  // tekrar kontrol icin dönüs noktası


                  while (0>=ksecim[ysayac][hsayac][ksayac] || ksecim[ysayac][hsayac][ksayac]>ysayisi)  //secimin yarismaci numaralari aralarinda olmadigi durumda hata mesaji
                  {
                      printf("\aHATA\n");
                      printf("Gecersiz secim yaptiniz\n");
                      printf("%d. SECIM:",ksayac+1);
                      scanf("%d",&ksecim[ysayac][hsayac][ksayac]);
                      kontrol[hsayac][ysayac][ksayac]=ksecim[ysayac][hsayac][ksayac];
                      printf("---------\n\n");
                      printf("\n");

                  }

                  while (ksecim[ysayac][hsayac][ksayac]==ysayac+1)   //kocun kendi yarismacisini secmesini engellemek adina verilen hata
                  {
                      printf("\aHATA\n");
                      printf("Koclar kendi yarismacisiniz secemez\n");
                      printf("%d. SECIM:",ksayac+1);
                      scanf("%d",&ksecim[ysayac][hsayac][ksayac]);
                      kontrol[hsayac][ysayac][ksayac]=ksecim[ysayac][hsayac][ksayac];
                      printf("---------\n\n");
                      printf("\n");
                  }

                  if (0>=ksecim[ysayac][hsayac][ksayac] || ksecim[ysayac][hsayac][ksayac]>ysayisi)  //ilk hata 2. adimda yapildiysa tkontrol noktasina döner
                    goto tkontrol;




                 while (kontrol[hsayac][ysayac][0]==kontrol[hsayac][ysayac][1] || kontrol[hsayac][ysayac][0]==kontrol[hsayac][ysayac][2] || kontrol[hsayac][ysayac][1]==kontrol[hsayac][ysayac][2])
                 {
                   printf("\aHATA\n");                                         //yarismaciyi birden fazla secmemek icin kontroller
                      printf("Ayni yarismaciyi birden fazla sectiniz\n");
                      printf("%d. SECIM:",ksayac+1);
                      scanf("%d",&ksecim[ysayac][hsayac][ksayac]);
                      kontrol[hsayac][ysayac][ksayac]=ksecim[ysayac][hsayac][ksayac];
                      printf("---------\n\n");
                      printf("\n");
                 }

                 if (0>=ksecim[ysayac][hsayac][ksayac] || ksecim[ysayac][hsayac][ksayac]>ysayisi|| ksecim[ysayac][hsayac][ksayac]==ysayac+1)
                 {
                     goto tkontrol;
                 }

                                         //son adimda 1. kisitlama veya 2. kisitlama uygulanmazsa geri döner













                    printf("%d. KOCUN %d. YARISMACIYA VERDIGI PUAN:",ysayac+1,ksecim[ysayac][hsayac][ksayac]);  //koc puanlamalari
                    scanf("%d" , &kpuan[ysayac][hsayac][ksayac]);
                    pkontrol[hsayac][ysayac][ksayac]=kpuan[ysayac][hsayac][ksayac];
                    printf("\n");

                    skontrol : //skontrol donus noktası

                    while (0>=kpuan[ysayac][hsayac][ksayac] ||kpuan[ysayac][hsayac][ksayac]>3) //puanin 1-3 arasinda verilmesini saglamak adina yapilan kontrol
                    {
                     printf("\aHATA\n");
                      printf("Puan 1-3 arasi olmali\n");
                      printf("PUAN:");
                      scanf("%d" , &kpuan[ysayac][hsayac][ksayac]);
                      pkontrol[hsayac][ysayac][ksayac]=kpuan[ysayac][hsayac][ksayac];
                      printf("---------\n\n");
                      printf("\n");
                    }

                    while (pkontrol[hsayac][ysayac][0]==pkontrol[hsayac][ysayac][1] || pkontrol[hsayac][ysayac][0]==pkontrol[hsayac][ysayac][2] || pkontrol[hsayac][ysayac][1]==pkontrol[hsayac][ysayac][2])
                    {
                       printf("\aHATA\n");                           //her puan bir kez verilmesi icin yapilan kontrol
                      printf("Her puani bir kez verebilirsiniz\n");
                      printf("PUAN:");
                      scanf("%d",&kpuan[ysayac][hsayac][ksayac]);
                      pkontrol[hsayac][ysayac][ksayac]=kpuan[ysayac][hsayac][ksayac];
                      printf("---------\n\n");
                      printf("\n");
                    }

                    if(0>=kpuan[ysayac][hsayac][ksayac] ||kpuan[ysayac][hsayac][ksayac]>3)  //ilk kisitlama asildiginda skontrol 'e geri doner
                    {
                        goto skontrol;
                    }


                   printf("\nSECIM:%d\n",ksecim[ysayac][hsayac][ksayac]);
                   printf("PUAN:%d\n",kpuan[ysayac][hsayac][ksayac]);
                   printf("\n");

                    for(psayac=0;psayac<ysayisi;psayac++)  // koc puanlandirma
                    {
                        if (ksecim[ysayac][hsayac][ksayac]-1==psayac)
                        {
                        yarismaci[psayac]+=kpuan[ysayac][hsayac][ksayac];
                        haftalik[psayac]+=kpuan[ysayac][hsayac][ksayac];
                        khaftalik[psayac]+=kpuan[ysayac][hsayac][ksayac];
                        kyarismaci[psayac]+=kpuan[ysayac][hsayac][ksayac];
                        hkpuan[ysayac][psayac]+=kpuan[ysayac][hsayac][ksayac];
                        hpuan[hsayac][psayac]+=kpuan[ysayac][hsayac][ksayac];
                        ynum[psayac]=ksecim[ysayac][hsayac][ksayac];
                        }
                    }

              }
              printf("\n");


          }                        //ysayac bitis


          for(a=0;a<hsayisi;a++)  //kontrollerin sifirlanmasi
                for(k=0;k<3;k++)
              {
                  skontrol[a][k]=a+k+16;
                  pskontrol[a][k]=a+k+16;
              }

            printf("-----SEYIRCI SECIM VE PUANLAMA-----\n");
          for(sey_sayac=0;sey_sayac<3;sey_sayac++)  // seyirci secim ve puanlama
          {


              printf("\nSEYIRCILERIN SECTIGI %d. YARISMACI:",sey_sayac+1);
              scanf("%d" , &ssecim[hsayac][sey_sayac]);
              skontrol[hsayac][sey_sayac]=ssecim[hsayac][sey_sayac];
              printf("\n");


              kkontrol :  //kkontrol donus noktasi

               while (0>=ssecim[hsayac][sey_sayac] || ssecim[hsayac][sey_sayac]>ysayisi)   //secimin yarismaci numaralari aralarinda olmadigi durumda hata mesaji
                  {
                      printf("\aHATA\n");
                      printf("Gecersiz secim yaptiniz\n");
                      printf("%d. SECIM:",sey_sayac+1);
                      scanf("%d",&ssecim[hsayac][sey_sayac]);
                      skontrol[hsayac][sey_sayac]=ssecim[hsayac][sey_sayac];
                      printf("---------\n\n");
                      printf("\n");

                  }


    while (skontrol[hsayac][0]==skontrol[hsayac][1] || skontrol[hsayac][0]==skontrol[hsayac][2] || skontrol[hsayac][1]==skontrol[hsayac][2])
        {
                   printf("\aHATA\n");   // ayni yarismaciyi birden fazla secmemek adina kisitlama
                      printf("Ayni yarismaciyi birden fazla sectiniz\n");
                      printf("%d. SECIM:",sey_sayac+1);
                      scanf("%d",&ssecim[hsayac][sey_sayac]);
                      skontrol[hsayac][sey_sayac]=ssecim[hsayac][sey_sayac];
                      printf("---------\n\n");
                      printf("\n");
        }

                 if (0>=ssecim[hsayac][sey_sayac] || ssecim[hsayac][sey_sayac]>ysayisi) //ilk adim asilirsa kkontrole geri doner
                    goto kkontrol;









              printf("SEYIRCILERIN %d. YARISMACIYA VERDIGI PUAN:" ,ssecim[hsayac][sey_sayac]);
              scanf("%d" ,&spuan[hsayac][sey_sayac]);
              pskontrol[hsayac][sey_sayac]=spuan[hsayac][sey_sayac];
              printf("\n");





              kpkontrol :  //kpkontrole geri donus

               while (0>=spuan[hsayac][sey_sayac] || spuan[hsayac][sey_sayac]>3)  //puanlamalarin 1-3 arasi olmasi icin yapilan kisitlama
                  {
                      printf("\aHATA\n");
                      printf("Gecersiz puanlama yaptiniz\n");
                      printf("Puanlama 1-3 arasi olmali\n");
                      printf("PUAN:");
                      scanf("%d",&spuan[hsayac][sey_sayac]);
                      pskontrol[hsayac][sey_sayac]=spuan[hsayac][sey_sayac];
                      printf("---------\n\n");
                      printf("\n");

                  }


    while (pskontrol[hsayac][0]==pskontrol[hsayac][1] || pskontrol[hsayac][0]==pskontrol[hsayac][2] || pskontrol[hsayac][1]==pskontrol[hsayac][2])
        {
                   printf("\aHATA\n");       //her puani bir kez secilmesi icin yapilan kisitlama
                      printf("Her puani bir kez verebilirsiniz\n");
                      printf("PUAN:");
                      scanf("%d",&spuan[hsayac][sey_sayac]);
                      pskontrol[hsayac][sey_sayac]=spuan[hsayac][sey_sayac];
                      printf("---------\n\n");
                      printf("\n");
        }

                 if (0>=spuan[hsayac][sey_sayac] || spuan[hsayac][sey_sayac]>3) //ilk kisitlama asilirsa kpkontrole geri doner
                    goto kpkontrol;




                   printf("\nSECIM:%d\n",ssecim[hsayac][sey_sayac]);
                   printf("PUAN:%d\n",spuan[hsayac][sey_sayac]);
                   printf("\n");





              for(psayac=0;psayac<ysayisi;psayac++)  // seyirci puanlandirma
              {
                  if (ssecim[hsayac][sey_sayac]-1==psayac)
                  {
                  yarismaci[psayac]+=spuan[hsayac][sey_sayac]*(ysayisi-1);
                  haftalik[psayac]+=spuan[hsayac][sey_sayac]*(ysayisi-1);
                  shaftalik[psayac]+=spuan[hsayac][sey_sayac]*(ysayisi-1);
                  syarismaci[psayac]+=spuan[hsayac][sey_sayac]*(ysayisi-1);
                  hpuan[hsayac][psayac]+=spuan[hsayac][sey_sayac]*(ysayisi-1);
                  ynum[psayac]=ssecim[hsayac][sey_sayac];
                  }
              }
          }


                for(a=0;a<ysayisi;a++)  //siralamaya hazirlik
                {
                   ysirala[a]=haftalik[a];
                   kysirala[a]=khaftalik[a];
                   sysirala[a]=shaftalik[a];
                }


                sirala(ysirala,kysirala,sysirala,ynum,ysayisi);   //siralama fonsiyonu
                esitlik(ysirala,kysirala,sysirala,ynum,ysayisi);  //esitlik durumunda siralama fonksiyonu

                birincilik[ynum[ysayisi-1]-1]+=1;           //birincilik olcer


          printf("\n\n---%d. HAFTA SONUCLARI---\n\n",hsayac+1);  //haftalik tablo
                printf("SIRA\t");
                printf("YARISMACI NO\t");
                printf("KOC PUANI\t");
                printf("SEYIRCI PUANI\t");
                printf("TOPLAM PUANI\n");
                printf("------\t");
                 printf("-------------\t");
                  printf("---------\t");
                   printf("-------------\t");
                    printf("-----------\n");

                for(ssayac=0;ssayac<ysayisi;ssayac++)  //haftalik puan tablosu
                {
                   printf("  %d\t",ssayac+1);
                   printf("    %d\t",ynum[ysayisi-ssayac-1]);
                   printf("           %d\t",kysirala[ysayisi-ssayac-1]);
                   printf("             %d\t",sysirala[ysayisi-ssayac-1]);
                   printf("           %d\n" ,ysirala[ysayisi-ssayac-1]);
                   printf("-------------------------------------------------------------------\n");
                }

                printf("\n\n");




            for (a=0;a<20;a++)  //haftalik puanlarin sifirlanmasi
            {
                haftalik[a]=0;
                khaftalik[a]=0;
                shaftalik[a]=0;
                ynum[a]=a+1;
            }

          }   //hsayac bitis



                for(a=0;a<ysayisi;a++)   // genel siralama icin hazirlik
                {
                   ysirala[a]=yarismaci[a];
                   kysirala[a]=kyarismaci[a];
                   sysirala[a]=syarismaci[a];
                }


                sirala(ysirala,kysirala,sysirala,ynum,ysayisi);  //siralama fonks
                esitlik(ysirala,kysirala,sysirala,ynum,ysayisi); //esitlik durumundaki fonks


                printf("\n\n---%d. HAFTA SONUNDA GENEL SONUC---\n\n",hsayisi);  //genel tablo
                printf("SIRA\t");
                printf("YARISMACI NO\t");
                printf("KOC PUANI\t");
                printf("SEYIRCI PUANI\t");
                printf("TOPLAM PUANI\n");
                printf("------\t");
                 printf("-------------\t");
                  printf("---------\t");
                   printf("-------------\t");
                    printf("-----------\n");



                for(ssayac=0;ssayac<ysayisi;ssayac++) //genel puan tablosu
                {
                   printf("  %d\t",ssayac+1);
                   printf("    %d\t",ynum[ysayisi-ssayac-1]);
                   printf("           %d\t",kysirala[ysayisi-ssayac-1]);
                   printf("             %d\t",sysirala[ysayisi-ssayac-1]);
                   printf("           %d\n" ,ysirala[ysayisi-ssayac-1]);
                   printf("-------------------------------------------------------------------\n");
                }


     }        // CASE 1 BITIS

     printf("\nANA MENUYE DONULUYOR\n\n\n");  //ana menuye donus

     for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)           //kontrollerin sifirlanmasi
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

             goto anamenu;

 case 2:
     {
         imenu:

         if(oncekiyarisma==1) //onceki yarisma kontrolu
         {
        printf("\n\nISTATISTIK ALT MENUSU\n\n");
        printf("1. Sadece koc puan listelemesi\n");
        printf("2. Sadece seyirci puan listelemesi\n");
        printf("3. Yarismacilarin her hafta aldigi toplam puanlarin listelemesi\n");
        printf("4. Yarismacilarin her koctan aldigi puanlarin listelenmesi\n");
        printf("5. Ana menu\n\n");
        printf("Lutfen seciniz:");
        scanf("%d",&isecim);


        while(isecim<=0 || isecim>5)           //secim 1-5 arasi olmali
        {
            printf("\a\nHATA!\n\n");
        printf("\nISTATISTIK ALT MENUSU\n\n");
        printf("1. Sadece koc puan listelemesi\n");
        printf("2. Sadece seyirci puan listelemesi\n");
        printf("3. Yarismacilarin her hafta aldigi toplam puanlarin listelemesi\n");
        printf("4. Yarismacilarin her koctan aldigi puanlarin listelenmesi\n");
        printf("5. Ana menu\n\n");
        printf("Lutfen seciniz:");
        scanf("%d",&isecim);
        }



        switch (isecim)
        {
        case 1:
            {

                 for(a=0;a<ysayisi;a++)  //siralama hazirlik
                {
                   ynum[a]=a+1;
                   kysirala[a]=kyarismaci[a];

                }

                ksirala(kysirala,ynum,ysayisi); // siralama fonks
                k_esitlik(kysirala,ynum,ysayisi);  //esitlik durumunda siralama fonks

                printf("\n\n------KOC PUAN LISTELEMESI------\n\n"); //istatistik 1
                printf("SIRA NO\t");
                printf("  YARISMACI NO\t");
                printf(" PUAN\n");
                printf("-------\t");
                printf("  ----------\t");
                printf("------\n");


                for(ssayac=0;ssayac<ysayisi;ssayac++)
                {
                   printf("  %d\t",ssayac+1);
                   printf("    %d\t",ynum[ysayisi-ssayac-1]);
                   printf("           %d\t",kysirala[ysayisi-ssayac-1]);
                   printf("\n------------------------------\n");
                }

            } //case 1 bitis

            printf("\nALT MENUYE DONULUYOR\n\n\n");
            for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

             goto imenu;

        case 2:
            {
                  for(a=0;a<ysayisi;a++)
                {
                   ynum[a]=a+1;
                   sysirala[a]=syarismaci[a];

                }

                ksirala(sysirala,ynum,ysayisi);
                k_esitlik(sysirala,ynum,ysayisi);

               printf("\n\n------SEYIRCI PUAN LISTELEMESI------\n\n");  //istatistik 2
               printf("SIRA NO\t");
               printf("  YARISMACI NO\t");
               printf(" PUAN\n");
               printf("-------\t");
               printf("  ----------\t");
               printf("------\n");

               for(ssayac=0;ssayac<ysayisi;ssayac++)
                {
                   printf("  %d\t",ssayac+1);
                   printf("    %d\t",ynum[ysayisi-ssayac-1]);
                   printf("           %d\t",sysirala[ysayisi-ssayac-1]);
                   printf("\n------------------------------\n");
                }
            }  // case 2 bitis

             printf("\nALT MENUYE DONULUYOR\n\n\n");
            for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

             goto imenu;

        case 3:
            {
                printf("\n\n------HER HAFTA ALINAN PUAN LISTESI------\n\n");  //istatistik 3
                printf("YARISMACI NO\t");

                for(a=1;a<=hsayisi;a++)
                {
                    printf("HAFTA %d\t        ",a);
                }

                printf("1. LIK SAYISI\n");

                 for(a=1;a<=hsayisi+2;a++)
                {
                    if (a==1)
                    {
                    printf("------------\t");
                    }
                else if (a==hsayisi+2)
                    printf("------------");
                else
                    printf("--------\t");

                }

                for(ssayac=0;ssayac<ysayisi;ssayac++)
                {
                    printf("\n     %d\t",ssayac+1);
                    for(hsayac=0;hsayac<hsayisi;hsayac++)
                    {
                   printf("           %d\t",hpuan[hsayac][ssayac]);
                    }
                    printf("           %d",birincilik[ssayac]);

                    for (hsayac=0;hsayac<hsayisi;hsayac++)
                    {
                        if (hsayac==0)
                         printf("\n--------------------------------------------");
                        else
                            printf("----------------");
                    }

                    printf("\n");
                }


            } // case 3 bitis

            printf("\nALT MENUYE DONULUYOR\n\n\n");
            for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

             goto imenu;

       case 4:    //istatistik 4
           {
               printf("\n\n------YARISMACILARIN HER KOCTAN ALDIGI PUAN LISTESI------\n\n");

               printf("YARISMACI NO\t");

               for(ssayac=0;ssayac<ysayisi;ssayac++)
               {
                   printf("KOC %d\t",ssayac+1);
               }

               printf("\n");

               for(ssayac=0;ssayac<=ysayisi;ssayac++)
               {

                   if (ssayac==0)
                   {
                       printf("------------\t");
                   }
                   else
                    printf("-----\t");
               }


               for(ssayac=0;ssayac<ysayisi;ssayac++)
               {
                   printf("\n     %d\t",ssayac+1);
                   for(a=0;a<ysayisi;a++)
                   {

                       if(a==ssayac && a==0)
                       {
                        printf("          -",hkpuan[a][ssayac]);
                       }
                       if (a==ssayac && a!=0)
                         printf("       -",hkpuan[a][ssayac]);




                       if(a!=ssayac && a==0)
                       {
                        printf("          %d",hkpuan[a][ssayac]);
                       }
                       if(a!=ssayac && a!=0)
                         printf("       %d",hkpuan[a][ssayac]);



                 }

                for(a=0;a<ysayisi;a++)
                {
                    if(a==0)
                   {
                       printf("\n---------------------");
                   }
                   else
                    printf("--------");
                }


           }

        }   //istatistik case 4 bitis
         printf("\nALT MENUYE DONULUYOR\n\n\n");
            for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

             goto imenu;
       case 5:       //ana menu geri donus
        {
             printf("\nANA MENUYE DONULUYOR\n\n\n");
            for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

             goto anamenu;
        }

         }              // istatistik switch bitis


     } // if bitis

     if(oncekiyarisma!=1)  //onceden yapilan yarisma yoksa hata mesaji
         {
             printf("\aHATA!\n");
             printf("DAHA ONCE YAPILAN YARISMA YOK\n");
             printf("\nANA MENUYE DONULUYOR\n\n\n");
             goto anamenu;
         }


}   //ana menu case 2 bitis

        printf("\nANA MENUYE DONULUYOR\n\n\n");
        for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

    goto anamenu;

       case 3:
        {
            printf("CIKMAK ISTEDIGINIZDEN EMIN MISINIZ?\n");  //cikis sorusu
            printf("1.EVET\t");
            printf("2.HAYIR\n");
            printf("Lutfen seciniz:");
            scanf("%d", &cikis);

            if(cikis==1)
            {
                printf("\n\nCIKIS YAPILDI\n");
                return 0;
            }
            if (cikis==2)
            {
            printf("\nANA MENUYE DONULUYOR\n\n\n");
            for(a=0;a<hsayisi;a++)
        for(ssayac=0;ssayac<ysayisi;ssayac++)
              for(k=0;k<3;k++)
                {
                   kontrol[a][ssayac][k]=a+ssayac+k+10;
                   pkontrol[a][ssayac][k]=a+ssayac+k+10;
                }

            goto anamenu;
            }

        }


}  // ana menu switch bitis

return 0;

 }  // main bitis
