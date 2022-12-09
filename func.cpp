#include "func.h"
#pragma warning(disable : 4996)
Intrebare::Intrebare(int num)
{
	intrebare = new char[500];
	raspunsA = new char[500];
	raspunsB = new char[500];
	raspunsC = new char[500];
	raspunsD = new char[500];
	raspunsE = new char[500];
	raspunsCorect = new char[2];
	switch (num)
	{
		case 1:
		{
			strcpy(intrebare, "1.Numerele cuantice iau valori: ");
			strcpy(raspunsA, "a)fractionare");
			strcpy(raspunsB, "b)naturale");
			strcpy(raspunsC, "c)intregi ");
			strcpy(raspunsD, "d)naturale si fractionare");
			strcpy(raspunsE, "e)intregi si fractionare");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 2:
		{
			char intr[500] = "2.Starile permise care au aceeasi energie intr-un sistem cuantic se numesc:";
			strcpy(intrebare, intr);
			strcpy(raspunsA, "a)generate");
			strcpy(raspunsB, "b)nedegenerate");
			strcpy(raspunsC, "c)degenerate");
			strcpy(raspunsD, "d)regenerate");
			strcpy(raspunsE, "e)altfel");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 3:
		{
			strcpy(intrebare, "3.Orbitalii d:");
			strcpy(raspunsA, "a)sunt sferici");
			strcpy(raspunsB, "b)sunt bilobari");
			strcpy(raspunsC, "c)sunt trilobari");
			strcpy(raspunsD, "d)sunt tetralobari");
			strcpy(raspunsE, "e)au centru de simetrie");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 4:
		{
			strcpy(intrebare, "4.Principiul excluziunii a lui Pauli sustine ca:");
			strcpy(raspunsA, "a)un orbital nu poate fi ocupat cu mai mult de doi electroni iar in cazul ocuparii cu doi electroni, spinurile lor trebuie sa fie imperecheate");
			strcpy(raspunsB, "b)un orbital nu poate fi ocupat cu mai mult de un electron");
			strcpy(raspunsC, "c)un orbital nu poate fi ocupat cu mai mult de doi electroni iar in cazul ocuparii cu doi electroni, spinurile lor trebuie sa fie neimperecheate");
			strcpy(raspunsD, "d)un orbital nu poate fi ocupat cu mai mult de un electron dar in cazul ocuparii cu doi electroni, spinurile lor trebuie sa fie imperecheate");
			strcpy(raspunsE, "e)se refera la altceva");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 5:
		{
			strcpy(intrebare, "5.Notiunea de sarcina nucleara efectiva a fost introdusa din cauza:");
			strcpy(raspunsA, "a)atractiei dintre electroni");
			strcpy(raspunsB, "b)repulsiei dintre electroni");
			strcpy(raspunsC, "c)fortelor intemucleare");
			strcpy(raspunsD, "d)fortelor intranucleare");
			strcpy(raspunsE, "e)campurilor magnetice exterioare atomului");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 6:
		{
			strcpy(intrebare, "6.Configuratia electronica in stare fundamentala a galiului (Z = 31) este:");
			strcpy(raspunsA, "a)1s2 2s2 2p6 3s2 3p1");
			strcpy(raspunsB, "b)1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p1");
			strcpy(raspunsC, "c)1s2 2s2 2p6 3s2 3p6 4s2 3d9 4p2");
			strcpy(raspunsD, "d)1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p1");
			strcpy(raspunsE, "e)1s2 2s2 2p6 3s2 3p6 3d10 4p1 4s2");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 7:
		{
			strcpy(intrebare, "7.Ordinul de legatura al unei molecule este egal cu:");
			strcpy(raspunsA, "a)numarul de electroni de pe orbitalii de legatura minus numarul de electroni de pe orbitalii de nelegatura");
			strcpy(raspunsB, "b)semisuma electronilor de pe orbitalii de legatura si de nelegatura");
			strcpy(raspunsC, "c)semisuma electronilor de pe orbitalii de legatura si de antilegatura");
			strcpy(raspunsD, "d)semisuma electronilor de pe orbitalii de antilegatura si de nelegatura");
			strcpy(raspunsE, "e)semidiferenta dintre electronii de pe orbitalii de legatura si cei de pe orbitalii de antilegatura");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 8:
		{
			strcpy(intrebare, "8.Legaturile deficitare in electroni apar in moleculele in care:");
			strcpy(raspunsA, "a)nu sunt destui electroni pentru a permite prezenta a cel putin doi electroni intr-o legatura");
			strcpy(raspunsB, "b)nu sunt destui electroni pentru a permite prezenta a cel putin un electron intr-o legatura");
			strcpy(raspunsC, "c)sunt destui electroni pentru a permite prezenta a maxim trei electroni intr-o legatura");
			strcpy(raspunsD, "d)atomii sunt hibridizati sp3");
			strcpy(raspunsE, "e)atomii sunt hibridizati sp2");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 9:
		{
			strcpy(intrebare, "9.Rotatia de ordinul n este operatia de simetrie in urma careia molecula apare neschimbata dupa:");
			strcpy(raspunsA, "a)o rotatie cu 360 grade/n");
			strcpy(raspunsB, "b)o rotatie cu 360 grade");
			strcpy(raspunsC, "c)o rotatie cu n grade");
			strcpy(raspunsD, "d)o rotatie cu 180 grade");
			strcpy(raspunsE, "e)o rotatie cu 180 grade/n");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 10:
		{
			strcpy(intrebare, "10.Elementul de simetrie corespunzator operatiei de simetrie numita reflexie este:");
			strcpy(raspunsA, "a)centrul de simetrie");
			strcpy(raspunsB, "b)planul de simetrie");
			strcpy(raspunsC, "c)axa de simetrie de ordinul n");
			strcpy(raspunsD, "d)grupul de simetrie");
			strcpy(raspunsE, "e)grupul punctual");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 11:
		{
			strcpy(intrebare, "11.Complecsii cu spin inalt sunt complecsii in care:");
			strcpy(raspunsA, "a)energia scindarii este mai mica decat energia de imperechere");
			strcpy(raspunsB, "b)energia scindarii este mai mare decat energia de imperechere");
			strcpy(raspunsC, "c)numarul de electroni impari este maxim");
			strcpy(raspunsD, "d)numarul de electroni impari este minim");
			strcpy(raspunsE, "e)campul cristalin este puternic");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 12:
		{
			strcpy(intrebare, "12.Legatura de hidrogen este legatura care se fonneaza : ");
			strcpy(raspunsA, "a)intre atomii de hidrogen");
			strcpy(raspunsB, "b)intre moleculele de hidrogen");
			strcpy(raspunsC, "c)in molecula de hidrogen");
			strcpy(raspunsD, "d)intre atomul de hidrogen dintr-o molecula si elementul electronegativ dintr-o alta molecula");
			strcpy(raspunsE, "e)in solidele ionice");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 13:
		{
			strcpy(intrebare, "13.in structura tip perovskit (ABX3):");
			strcpy(raspunsA, "a)atomul A se afla in centru fiind inconjurat de 12 atomi de oxigen");
			strcpy(raspunsB, "b)atomul B se afla pe colturi si este inconjurat de opt atomi de oxigen");
			strcpy(raspunsC, "c)atomul A se afla pe colturi");
			strcpy(raspunsD, "d)12 atomi de oxigen se afla pe fete");
			strcpy(raspunsE, "e)atomul B se afla in mijloc");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 14:
		{
			strcpy(intrebare, "14.Entalpia de retea este:");
			strcpy(raspunsA, "a)variatia de entalpie care insoteste trecerea unui solid in stare gazoasa sub forma de ioni");
			strcpy(raspunsB, "b)variatia de entalpie care insoteste trecerea unui solid in stare lichida sub forma de ioni");
			strcpy(raspunsC, "c)variatia de entalpie care insoteste transformarile de faza dintr-un solid");
			strcpy(raspunsD, "d)variatia de entropie care insoteste trecerea unui solid in stare gazoasa sub forma de ioni");
			strcpy(raspunsE, "e)variatia de entalpie care insoteste trecerea unui solid in stare gazoasa sub forma de molecule nepolare");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 15:
		{
			strcpy(intrebare, "15.Polarizarea este:");
			strcpy(raspunsA, "a)fenomenul prin care centrul sarcinilor negative dintr-un ion nu mai coincide cu cel al sarcinilor pozitive, cu inducerea unui moment de dipol");
			strcpy(raspunsB, "b)fenomenul prin care centrul sarcinilor negative dintr-un ion coincide cu cel al sarcinilor pozitive, cu inducerea unui moment de dipol");
			strcpy(raspunsC, "c)fenomenul prin care centrul sarcinilor negative dintr-un ion nu mai coincide cu cel al sarcinilor pozitive dar fara a induce un moment de dipol");
			strcpy(raspunsD, "d)fenomenul prin care sarcinile negative si pozitive dintr-un ion se anuleaza reciproc");
			strcpy(raspunsE, "e)un fenomen care nu are nici o legatura cu sarcinile ionilor");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 16:
		{
			strcpy(intrebare, "16.Domeniul care separa doua benzi intr-un solid se numeste:");
			strcpy(raspunsA, "a)nivel Fermi");
			strcpy(raspunsB, "b)densitate de stari");
			strcpy(raspunsC, "c)zona interzisa");
			strcpy(raspunsD, "d)banda d");
			strcpy(raspunsE, "e)banda p");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 17:
		{
			strcpy(intrebare, "17.Solidele in care nivelul energetic superior al unei benzi complet ocupate coincide cu cel inferior al unei benzi goale, densitatea fiind insa nula la separatie, se numesc :");
			strcpy(raspunsA, "a)semimetale");
			strcpy(raspunsB, "b)nemetale");
			strcpy(raspunsC, "c)metale");
			strcpy(raspunsD, "d)metaloizi");
			strcpy(raspunsE, "e)supraconductori");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 18:
		{
			strcpy(intrebare, "18.intr-un atom energia sistemului va depinde de:");
			strcpy(raspunsA, "a)numarul cuantic secundar");
			strcpy(raspunsB, "b)numarul cuantic principal");
			strcpy(raspunsC, "c)numarul cuantic magnetic");
			strcpy(raspunsD, "d) a) si b)");
			strcpy(raspunsE, "e)nu depinde de numerele cuantice");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 19:
		{
			strcpy(intrebare, "19.Setul de orbitali atomici determinati prin metoda Hartree-Fock este auto-consistent atunci cand:");
			strcpy(raspunsA, "a)este determinat prin iteratii succesive");
			strcpy(raspunsB, "b)nu este determinat prin iteratii succesive");
			strcpy(raspunsC, "c)nu mai apar diferente notabile intre orbitalii calculati prin iteratii succesive");
			strcpy(raspunsD, "d)functia de unda a unui electron nu depinde de ceilalti electroni");
			strcpy(raspunsE, "e)atomii luati in calcul au o sarcina nucleara mare");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 20:
		{
			strcpy(intrebare, "20.Cationii blocului d au configuratii dn deoarece:");
			strcpy(raspunsA, "a)odata inceputa completarea substratului d energia acestuia scade sub cea a orbitalilor s");
			strcpy(raspunsB, "b)odata inceputa completarea substratului d energia acestuia creste peste cea a orbitalilor s");
			strcpy(raspunsC, "c)orbitalii d au energie egala cu orbitalii s");
			strcpy(raspunsD, "d)apare contractia lantanidelor");
			strcpy(raspunsE, "e)apare contractia actinidelor");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 21:
		{
			strcpy(intrebare, "21.	Cel mai mic set de orbitali atomici cu ajutorul carora putem construi orbitali moleculari se numeste:");
			strcpy(raspunsA, "a)set de baza");
			strcpy(raspunsB, "b)set de baza mediu");
			strcpy(raspunsC, "c)set de baza maximal");
			strcpy(raspunsD, "d)set de baza minim");
			strcpy(raspunsE, "e)set sp");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 22:
		{
			strcpy(intrebare, "22.Denumirea de scindare in camp cristalin a orbitalilor d din complecsi provine de la faptul ca:");
			strcpy(raspunsA, "a)fenomenul nu are loc in solutie");
			strcpy(raspunsB, "b)fenomenul are loc in solutie");
			strcpy(raspunsC, "c)fenomenul are loc doar in faza solida");
			strcpy(raspunsD, "d)fenomenul are loc doar pentru complecsii cristalini");
			strcpy(raspunsE, "e)astfel de situatii se intalnesc mai ales in cristalele ionice");
			strcpy(raspunsCorect, "e");
		}
		case 23:
		{
			strcpy(intrebare, "23.Teorema Jahn-Teller sustine ca:");
			strcpy(raspunsA, "a)in general moleculele neliniare sunt instabile intr-o stare electronica degenerata, molecula trebuind sa se distorsioneze astfel incat sa distruga degenerarea");
			strcpy(raspunsB, "b)in general moleculele liniare sunt instabile intr-o stare electronica degenerata, molecula trebuind sa se distorsioneze astfel incat sa distruga degenerarea");
			strcpy(raspunsC, "c)in general moleculele liniare sunt stabile intr o stare electronica degenerata");
			strcpy(raspunsD, "d)in general moleculele neliniare sunt stabile intr-o stare electronica degenerata");
			strcpy(raspunsE, "e)in general moleculele liniare trebuie sa se distorsioneze");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 24:
		{
			strcpy(intrebare, "24.Dezavantajul major al TCC este acela ca:");
			strcpy(raspunsA, "a)neglijeaza evidenta prezentei legaturilor ionice ce apar in unii complecsi");
			strcpy(raspunsB, "b)neglijeaza evidenta	prezentei legaturilor covalente ce apar in unii complecsi");
			strcpy(raspunsC, "c)nu poate prezice energii de formare s1 mecamsme");
			strcpy(raspunsD, "d)presupune un aparat matematic foarte complicat");
			strcpy(raspunsE, "e)nu este corelata cu practica");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 25:
		{
			strcpy(intrebare, "25.Liganzii n cu caracter de acid Lewis sunt liganzii care");
			strcpy(raspunsA, "a)in afara orbitalilor n ocupati mai au orbitali n neocupati de antilegatura care sunt insa accesibili pentru formarea de legaturi");
			strcpy(raspunsB, "b)au orbitalii n ocupati cu electroni");
			strcpy(raspunsC, "c)au orbitalii cr ocupati cu electroni");
			strcpy(raspunsD, "d)au orbitali cu energia mai joasa decat orbitalii d ai metalului");
			strcpy(raspunsE, "e)au orbitali cu energia egala cu cea a orbitalilor d ai metalului");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 26:
		{
			strcpy(intrebare, "26.Legaturile in cristalele covalente sunt:");
			strcpy(raspunsA, "a)slabe si nepolare");
			strcpy(raspunsB, "b)slabe si polare");
			strcpy(raspunsC, "c)puternice si polare");
			strcpy(raspunsD, "d)puternice si nepolare");
			strcpy(raspunsE, "e)de natura ionica");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 27:
		{
			strcpy(intrebare, "27.Aparitia legaturilor de hidrogen este evidentiata prin:");
			strcpy(raspunsA, "a)cresterea valorii punctelor de fierbere");
			strcpy(raspunsB, "b)cresterea valorii punctelor de topire");
			strcpy(raspunsC, "c)cresterea	valorii	caldurilor	latente	de vaporizare");
			strcpy(raspunsD, "d)cresterea valorii caldurilor latente de topire");
			strcpy(raspunsE, "e)toate variantele anterioare");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 28:
		{
			strcpy(intrebare, "28.Coordinarea in structura tip clorura de sodiu este:");
			strcpy(raspunsA, "a)(4,8)");
			strcpy(raspunsB, "b)(8,8)");
			strcpy(raspunsC, "c)(8,4)");
			strcpy(raspunsD, "d)(4,4)");
			strcpy(raspunsE, "e)(6,6)");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 29:
		{
			strcpy(intrebare, "29.Razele ionilor moleculari nesferici determinate cu ajutorul ecuatiei Kapustinskii, folosind entalpia de retea determinata din ciclul Born-Haber, se numesc:");
			strcpy(raspunsA, "a)raze termochimice");
			strcpy(raspunsB, "b)raze moleculare");
			strcpy(raspunsC, "c)raze ionice");
			strcpy(raspunsD, "d)raze atomice");
			strcpy(raspunsE, "e)raze termocromice");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 30:
		{
			strcpy(intrebare, "30.Un criteriu de identificare a conductiei metalice este:");
			strcpy(raspunsA, "a)cresterea conductivitatii la cresterea temperaturii");
			strcpy(raspunsB, "b)independenta conductivitatii fata de cresterea temperaturii");
			strcpy(raspunsC, "c)scaderea conductivitatii la cresterea temperaturii");
			strcpy(raspunsD, "d)disparitia rezistentei electrice la temperaturi foarte scazute");
			strcpy(raspunsE, "e)disparitia rezistentei electrice");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 31:
		{
			strcpy(intrebare, "31.Denumirea de semiconductivitate de tip n provine de la:");
			strcpy(raspunsA, "a)numarul cuantic principal n");
			strcpy(raspunsB, "b)nivelul Fermi");
			strcpy(raspunsC, "c)transportorii de sarcina care sunt negativi");
			strcpy(raspunsD, "d)banda care este neocupata");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 32:
		{
			strcpy(intrebare, "1.Prin potential de ionizare de ordinul intai se intelege:");
			strcpy(raspunsA, "a)energia pe care o poseda un ion pozitiv");
			strcpy(raspunsB, "b)energia pe care o poseda un ion negativ");
			strcpy(raspunsC, "c)energia	minima	necesara	smulgerii	unm electron din invelisul electronic al unui atom");
			strcpy(raspunsD, "d)energia necesara obtinerii celei mai stabile stari de oxidare");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 33:
		{
			strcpy(intrebare, "2.Pentru elementele dintr-o perioada afinitatea pentru electron:");
			strcpy(raspunsA, "a)creste de la dreapta la stanga");
			strcpy(raspunsB, "b)ramane relativ constant");
			strcpy(raspunsC, "c)creste de la stanga la dreapta");
			strcpy(raspunsD, "d)prezinta o variatie aleatoare");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 34:
		{
			strcpy(intrebare, "3.Afinitatea fata de electron reprezinta:");
			strcpy(raspunsA, "a)energia electronilor de pe ultimul strat al unui atom");
			strcpy(raspunsB, "b)energia unui ion negativ");
			strcpy(raspunsC, "c)potentialul de ionizare luat cu semn negativ");
			strcpy(raspunsD, "d)energia necesara captarii unui electron, cu energie cinetica zero, de catre un atom, ion sau molecula");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 35:
		{
			strcpy(intrebare, "4.Un acid Bronsted este un compus sau un ion care:");
			strcpy(raspunsA, "a)disociaza in solutie apoasa cu formare de protoni");
			strcpy(raspunsB, "b)contine in molecula atomi de hidrogen");
			strcpy(raspunsC, "c)cedeaza in solutie atomi de hidrogen");
			strcpy(raspunsD, "d)disociaza in solutie cu formare de anion s1 cation");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 36:
		{
			strcpy(intrebare, "5.intr-o grupa principala a sistemului periodic caracterul bazic al compusilor similari:");
			strcpy(raspunsA, "a)creste de jos in sus");
			strcpy(raspunsB, "b)creste de sus in jos");
			strcpy(raspunsC, "c)ramane constat");
			strcpy(raspunsD, "d)prezinta o variatie neperiodica");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 37:
		{
			strcpy(intrebare, "6.O baza Lewis este:");
			strcpy(raspunsA, "a)un compus care contine in molecula grupari Ro -");
			strcpy(raspunsB, "b)un atom, molecula sau ion care are cel putin o pereche de electroni neparticipanti la o legatura covalenta");
			strcpy(raspunsC, "c)un compus care disociaza cu formare de anioni hidroxid");
			strcpy(raspunsD, "d)un atom, molecula sau ion care leaga prm legaturi covalente o grupa hidroxid");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 38:
		{
			strcpy(intrebare, "7.Cu metalele din prima grupa hidrogenul formeaza:");
			strcpy(raspunsA, "a)hidruri covalente polare");
			strcpy(raspunsB, "b)hidruri ionice");
			strcpy(raspunsC, "c)hidruri interstitiale");
			strcpy(raspunsD, "d)hidrogenul nu formeaza compusi pentru ca are un singur electron");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 39:
		{
			strcpy(intrebare, "8.Metalele alcaline complexeaza cel mai bine cu:");
			strcpy(raspunsA, "a)liganzi de tip crown sau criptati");
			strcpy(raspunsB, "b)liganzi care contin un atom de oxigen donor");
			strcpy(raspunsC, "c)liganzi care contin legaturi n in molecula");
			strcpy(raspunsD, "d)liganzi anorganici");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 40:
		{
			strcpy(intrebare, "9.Elementele blocului s:");
			strcpy(raspunsA, "a)nu se dizolva in amoniac lichid anhidru");
			strcpy(raspunsB, "b)se dizolva in amoniac lichid anhidru cu formare de solutii cu caracter puternic oxidant");
			strcpy(raspunsC, "c)se dizolva in amoniac lichid anhidru cu formare de solutii cu caracter puternic reducator");
			strcpy(raspunsD, "d)se dizolva in amoniac lichid anhidru cu formare de solutii cu caracter slab oxidant");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 41:
		{
			strcpy(intrebare, "Acidul azotos disproportioneaza cu formare de:");
			strcpy(raspunsA, "a)N2 si NO2");
			strcpy(raspunsB, "b)N2 si N2O2");
			strcpy(raspunsC, "c)N2 si N2O4");
			strcpy(raspunsD, "d)NO si NO3");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 42:
		{
			strcpy(intrebare, "11.In borati atomii de bor pot avea:");
			strcpy(raspunsA, "a)coordinatia trei");
			strcpy(raspunsB, "b)coordinatia patru");
			strcpy(raspunsC, "c)ambele coordinatii");
			strcpy(raspunsD, "d)coordinatia cinci");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 43:
		{
			strcpy(intrebare, "12.Aminoboranul este izoelectronic cu:");
			strcpy(raspunsA, "a)etanul");
			strcpy(raspunsB, "b)acetilena");
			strcpy(raspunsC, "c)etena");
			strcpy(raspunsD, "d)metilamina");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 44:
		{
			strcpy(intrebare, "13.Forma cristalina de temperatura Joasa a nitrurii de bor este similara cu cea a:");
			strcpy(raspunsA, "a)diamantului");
			strcpy(raspunsB, "b)grafitului");
			strcpy(raspunsC, "c)clorurii de sodiu");
			strcpy(raspunsD, "d)rutilului");
			strcpy(raspunsE, "e)perovskitului");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 45:
		{
			strcpy(intrebare, "14.Conductibilitatea electrica a grafitului se datoreaza:");
			strcpy(raspunsA, "a)electronilor legaturii n conjugate");
			strcpy(raspunsB, "b)electronilor legaturilor C-C");
			strcpy(raspunsC, "c)golurilor din reteaua cristalina");
			strcpy(raspunsD, "d)distantei mari dintre straturile de atomi de carbon");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 46:
		{
			strcpy(intrebare, "AICI TREBUIA SA FIE O DIAGRAMA!!!!!\n15.Conform diagramei Ellingham de mai sus AhO3 se poate reduce cu carbon:");
			strcpy(raspunsA, "a)peste aproximativ 2000 grade C");
			strcpy(raspunsB, "b)peste aproximativ 1500 grade C");
			strcpy(raspunsC, "c)in orice conditii");
			strcpy(raspunsD, "d)mai jos de 1500 grade C");
			strcpy(raspunsE, "e)nu se reduce cu carbon");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 47:
		{
			strcpy(intrebare, "16. Care dintre urmatoarele enunturi este adevarat:");
			strcpy(raspunsA, "a)Silanii sunt compusi ai siliciul cu sulful");
			strcpy(raspunsB, "b)Silanii sunt omologii acizilor organici");
			strcpy(raspunsC, "c)Silanii sunt mai volatili decat alcanii");
			strcpy(raspunsD, "d)Silanii sunt compusi saturati");
			strcpy(raspunsE, "e)Silanii se obtin prin oxidarea	clorurilor corespunzatoare");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 48:
		{
			strcpy(intrebare, "17.Formula moleculara corecta a dioxidului de siliciu este:");
			strcpy(raspunsA, "a)(SiO2)n");
			strcpy(raspunsB, "b)SiO4 ^-4");
			strcpy(raspunsC, "c)[(SiO3)^2-]n");
			strcpy(raspunsD, "d)SiO2");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 49:
		{
			strcpy(intrebare, "18.Molecula de azot este foarte putin reactiva pentru ca:");
			strcpy(raspunsA, "a)azotul este gaz in conditii normale");
			strcpy(raspunsB, "b)este primul element din grupa");
			strcpy(raspunsC, "c)cei doi atomi de azot sunt legati prin trei legaturi chimice");
			strcpy(raspunsD, "d)are o mare afinitate pentru electron");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 50:
		{
			strcpy(intrebare, "19.Care dintre urmatorii OXIZI de azot dimerizeaza:");
			strcpy(raspunsA, "a)N2O");
			strcpy(raspunsB, "b)N2O3");
			strcpy(raspunsC, "c)NO2");
			strcpy(raspunsD, "d)N2O5");
			strcpy(raspunsE, "e)N2O4");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 51:
		{
			strcpy(intrebare, "20.Acidul azotic este fabricat industrial prin:");
			strcpy(raspunsA, "a)reducerea azotului la amoniac urmata de oxidarea cu oxigen si disproportionarea oxidului obtinut in apa");
			strcpy(raspunsB, "b)oxidarea azotului cu aer unnata de disproportionarea oxidului obtinut in apa");
			strcpy(raspunsC, "c)reducerea azotului cu oxigen din aer urmata de disproportionarea oxidului obtinut in apa");
			strcpy(raspunsD, "d)oxidarea azotului cu oxigen din aer urmata de disproportionarea oxidului obtinut in apa");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 52:
		{
			strcpy(intrebare, "21.Hidrazina se prepara industrial prin:");
			strcpy(raspunsA, "a)aditia hidrogenului la molecula de amoniac");
			strcpy(raspunsB, "b)aditia catalitica a hidrogenului la compusi oxigenati");
			strcpy(raspunsC, "c)oxidarea solutiilor de amoniac cu hipoclorit de sodiu");
			strcpy(raspunsD, "d)reducerea compusilor oxigenati ai azotului in mediu acid");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 53:
		{
			strcpy(intrebare, "22.	Starea de oxidare a fosforului in anionul fosfit este:");
			strcpy(raspunsA, "a)(+l)");
			strcpy(raspunsB, "b)(+2)");
			strcpy(raspunsC, "c)(+3)");
			strcpy(raspunsD, "d)(+4)");
			strcpy(raspunsE, "e)(+5)");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 54:
		{
			strcpy(intrebare, "23.In stare de vapori sulful este format din:");
			strcpy(raspunsA, "a)molecule ciclice S5");
			strcpy(raspunsB, "b)molecule S2 similare cu 02");
			strcpy(raspunsC, "c)molecule ciclice S6");
			strcpy(raspunsD, "d)lanturi polimere Sn");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 55:
		{
			strcpy(intrebare, "HNO3 + H2S -> NO + H2O + S\n25.Coeficientii reactiei redox de mai sus sunt:");
			strcpy(raspunsA, "a)1,3,2,4,2");
			strcpy(raspunsB, "b)1,2,3,4,2");
			strcpy(raspunsC, "c)1,3,2,2,4");
			strcpy(raspunsD, "d)1,3,4,2,2");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 56:
		{
			strcpy(intrebare, "FeCl3 + H2S -> \n24. Produsii reactiei de mai sus sunt:");
			strcpy(raspunsA, "a)FeS +HCI+ S");
			strcpy(raspunsB, "b)FeS+H2O+S");
			strcpy(raspunsC, "c)FeCh+H2O+S");
			strcpy(raspunsD, "d)FeCh + HCI + S");
			strcpy(raspunsE, "e)FeCh + Ch +FeS");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 57:
		{
			strcpy(intrebare, "26.Metalele alcaline formeaza in reactia cu oxigenul:");
			strcpy(raspunsA, "a)oxizi, peroxizi, superoxizi si ozonide");
			strcpy(raspunsB, "b)OXIZI, peroxizI sI superoxizI");
			strcpy(raspunsC, "c)oxizi cu formula M2O");
			strcpy(raspunsD, "d)oxizt si peroxizI");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 58:
		{
			strcpy(intrebare, "27.Care din urmatoarele afirmatii este falsa:");
			strcpy(raspunsA, "a)SOJ este un acid Lewis");
			strcpy(raspunsB, "b)SOJ este o anhidrida acida ");
			strcpy(raspunsC, "c)SOJ polimerizeaza ");
			strcpy(raspunsD, "d)SOJ hibridizeaza sp2 in faza gazoasa ");
			strcpy(raspunsE, "e)nici un raspuns anterior nu este adevarat ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 59:
		{
			strcpy(intrebare, "28.in compusii interhalogenici cea mai inalta stare de oxidare o atinge: ");
			strcpy(raspunsA, "a)clorul si iodul ");
			strcpy(raspunsB, "b)toti halogenii ");
			strcpy(raspunsC, "c)clorul, iodul si bromul ");
			strcpy(raspunsD, "d)in compusii interhalogenici nu se ating stari maxime de oxidare deoarece sunt formati din doua nemetale ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 60:
		{
			strcpy(intrebare, "29.Un izotop reprezinta:");
			strcpy(raspunsA, "a)o specie atomica cu acelasi numar de ordine Z ca al unui alt element dar cu un numar de masa A diferit");
			strcpy(raspunsB, "b)un atom radioactiv ");
			strcpy(raspunsC, "c)un atom foarte stabil ");
			strcpy(raspunsD, "d)o specie atomica cu acelasi numar de masa A ca al unui alt element dar cu Z diferit ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 61:
		{
			strcpy(intrebare, "30.Prin fisiune nucleara se intelege:");
			strcpy(raspunsA, "a)formarea unui nucleu mai mare din nuclee mai mici cu o mare degajare de energie ");
			strcpy(raspunsB, "b)descompunerea unui nucleu mare in alte nuclee mai mici cu o mare degajare de energie ");
			strcpy(raspunsC, "c)reactia nucleara a uraniului ");
			strcpy(raspunsD, "d)o reactie nucleara in un electron este captat de nucleu ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 62:
		{
			strcpy(intrebare, "31.Disocierea moleculei de hidrogen pentru cresterea reactivitatii chimice poate fi:");
			strcpy(raspunsA, "a)homolitica si heterolitica");
			strcpy(raspunsB, "b)homolitica ");
			strcpy(raspunsC, "c)heterolitica ");
			strcpy(raspunsD, "d)molecula de hidrogen nu disociaza datorita entalpiei mari de legatura ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 63:
		{
			strcpy(intrebare, "32.Numarul de coordinatie al unui atom sau ion central este identic cu: ");
			strcpy(raspunsA, "a)starea de oxidare ");
			strcpy(raspunsB, "b)numarul de liganzi din sfera de coordinare primara ");
			strcpy(raspunsC, "c)valenta ");
			strcpy(raspunsD, "d)numarul	total	de	specii	chimice	ce-l inconjoara ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 64:
		{
			strcpy(intrebare, "33.Raza Van der Waals este: ");
			strcpy(raspunsA, "a)identica cu raza ionica ");
			strcpy(raspunsB, "b)identica cu raza atomica ");
			strcpy(raspunsC, "c)distanta minima la care se pot apropia doi atomi fara ca intre ei sa se formeze o legatura chimica ");
			strcpy(raspunsD, "d)distanta maxima la care se pot apropia doi atomi fara ca intre ei sa se formeze o legatura chimica ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 65:
		{
			strcpy(intrebare, "34.Parahidrogenul este: ");
			strcpy(raspunsA, "a)constituit din atomi in care nucleele se rotesc sens invers unul fata de celalalt ");
			strcpy(raspunsB, "b)constituit din atomi in care nucleele se rotesc in acelasi sens unul fata de celalalt ");
			strcpy(raspunsC, "c)identic cu ortohidrogenul ");
			strcpy(raspunsD, "d)fonnat din atomi de heliu ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 66:
		{
			strcpy(intrebare, "35.Sunt congeneri elementele care fac parte:");
			strcpy(raspunsA, "a)din aceeasi perioada");
			strcpy(raspunsB, "b)din acelasi bloc de elemente");
			strcpy(raspunsC, "c)din aceeasi grupa ");
			strcpy(raspunsD, "d)numai din grupele principale ");
			strcpy(raspunsE, "e)numai din grupele secundare ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 67:
		{
			strcpy(intrebare, "36.Care dintre afirmatiile referitoare la beriliu este falsa: ");
			strcpy(raspunsA, "a)este un metal alcalino-pamantos ");
			strcpy(raspunsB, "b)are un caracter mai putin electropozitiv decat litiu ");
			strcpy(raspunsC, "c)face parte din blocul elementelor de tip s ");
			strcpy(raspunsD, "d)ionul simplu Be2+ exista in solutii sau retele ");
			strcpy(raspunsE, "e)prezinta tendinta partiala de a forma legaturi covalente ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 68:
		{
			strcpy(intrebare, "37.Elementele de tip p din perioada a 2-a pot adopta un numar maxim de coordinatie:");
			strcpy(raspunsA, "a)egal cu 3 deoarece utilizeaza trei orbitali 2p ");
			strcpy(raspunsB, "b)egal cu 4 deoarece utilizeaza un orbital 2s si trei orbitali 2p ");
			strcpy(raspunsC, "c)egal cu 5 prin utilizarea unui orbital 2s, a trei orbitali 2p si a unui orbital 2d ");
			strcpy(raspunsD, "d)egal cu 6 prin utilizarea unui orbital 2s, a trei orbitali 2p si a doi orbitali 2d ");
			strcpy(raspunsE, "e)egal cu 7 prin utilizarea unui orbital 2s, a trei orbitali 2p si a trei orbitali 2d ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 69:
		{
			strcpy(intrebare, "38.Identificati afirmatia falsa. Prezenta orbitalilor de tip d influenteaza:");
			strcpy(raspunsA, "a)numarul maxim de coordinatie al elementelor de tip p ");
			strcpy(raspunsB, "b)comportarea chimica diferita a compusilor primului element comparativ cu compusii similari ai celui de-al doilea element dintr-o grupa din blocul p ");
			strcpy(raspunsC, "c)disponibilitatea perechii de electroni din substratul ns2 de a participa la legaturi ");
			strcpy(raspunsD, "d)capacitatea de formare a unei legaturi P pi - P pi a unui element din perioada a 2-a ");
			strcpy(raspunsE, "e)capacitatea de formare a unei legaturi de tip d pi - P pi  sau d pi - d pi in cazul elementelor de tip p din perioadele 3, 4 si 5 ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 70:
		{
			strcpy(intrebare, "39.Taria legaturilor element-hidrogen (E-H) in cazul hidrurilor elementelor din grupa a 14-a scade in ordinea: ");
			strcpy(raspunsA, "a)CH4> SiH4 > PbH4 > GeH4 > SnH4 ");
			strcpy(raspunsB, "b)SiH4 > CH4 > PbH4 > SnH4 > GeH4 ");
			strcpy(raspunsC, "c)PbH4 > SnH4 > GeH4 > SiH4 > CH4 ");
			strcpy(raspunsD, "d)CH4 > PbH4 > GeH4 > SiH4 > SnH4");
			strcpy(raspunsE, "e)CH4 > SiH4 > GeH4 > SnH4 > PbH4 ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 71:
		{
			strcpy(intrebare, "40.Care dintre elementele unei grupe din blocul p vor avea electronii ns^2 mai inerti:");
			strcpy(raspunsA, "a)cele din perioada a 6-a ");
			strcpy(raspunsB, "b)cele din perioada a 2-a ");
			strcpy(raspunsC, "c)cele din perioada a 4-a ");
			strcpy(raspunsD, "d)cele din perioada a 3-a ");
			strcpy(raspunsE, "e)cele din perioada a 5-a ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 72:
		{
			strcpy(intrebare, "41.Care dintre oxizii prezentati mai JOS contin numai legaturi p pi - p pi:");
			strcpy(raspunsA, "a)CO, SO3, N2O, NO ");
			strcpy(raspunsB, "b)SO3, NO2, CO2, N2O3 ");
			strcpy(raspunsC, "c)CO, CO2, N2O, NO ");
			strcpy(raspunsD, "d)N2O, NO2, SO3, CO2 ");
			strcpy(raspunsE, "e)CO, N2O3, NO, SO3 ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 73:
		{
			strcpy(intrebare, "42.Care dintre urmatorii hidroxizi se topeste la incalzire fara sa se descompuna in oxid: ");
			strcpy(raspunsA, "a)LiOH ");
			strcpy(raspunsB, "b)Ca(OH)2 ");
			strcpy(raspunsC, "c)Mg(OH)2 ");
			strcpy(raspunsD, "d)Ba(OH)2 ");
			strcpy(raspunsE, "e)KOH ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 74:
		{		
			strcpy(intrebare, "43.Care dintre urmatorii compusi este considerat un oxihidroxid: ");
			strcpy(raspunsA, "a)NaOH ");
			strcpy(raspunsB, "b)Mg(OH)2 ");
			strcpy(raspunsC, "c)H3BO3 ");
			strcpy(raspunsD, "d)HClO ");
			strcpy(raspunsE, "e)H3PO4 ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 75:
		{
			strcpy(intrebare, "44.Care pereche de elemente face parte din relatia diagonala: ");
			strcpy(raspunsA, "a)K-Mg ");
			strcpy(raspunsB, "b)Be -Al ");
			strcpy(raspunsC, "c)B -Al ");
			strcpy(raspunsD, "d)P - Se ");
			strcpy(raspunsE, "e)Se - I ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 76:
		{
			strcpy(intrebare, "1.Cu care dintre urmatorii ac1z1 se combina toate elementele grupei a 4-a: ");
			strcpy(raspunsA, "a)HCI ");
			strcpy(raspunsB, "b)H2S04 ");
			strcpy(raspunsC, "c)HF ");
			strcpy(raspunsD, "d)H2C03 ");
			strcpy(raspunsE, "e)HN03 ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 77:
		{
			strcpy(intrebare, "2.in urma reactiilor de hidroliza a MCl4 (M = Ti, Zr, Hf) se obtin oxihalogenuri MOCh. Care dintre aceste oxihalogenuri poate hidroliza mai departe pentru a forma oxid hidratat:");
			strcpy(raspunsA, "a)ZrOCh ");
			strcpy(raspunsB, "b)TiOCh ");
			strcpy(raspunsC, "c)HfOCh ");
			strcpy(raspunsD, "d)atat HfOCh cat si ZrOCh ");
			strcpy(raspunsE, "e)nici una dintre ele ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 78:
		{
			strcpy(intrebare, "3.Cu care halogen se combina vanadiul, la temperatura ridicata, pentru a forma pentahalogenura: ");
			strcpy(raspunsA, "a)F2 ");
			strcpy(raspunsB, "b)Cb ");
			strcpy(raspunsC, "c)Br2 ");
			strcpy(raspunsD, "d)I2 ");
			strcpy(raspunsE, "e)cu nici un halogen ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 79:
		{
			strcpy(intrebare, "4.Care dintre oxizii vanadiului prezinta activitate catalitica: ");
			strcpy(raspunsA, "a)VO ");
			strcpy(raspunsB, "b)V2O3 ");
			strcpy(raspunsC, "c)VO2 ");
			strcpy(raspunsD, "d)V2O5 ");
			strcpy(raspunsE, "e)nici unul dintre oxizi ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 80:
		{
			strcpy(intrebare, "5.Cromul nu prezinta fenomenul de pasivare fata de: ");
			strcpy(raspunsA, "a)HN03 diluat ");
			strcpy(raspunsB, "b)HN03 concentrat ");
			strcpy(raspunsC, "c)H2S04 diluat ");
			strcpy(raspunsD, "d)H2S04 concentrat ");
			strcpy(raspunsE, "e)apa regala ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 81:
		{
			strcpy(intrebare, "6.Care dintre urmatoarele afirmatii este falsa: ");
			strcpy(raspunsA, "a)ionii	CrO -	si Cr2O - contin cromul in starea de oxidare (+6) ");
			strcpy(raspunsB, "b)ambii ioni au caracter oxidant ");
			strcpy(raspunsC, "c)ionul CrO - are culoarea galbena iar Cr2O - are culoarea portocalie ");
			strcpy(raspunsD, "d)ionul CrO - este stabil in mediu acid ");
			strcpy(raspunsE, "e)ionul Cr2O - se obtine din condensarea prin varfuri a doi ioni tetraedrici CrO-, in mediu acid ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 82:
		{
			strcpy(intrebare, "7.Manganul se combina la cald cu oxigenul formand: ");
			strcpy(raspunsA, "a)Mn2O3 ");
			strcpy(raspunsB, "b)Mn2O1 ");
			strcpy(raspunsC, "c)MnO ");
			strcpy(raspunsD, "d)MnO2 ");
			strcpy(raspunsE, "e)Mn3O4 ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 83:
		{
			strcpy(intrebare, "8.Care dintre urmatoarele afirmatii este falsa: ");
			strcpy(raspunsA, "a)ionul MnO4 ^2- este stabil numai in mediu apos ");
			strcpy(raspunsB, "b)ionul MnO4 ^2- este verde iar ionul MnO 4 este violet ");
			strcpy(raspunsC, "c)ionul MnO4 ^- este oxidant atat in mediu acid cat si in mediu neutru sau bazic ");
			strcpy(raspunsD, "d)ionul MnO4 ^- are caracterul cel mai oxidant in mediul acid ");
			strcpy(raspunsE, "e)ionul MnO4 ^- are proprietati puternic oxidante comparativ cu ionii TcO4 ^- si ReO4 ^- ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 84:
		{
			strcpy(intrebare, "9.Fierul rugineste: ");
			strcpy(raspunsA, "a)in prezenta aerului uscat ");
			strcpy(raspunsB, "b)in apa si absenta oxigenului ");
			strcpy(raspunsC, "c)la temperatura ridicata si in atmosfera inerta ");
			strcpy(raspunsD, "d)in apa si prezenta oxigenului ");
			strcpy(raspunsE, "e)in atmosfera inerta si presiune ridicata ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 85:
		{
			strcpy(intrebare, "10.Ruteniul si osmiul sunt atacate de:");
			strcpy(raspunsA, "a)HCl diluat ");
			strcpy(raspunsB, "b)H2SO4 diluat ");
			strcpy(raspunsC, "c)HNO3 concentrat ");
			strcpy(raspunsD, "d)H2SO4 concentrat ");
			strcpy(raspunsE, "e)nu sunt atacate de nici un acid atat diluat cat si concentrat ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 86:
		{
			strcpy(intrebare, "11.Iridiul reactioneaza cu: ");
			strcpy(raspunsA, "a)H2SO4 concentrat ");
			strcpy(raspunsB, "b)HCl concentrat ");
			strcpy(raspunsC, "c)apa regala ");
			strcpy(raspunsD, "d)topituri alcalin oxidante ");
			strcpy(raspunsE, "e)HNO3 concentrat ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 87:
		{
			strcpy(intrebare, "12.O hartie imbibata cu CoCh va avea, intr-o atmosfera cu cel mai ridicat grad de umiditate, culoarea: ");
			strcpy(raspunsA, "a)roz ");
			strcpy(raspunsB, "b)rosie ");
			strcpy(raspunsC, "c)violeta ");
			strcpy(raspunsD, "d)verde ");
			strcpy(raspunsE, "e)albastra ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 88:
		{
			strcpy(intrebare, "13.Un catalizator se defineste ca fiind un compus care: ");
			strcpy(raspunsA, "a)determina cresterea vitezei de reactie, consumandu-se la sfarsitul reactiei ");
			strcpy(raspunsB, "b)determina cresterea vitezei de reactie, ramanand neconsumat la sfarsitul procesului chimic ");
			strcpy(raspunsC, "c)scade viteza de reactie si se consuma la sfarsitul reactiei ");
			strcpy(raspunsD, "d)scade viteza de reactie dar nu se consuma la sfarsitul procesului chimic ");
			strcpy(raspunsE, "e)nu influenteaza viteza de reactie, jucand rol de suport pentru reactanti ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 89:
		{
			strcpy(intrebare, "14.Nichelul face parte din familia fierului impreuna cu: ");
			strcpy(raspunsA, "a)Fe si Co ");
			strcpy(raspunsB, "b)Fe si Ru ");
			strcpy(raspunsC, "c)Pd si Fe ");
			strcpy(raspunsD, "d)Fe si Pt ");
			strcpy(raspunsE, "e)Os si Fe ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 90:
		{
			strcpy(intrebare, "15.Nichelul prezinta fenomenul de pasivare fata de: ");
			strcpy(raspunsA, "a)HNO3 diluat ");
			strcpy(raspunsB, "b)HCl diluat ");
			strcpy(raspunsC, "c)H2SO4 concentrat ");
			strcpy(raspunsD, "d)H2SO4 diluat ");
			strcpy(raspunsE, "e)HNO3 concentrat ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 91:
		{
			strcpy(intrebare, "16.Care dintre afirmatiile referitoare la proprietatile cuprului este cea falsa: ");
			strcpy(raspunsA, "a)se combina cu oxigenul la temperaturi ridicate formand CuO ");
			strcpy(raspunsB, "b)este stabil la actiunea combinata a 02 si CO2 din aerul umed ");
			strcpy(raspunsC, "c)reactioneaza cu H2SO4 concentrat ");
			strcpy(raspunsD, "d)este cel mai reactiv element din grupa 11 ");
			strcpy(raspunsE, "e)combinatiile cuprului in starea de oxidare (+2) sunt mai stabile in solutii apoase decat cele in starea de oxidare (+1) ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 92:
		{
			strcpy(intrebare, "17.Care afirmatie este adevarata: ");
			strcpy(raspunsA, "a)atat Ag cat si Au se combina la cald cu sulful formand sulfurile respective ");
			strcpy(raspunsB, "b)Au este atacat de HNO3 concentrat ");
			strcpy(raspunsC, "c)Ag nu este atacat de H2SO4 concentrat ");
			strcpy(raspunsD, "d)Au nu reactioneaza cu HCl concentrat ");
			strcpy(raspunsE, "e)apa regala ataca Au dar nu ataca Ag ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 93:
		{
			strcpy(intrebare, "18.Identificati afirmatia corecta: ");
			strcpy(raspunsA, "a)Hg nu reactioneaza cu HNO3 si H2SO4 concentrati deoarece este un metal situat dupa hidrogen in seria activitatii metalelor ");
			strcpy(raspunsB, "b)Cd nu se poate combina cu sulful nici chiar la temperaturi ridicate deoarece este mai putin reactiv decat Zn ");
			strcpy(raspunsC, "c)Zn reactioneaza cu hidroxizii alcalini eliberand H2 deoarece prezinta caracter amfoter ");
			strcpy(raspunsD, "d)Hg nu poate forma compusi in starea de oxidare (+1) deoarece este ultimul element din grupa 12 ");
			strcpy(raspunsE, "e)Cd degaja H2 in reactia cu hidroxizii alcalini deoarece prezinta caracter amfoter ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 94:
		{
			strcpy(intrebare, "19.Care dintre urmatoarele afirmatii nu este corecta: ");
			strcpy(raspunsA, "a)electronii necuplati situati in substratul 4f sunt mai bine ecranati fata de campurile exterioare ale liganzilor comparativ cu electronii necuplati din substratul Sf ");
			strcpy(raspunsB, "b)spectrele de absorbtie ale compusilor lantanidelor sunt asemanatoare indiferent de natura ligandului, fiind aceleasi atat in stare solida cat si lichida ");
			strcpy(raspunsC, "c)spectrele de absorbtie ale compusilor actinidelor sunt asemanatoare indiferent de natura ligandului deoarece orbitalii Sf patrund mai adanc in atom comparativ cu orbitalii 4f ");
			strcpy(raspunsD, "d)ionii trivalenti de lantanide cu n sau 14-n electroni in substratul 4f au aceeasi culoare ");
			strcpy(raspunsE, "e)orbitalii 4f in cazul lantanidelor nu participa la formarea de legaturi covalente in timp ce orbitalii Sf ai actinidelor participa intr-o oarecare masura la formarea de legaturi covalente ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 95:
		{
			strcpy(intrebare, "20.Se produce fenomenul de fluorescenta daca: ");
			strcpy(raspunsA, "a)nivelul energetic excitat este mai mic decat nivelul energetic corespunzator pierderii de caldura in exterior ");
			strcpy(raspunsB, "b)electronii aflati pe nivelul energetic excitat revin pe nivelul energetic de baza (fundamental) emitand fotoni cu aceeasi lungime de unda cu cea a luminii absorbite ");
			strcpy(raspunsC, "c)se produce o tranzitie interna cu emisie de fotoni intre doua nivele energetice excitate ");
			strcpy(raspunsD, "d)daca se produce o tranzitie interna, fara emisie de fotoni intre doua nivele energetice excitate, urmata de o revenire a electronilor pe nivelul energetic de baza cu em1s1e de fotoni cu alta lungime de unda decat cea a luminii absorbite");
			strcpy(raspunsE, "e)daca timpul de viata al electronilor pe un nivel energetic este foarte mic (de ordinul nanosecundelor) ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 96:
		{
			strcpy(intrebare, "21.in cromatografia cu schimbatori de ioni va fi eluat primul ionul de lantanid care: ");
			strcpy(raspunsA, "a)are raza cationului nehidratat cea mai mica ");
			strcpy(raspunsB, "b)are raza cationului nehidratat cea mai mare ");
			strcpy(raspunsC, "c)are raza cationului hidratat cea mai mica ");
			strcpy(raspunsD, "d)formeaza cu eluantul complexul cel mai putin stabil ");
			strcpy(raspunsE, "e)elutia se realizeaza la intamplare deoarece nu depinde de raza cationului de lantanid ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 97:
		{
			strcpy(intrebare, "22.Completa separare a ceriului de celelalte lantanide se realizeaza prin: ");
			strcpy(raspunsA, "a)evaporare ");
			strcpy(raspunsB, "b)schimbarea valentei urmata de precipitarea selectiva a Ce(OH)4 ");
			strcpy(raspunsC, "c)extractie cu solventi ");
			strcpy(raspunsD, "d)cromatografie cu schimbatori de ioni ");
			strcpy(raspunsE, "e)centrifugare ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 98:
		{
			strcpy(intrebare, "23.Dintre izotopii uraniului, cel care sufera reactii de fisiune nucleara este: ");
			strcpy(raspunsA, "a)238U ");
			strcpy(raspunsB, "b)239U ");
			strcpy(raspunsC, "c)235U ");
			strcpy(raspunsD, "d)239U ");
			strcpy(raspunsE, "e)nici unul dintre izotopii mentionati ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 99:
		{
			strcpy(intrebare, "24.Moderatorii existenti intr-un reactor nuclear au rolul: ");
			strcpy(raspunsA, "a)de a respinge neutroni ");
			strcpy(raspunsB, "b)de a mari viteza neutronilor ");
			strcpy(raspunsC, "c)de a frana viteza neutronilor prm c10cmn plastice ");
			strcpy(raspunsD, "d)de a frana viteza neutronilor pnn c10cmn elastice ");
			strcpy(raspunsE, "e)de a transforma neutronii rapizi in neutroni lenti ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 100:
		{
			strcpy(intrebare, "25.Care dintre urmatoarele afirmatii referitoare la proprietatile chimice ale metalelor din grupa a 3-a este falsa: ");
			strcpy(raspunsA, "a)sunt metale electropozitive si reactive ");
			strcpy(raspunsB, "b)oxizii lor au caldurile de formare dintre cele mai man ");
			strcpy(raspunsC, "c)se dizolva in acizi diluati cu degajare de H2 ");
			strcpy(raspunsD, "d)se combina la temperaturi ridicate cu azotul, sulful, fosforul si oxigenul ");
			strcpy(raspunsE, "e)se dizolva in solutii concentrate de alcalii ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 101:
		{
			strcpy(intrebare, "26.Uraniul reactioneaza usor cu oxigenul, la 150 grade C, formand:");
			strcpy(raspunsA, "a)UO2 ");
			strcpy(raspunsB, "b)UO3 ");
			strcpy(raspunsC, "c)U3O5 ");
			strcpy(raspunsD, "d)UO4 ");
			strcpy(raspunsE, "e)UO ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 102:
		{
			strcpy(intrebare, "27.Care afirmatie este falsa: ");
			strcpy(raspunsA, "a)razele a sunt nuclee de heliu dublu ionizate care au viteze mari date de energia lor cinetica ");
			strcpy(raspunsB, "b)radiatiile  pot fi electronice sau pozitronice ");
			strcpy(raspunsC, "c)radiatiile y sunt de natura electromagnetica si produc ionizarea gazelor prin care trec ");
			strcpy(raspunsD, "d)radiatiile y au energia data de relatia hv ");
			strcpy(raspunsE, "e)radiatiile au energii cuprinse intr-un interval larg de valori ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 103:
		{
			strcpy(intrebare, "28.Dezintegrarea unui nucleu prin captura K se realizeaza prin absorbtia de catre un nucleu parinte a: ");
			strcpy(raspunsA, "a)doi electroni din stratul L ");
			strcpy(raspunsB, "b)unui electron din primul strat ");
			strcpy(raspunsC, "c)doi electroni din primul strat ");
			strcpy(raspunsD, "d)doi electroni din stratul M ");
			strcpy(raspunsE, "e)alt raspuns ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 104:
		{
			strcpy(intrebare, "29.Care dintre seriile radioactive este considerata artificiala: ");
			strcpy(raspunsA, "a)4n ");
			strcpy(raspunsB, "b)4n + 1 ");
			strcpy(raspunsC, "c)4n + 5 ");
			strcpy(raspunsD, "d)4n + 2 ");
			strcpy(raspunsE, "e)4n + 3 ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 105:
		{
			strcpy(intrebare, "30.Prin timp de injumatatire se intelege perioada de timp dupa care: ");
			strcpy(raspunsA, "a)jumatate	din atomii unui radionuclid	se dezintegreaza ");
			strcpy(raspunsB, "b)atomii unui radionuclid se dubleaza ca numar ");
			strcpy(raspunsC, "c)atomii unui radionuclid se tripleaza ");
			strcpy(raspunsD, "d)un sfert din atomii	unui radionuclid se dezintegreaza ");
			strcpy(raspunsE, "e)alt raspuns ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 106:
		{
			strcpy(intrebare, "1.Un defect Schottky este: ");
			strcpy(raspunsA, "a)o vacanta intr-o retea altfel perfecta ");
			strcpy(raspunsB, "b)deplasarea unui atom sau a unui ion intr-o pozitie interstitiala ");
			strcpy(raspunsC, "c)identic cu defectul Frenkel");
			strcpy(raspunsD, "d)identic cu interschimbul ionic ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 107:
		{
			strcpy(intrebare, "2.Tranzitiile ordine-dezordine sunt in general asociate cu: ");
			strcpy(raspunsA, "a)dezordonari pozitionale ");
			strcpy(raspunsB, "b)dezordonari orientationale ");
			strcpy(raspunsC, "c)dezordonari ale starilor spinului electronic sau nuclear ");
			strcpy(raspunsD, "d)a), b) si c) ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 108:
		{
			strcpy(intrebare, "3.Efectul Meissner este: ");
			strcpy(raspunsA, "a)respingerea campului magnetic aplicat unei probe supraconductoare ");
			strcpy(raspunsB, "b)pierderea progresiva a supraconductivitatii peste o valoare a campului magnetic aplicat probei ");
			strcpy(raspunsC, "c)cresterea progresiva a supraconductivitatii peste o valoare a campului magnetic aplicat probei ");
			strcpy(raspunsD, "d)respingerea campului magnetic aplicat unei probe semiconductoare ");
			strcpy(raspunsE, "e)altceva ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 109:
		{
			strcpy(intrebare, "4.pereche Cooper se refera la: ");
			strcpy(raspunsA, "a)o pereche de atomi ");
			strcpy(raspunsB, "b)o pereche de anioni ");
			strcpy(raspunsC, "c)o pereche de cationi ");
			strcpy(raspunsD, "d)o pereche de electroni ");
			strcpy(raspunsE, "e)altceva ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 110:
		{
			strcpy(intrebare, "5.Un feromagnet tare: ");
			strcpy(raspunsA, "a)are curba de histerezis ingusta ");
			strcpy(raspunsB, "b)are curba de histerezis larga ");
			strcpy(raspunsC, "c)nu prezinta fenomenul de histerezis ");
			strcpy(raspunsD, "d)are magnetizarea liniara ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 111:
		{
			strcpy(intrebare, "6.Temperatura peste care dispare feromagnetismul se numeste: ");
			strcpy(raspunsA, "a)temperatura Neel ");
			strcpy(raspunsB, "b)temperatura Curie ");
			strcpy(raspunsC, "c)temperatura absoluta ");
			strcpy(raspunsD, "d)temperatura	critica	de supraconductoare ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 112:
		{
			strcpy(intrebare, "7.Difractia cu neutroni este un instrument major de studiu al proprietatilor magnetice a materialelor deoarece: ");
			strcpy(raspunsA, "a)neutronii pot interactiona din cauza spinului lor doar cu spinul electronilor impari ");
			strcpy(raspunsB, "b)neutronii pot interactiona din cauza spinului lor doar cu spinurile nucleelor ");
			strcpy(raspunsC, "c)neutronii nu pot interactiona cu spinul electronilor impari si cu cel al nucleelor");
			strcpy(raspunsD, "d)neutronii pot interactiona din cauza spinului lor atat cu spinul electronilor impari cat si cu spinurile nucleelor ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 113:
		{
			strcpy(intrebare, "8.Defectele extrinseci: ");
			strcpy(raspunsA, "a)apar in substantele pure ");
			strcpy(raspunsB, "b)apar in substantele impure ");
			strcpy(raspunsC, "c)nu apar niciodata ");
			strcpy(raspunsD, "d)sunt identice cu defectele intrinseci ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 114:
		{
			strcpy(intrebare, "9.Caracterul metalic a unor oxizi tranzitionali apare atunci cand: ");
			strcpy(raspunsA, "a)suprapunerea dintre orbitalii de valenta ai atomilor constituenti este mare ");
			strcpy(raspunsB, "b)suprapunerea dintre orbitalii de valenta ai	atomilor constituenti nu este mare ");
			strcpy(raspunsC, "c)suprapunerea dintre orbitalii de valenta ai	atomilor constituenti este minima ");
			strcpy(raspunsD, "d)suprapunerea dintre orbitalii de valenta ai	atomilor constituenti este zero ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 115:
		{
			strcpy(intrebare, "Supraconductorii de tipul I: ");
			strcpy(raspunsA, "a)prezinta o pierdere brusca a supraconductivitatii cand nu li se aplica un camp magnetic ");
			strcpy(raspunsB, "b)nu prezinta pierderea supraconductivitatii cand li se aplica un camp magnetic care depaseste valoarea critica ");
			strcpy(raspunsC, "c)prezinta o pierdere progresiva a supraconductivitatii peste o valoare a campului magnetic aplicat ");
			strcpy(raspunsD, "d)prezinta o pierdere progresiva a supraconductivitatii peste o valoare a campului aplicat care variaza de la o substanta la alta ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "e");
			break; 
		}
		case 116:
		{
			strcpy(intrebare, "11.Modelul Little de	explicare a supraconductivitatii in compusii organici: ");
			strcpy(raspunsA, "a)explica formarea de perechi Cooper ");
			strcpy(raspunsB, "b)nu explica formarea de perechi Cooper ");
			strcpy(raspunsC, "c)explica aparitia practica a fenomenului la temperatura camerei ");
			strcpy(raspunsD, "d)explica aparitia fenomenului prin deformatiile retelei cristaline ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 117:
		{
			strcpy(intrebare, "12.Caracteristica comuna a electrolitilor solizi o reprezinta: ");
			strcpy(raspunsA, "a)concentratia mare de ioni mobili si vacante ");
			strcpy(raspunsB, "b)concentratia mica de ioni mobili si vacante ");
			strcpy(raspunsC, "c)lipsa de ioni mobili si vacante ");
			strcpy(raspunsD, "d)concentratia mare de ioni mobili si vacante, cat si existenta caii dintre vacante care permite miscare ionilor cu o energie de activare joasa ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect");
			strcpy(raspunsCorect, "d");
			break;
		}
		case 118:
		{
			strcpy(intrebare, "13.Stabilitatea complecsilor ciclopentadienilici cu metale din grupa a 8-a se datoreaza: ");
			strcpy(raspunsA, "a)structurii de 18 electroni  ");
			strcpy(raspunsB, "b)legaturilor M-M ");
			strcpy(raspunsC, "c)ciclurilor pentadienilice  ");
			strcpy(raspunsD, "d)structurii electronice a metalelor ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 119:
		{
			strcpy(intrebare, "14.Prin definitie	un compus organo-metalic contine: ");
			strcpy(raspunsA, "a)un ligand organic in molecula ");
			strcpy(raspunsB, "b)un ligand organic si legaturi M-M ");
			strcpy(raspunsC, "c)cel putin o legatura M-C ");
			strcpy(raspunsD, "d)legaturi M-M ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 120:
		{
			strcpy(intrebare, "15.Una din metodele de obtinere a carbonililor metalici o reprezinta: ");
			strcpy(raspunsA, "a)tratarea unei sarii a metalului cu carbonati ai metalelor active ");
			strcpy(raspunsB, "b)combinarea directa a CO cu metalul respectiv in stare fin divizata ");
			strcpy(raspunsC, "c)descompunerea formiatilor metalelor respective ");
			strcpy(raspunsD, "d)descompunerea oxalatilor metalelor respective ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 121:
		{
			strcpy(intrebare, "16.Radicalul alil poate functiona ca donor de: ");
			strcpy(raspunsA, "a)doi electroni ");
			strcpy(raspunsB, "b)un electron sau trei electroni ");
			strcpy(raspunsC, "c)patru electroni ");
			strcpy(raspunsD, "d)mai mult de patru electroni ");
			strcpy(raspunsE, "e)este pi - acceptor ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 122:
		{
			strcpy(intrebare, "17.Compusii metal-alchilici sunt relativ instabili deoarece: ");
			strcpy(raspunsA, "a)in acest caz legatura M-C este slaba ");
			strcpy(raspunsB, "b)radicalul alchil este un compus saturat ");
			strcpy(raspunsC, "c)radicalul alchil este atragator de electroni ");
			strcpy(raspunsD, "d)carbonul este hibridizat sp3 in acesti radicali ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 123:
		{
			strcpy(intrebare, "18.Interactiunea agostica la formarea unui compus alchilic sau eliminarea hidrogenului dintr-un astfel de compus, consta in : ");
			strcpy(raspunsA, "a)eliminarea unui proton H+ ");
			strcpy(raspunsB, "b)formarea unui intermediar ciclic care contine o legatura de trei centre M-H-C ");
			strcpy(raspunsC, "c)eliminarea ionului hidrura H- ");
			strcpy(raspunsD, "d)a) si b) ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 124:
		{
			strcpy(intrebare, "19.Carbonilarea reductiva consta in: ");
			strcpy(raspunsA, "a)tratarea unei sari metalice cu CO2 ");
			strcpy(raspunsB, "b)descompunerea carbonatilor metalelor respective ");
			strcpy(raspunsC, "c)reducerea unui compus, sare sau complex al metalului in prezenta CO ");
			strcpy(raspunsD, "d)reducerea monoxidului de carbon la carbon elementar ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "c");
			break;
		}
		case 125:
		{
			strcpy(intrebare, "20.Hidrurile carbonililor simpli se obtin prin: ");
			strcpy(raspunsA, "a)tratarea	acestora	cu acizi concentrati	in atmosfera inerta ");
			strcpy(raspunsB, "b)tratare cu acizi concentrati	in atmosfera oxidanta ");
			strcpy(raspunsC, "c)tratare cu baze concentrate in atmosfera inerta ");
			strcpy(raspunsD, "d)tratare cu baze concentrate in atmosfera oxidanta ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 126:
		{
			strcpy(intrebare, "21.Fluxionalitatea este proprietatea metalului dintr-un compus organometalic: ");
			strcpy(raspunsA, "a)de a se deplasa in jurul unui ciclu cu legaturi duble conjugate la fiecare atom de carbon ");
			strcpy(raspunsB, "b)de a se deplasa de la un ciclu cu legaturi duble conjugate la altul ");
			strcpy(raspunsC, "c)de a nu se deplasa de la un ciclu cu legaturi duble conjugate la altul ");
			strcpy(raspunsD, "d)de a cobori punctul de topire al compusului ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 127:
		{
			strcpy(intrebare, "22.Introducerea unor liganzi polienici ciclici neutri in sfera de coordinare a unui metal se poate realiza prin: ");
			strcpy(raspunsA, "a)activarea fotochimica a carbonililor metalici ");
			strcpy(raspunsB, "b)activarea termica a carbonililor metalici ");
			strcpy(raspunsC, "c)activarea fotochimica si termica a carbonililor metalici ");
			strcpy(raspunsD, "d)activarea fotochimica sau termica a carbonatilor metalici ");
			strcpy(raspunsE, "e)activarea fotochimica sau termica a carbonililor metalici ");
			strcpy(raspunsCorect, "e");
			break;
		}
		case 128:
		{
			strcpy(intrebare, "23.Toti carbonilii metalici sunt: ");
			strcpy(raspunsA, "a)toxici si volatili ");
			strcpy(raspunsB, "b)solizi in conditii normale de temperatura si presiune ");
			strcpy(raspunsC, "c)lichizi in conditii normale de temperatura si presiune ");
			strcpy(raspunsD, "d)gazosi in conditii normale de temperatura si presiune ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
		case 129:
		{
			strcpy(intrebare, "24.Carbonilii metalici: ");
			strcpy(raspunsA, "a)se preteaza oxidarii gruparilor CO la CO2 fara descompunere ");
			strcpy(raspunsB, "b)se preteaza substitutiei gruparilor carbonilice cu liganzi diferiti ");
			strcpy(raspunsC, "c)nu	se	preteaza	substitutiei	gruparilor carbonilice cu liganzi diferiti ");
			strcpy(raspunsD, "d)nu pot fi redusi la anionii corespunzatori ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "b");
			break;
		}
		case 130:
		{
			strcpy(intrebare, "25.La formarea legaturii in compusii metal- alchenici participa: ");
			strcpy(raspunsA, "a)doi electroni din orbitalul n de la ligand ");
			strcpy(raspunsB, "b)doi electroni din orbitalul n de la metal ");
			strcpy(raspunsC, "c)trei electroni din orbitalul n de la metal ");
			strcpy(raspunsD, "d)a) si b) ");
			strcpy(raspunsE, "e)nici un raspuns nu este corect ");
			strcpy(raspunsCorect, "a");
			break;
		}
	}
}
int Intrebare::verificareRaspuns(char* rasp)
{
	int cont = 0;
	if (raspunsCorect[0] == rasp[0])
	{
		cout << "\nRaspunsul este corect!\n\n\n";
		cont++;
	}
	else
		cout << "\nRaspunsul este gresit! ---" << raspunsCorect << "--- este raspunsul corect... mai invata!\n\n\n";
	return cont;
}

void Intrebare::afisare()
{
	cout <<intrebare << "\n" << raspunsA << "\n" << raspunsB << "\n" << raspunsC << "\n" << raspunsD << "\n" << raspunsE<< endl;
}