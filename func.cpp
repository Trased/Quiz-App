#include "func.h"
#pragma warning(disable : 4996)
Intrebare::Intrebare(int num)
{
	int a[5] = { 0, 1,2,3,4 };
	random_shuffle(std::begin(a), std::end(a));
	for (int i = 0; i < 5; i++)
	{
		raspuns[a[i]] = char(i + 97);
	}
	switch (num)
	{
		case 1:
		{
			intrebare  = "1.Numerele cuantice iau valori: ";
			raspuns[0] +=  ") fractionare";
			raspuns[1] +=  ") naturale";
			raspuns[2] +=  ") intregi ";
			raspuns[3] +=  ") naturale si fractionare";
			raspuns[4] +=  ") intregi si fractionare";
			raspunsCorect = raspuns[4][0];

			break;
		}
		case 2:
		{
			intrebare = "2.Starile permise care au aceeasi energie intr-un sistem cuantic se numesc:";
			raspuns[0] += ") generate";
			raspuns[1] += ") nedegenerate";
			raspuns[2] += ") degenerate";
			raspuns[3] += ") regenerate";
			raspuns[4] += ") altfel";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 3:
		{
			intrebare = "3.Orbitalii d:";
			raspuns[0] += ") sunt sferici";
			raspuns[1] += ") sunt bilobari";
			raspuns[2] += ") sunt trilobari";
			raspuns[3] += ") sunt tetralobari";
			raspuns[4] += ") au centru de simetrie";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 4:
		{
			intrebare = "4.Principiul excluziunii a lui Pauli sustine ca:";
			raspuns[0] += ") un orbital nu poate fi ocupat cu mai mult de doi electroni iar in cazul ocuparii cu doi electroni, spinurile lor trebuie sa fie imperecheate";
			raspuns[1] += ") un orbital nu poate fi ocupat cu mai mult de un electron";
			raspuns[2] += ") un orbital nu poate fi ocupat cu mai mult de doi electroni iar in cazul ocuparii cu doi electroni, spinurile lor trebuie sa fie neimperecheate";
			raspuns[3] += ") un orbital nu poate fi ocupat cu mai mult de un electron dar in cazul ocuparii cu doi electroni, spinurile lor trebuie sa fie imperecheate";
			raspuns[4] += ") se refera la altceva";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 5:
		{
			intrebare = "5.Notiunea de sarcina nucleara efectiva a fost introdusa din cauza:";
			raspuns[0] += ") atractiei dintre electroni";
			raspuns[1] += ") repulsiei dintre electroni";
			raspuns[2] += ") fortelor intenucleare";
			raspuns[3] += ") fortelor intranucleare";
			raspuns[4] += ") campurilor magnetice exterioare atomului";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 6:
		{
			intrebare = "6.Configuratia electronica in stare fundamentala a galiului (Z = 31) este:";
			raspuns[0] += ") 1s2 2s2 2p6 3s2 3p1";
			raspuns[1] += ") 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p1";
			raspuns[2] += ") 1s2 2s2 2p6 3s2 3p6 4s2 3d9 4p2";
			raspuns[3] += ") 1s2 2s2 2p6 3s2 3p6 3d10 4s2 4p1";
			raspuns[4] += ") 1s2 2s2 2p6 3s2 3p6 3d10 4p1 4s2";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 7:
		{
			intrebare = "7.Ordinul de legatura al unei molecule este egal cu:";
			raspuns[0] += ") numarul de electroni de pe orbitalii de legatura minus numarul de electroni de pe orbitalii de nelegatura";
			raspuns[1] += ") semisuma electronilor de pe orbitalii de legatura si de nelegatura";
			raspuns[2] += ") semisuma electronilor de pe orbitalii de legatura si de antilegatura";
			raspuns[3] += ") semisuma electronilor de pe orbitalii de antilegatura si de nelegatura";
			raspuns[4] += ") semidiferenta dintre electronii de pe orbitalii de legatura si cei de pe orbitalii de antilegatura";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 8:
		{
			intrebare = "8.Legaturile deficitare in electroni apar in moleculele in care:";
			raspuns[0] += ") nu sunt destui electroni pentru a permite prezenta a cel putin doi electroni intr-o legatura";
			raspuns[1] += ") nu sunt destui electroni pentru a permite prezenta a cel putin un electron intr-o legatura";
			raspuns[2] += ") sunt destui electroni pentru a permite prezenta a maxim trei electroni intr-o legatura";
			raspuns[3] += ") atomii sunt hibridizati sp3";
			raspuns[4] += ") atomii sunt hibridizati sp2";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 9:
		{
			intrebare = "9.Rotatia de ordinul n este operatia de simetrie in urma careia molecula apare neschimbata dupa:";
			raspuns[0] += ") o rotatie cu 360 grade/n";
			raspuns[1] += ") o rotatie cu 360 grade";
			raspuns[2] += ") o rotatie cu n grade";
			raspuns[3] += ") o rotatie cu 180 grade";
			raspuns[4] += ") o rotatie cu 180 grade/n";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 10:
		{
			intrebare = "10.Elementul de simetrie corespunzator operatiei de simetrie numita reflexie este:";
			raspuns[0] += ") centrul de simetrie";
			raspuns[1] += ") planul de simetrie";
			raspuns[2] += ") axa de simetrie de ordinul n";
			raspuns[3] += ") grupul de simetrie";
			raspuns[4] += ") grupul punctual";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 11:
		{
			intrebare = "11.Complecsii cu spin inalt sunt complecsii in care:";
			raspuns[0] += ") energia scindarii este mai mica decat energia de imperechere";
			raspuns[1] += ") energia scindarii este mai mare decat energia de imperechere";
			raspuns[2] += ") numarul de electroni impari este maxim";
			raspuns[3] += ") numarul de electroni impari este minim";
			raspuns[4] += ") campul cristalin este puternic";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 12:
		{
			intrebare = "12.Legatura de hidrogen este legatura care se fonneaza : ";
			raspuns[0] += ") intre atomii de hidrogen";
			raspuns[1] += ") intre moleculele de hidrogen";
			raspuns[2] += ") in molecula de hidrogen";
			raspuns[3] += ") intre atomul de hidrogen dintr-o molecula si elementul electronegativ dintr-o alta molecula";
			raspuns[4] += ") in solidele ionice";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 13:
		{
			intrebare = "13.in structura tip perovskit (ABX3):";
			raspuns[0] += ") atomul A se afla in centru fiind inconjurat de 12 atomi de oxigen";
			raspuns[1] += ") atomul B se afla pe colturi si este inconjurat de opt atomi de oxigen";
			raspuns[2] += ") atomul A se afla pe colturi";
			raspuns[3] += ") 12 atomi de oxigen se afla pe fete";
			raspuns[4] += ") atomul B se afla in mijloc";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 14:
		{
			intrebare = "14.Entalpia de retea este:";
			raspuns[0] += ") variatia de entalpie care insoteste trecerea unui solid in stare gazoasa sub forma de ioni";
			raspuns[1] += ") variatia de entalpie care insoteste trecerea unui solid in stare lichida sub forma de ioni";
			raspuns[2] += ") variatia de entalpie care insoteste transformarile de faza dintr-un solid";
			raspuns[3] += ") variatia de entropie care insoteste trecerea unui solid in stare gazoasa sub forma de ioni";
			raspuns[4] += ") variatia de entalpie care insoteste trecerea unui solid in stare gazoasa sub forma de molecule nepolare";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 15:
		{
			intrebare = "15.Polarizarea este:";
			raspuns[0] += ") fenomenul prin care centrul sarcinilor negative dintr-un ion nu mai coincide cu cel al sarcinilor pozitive, cu inducerea unui moment de dipol";
			raspuns[1] += ") fenomenul prin care centrul sarcinilor negative dintr-un ion coincide cu cel al sarcinilor pozitive, cu inducerea unui moment de dipol";
			raspuns[2] += ") fenomenul prin care centrul sarcinilor negative dintr-un ion nu mai coincide cu cel al sarcinilor pozitive dar fara a induce un moment de dipol";
			raspuns[3] += ") fenomenul prin care sarcinile negative si pozitive dintr-un ion se anuleaza reciproc";
			raspuns[4] += ") un fenomen care nu are nici o legatura cu sarcinile ionilor";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 16:
		{
			intrebare = "16.Domeniul care separa doua benzi intr-un solid se numeste:";
			raspuns[0] += ") nivel Fermi";
			raspuns[1] += ") densitate de stari";
			raspuns[2] += ") zona interzisa";
			raspuns[3] += ") banda d";
			raspuns[4] += ") banda p";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 17:
		{
			intrebare = "17.Solidele in care nivelul energetic superior al unei benzi complet ocupate coincide cu cel inferior al unei benzi goale, densitatea fiind insa nula la separatie, se numesc :";
			raspuns[0] += ") semimetale";
			raspuns[1] += ") nemetale";
			raspuns[2] += ") metale";
			raspuns[3] += ") metaloizi";
			raspuns[4] += ") supraconductori";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 18:
		{
			intrebare = "18.intr-un atom energia sistemului va depinde de:";
			raspuns[0] += ") numarul cuantic secundar";
			raspuns[1] += ") numarul cuantic principal";
			raspuns[2] += ") numarul cuantic magnetic";
			raspuns[3] += ")  a) si b)";
			raspuns[4] += ") nu depinde de numerele cuantice";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 19:
		{
			intrebare = "19.Setul de orbitali atomici determinati prin metoda Hartree-Fock este auto-consistent atunci cand:";
			raspuns[0] += ") este determinat prin iteratii succesive";
			raspuns[1] += ") nu este determinat prin iteratii succesive";
			raspuns[2] += ") nu mai apar diferente notabile intre orbitalii calculati prin iteratii succesive";
			raspuns[3] += ") functia de unda a unui electron nu depinde de ceilalti electroni";
			raspuns[4] += ") atomii luati in calcul au o sarcina nucleara mare";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 20:
		{
			intrebare = "20.Cationii blocului d au configuratii dn deoarece:";
			raspuns[0] += ") odata inceputa completarea substratului d energia acestuia scade sub cea a orbitalilor s";
			raspuns[1] += ") odata inceputa completarea substratului d energia acestuia creste peste cea a orbitalilor s";
			raspuns[2] += ") orbitalii d au energie egala cu orbitalii s";
			raspuns[3] += ") apare contractia lantanidelor";
			raspuns[4] += ") apare contractia actinidelor";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 21:
		{
			intrebare = "21.	Cel mai mic set de orbitali atomici cu ajutorul carora putem construi orbitali moleculari se numeste:";
			raspuns[0] += ") set de baza";
			raspuns[1] += ") set de baza mediu";
			raspuns[2] += ") set de baza maximal";
			raspuns[3] += ") set de baza minim";
			raspuns[4] += ") set sp";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 22:
		{
			intrebare = "22.Denumirea de scindare in camp cristalin a orbitalilor d din complecsi provine de la faptul ca:";
			raspuns[0] += ") fenomenul nu are loc in solutie";
			raspuns[1] += ") fenomenul are loc in solutie";
			raspuns[2] += ") fenomenul are loc doar in faza solida";
			raspuns[3] += ") fenomenul are loc doar pentru complecsii cristalini";
			raspuns[4] += ") astfel de situatii se intalnesc mai ales in cristalele ionice";
			raspunsCorect = raspuns[4][0];
		}
		case 23:
		{
			intrebare = "23.Teorema Jahn-Teller sustine ca:";
			raspuns[0] += ") in general moleculele neliniare sunt instabile intr-o stare electronica degenerata, molecula trebuind sa se distorsioneze astfel incat sa distruga degenerarea";
			raspuns[1] += ") in general moleculele liniare sunt instabile intr-o stare electronica degenerata, molecula trebuind sa se distorsioneze astfel incat sa distruga degenerarea";
			raspuns[2] += ") in general moleculele liniare sunt stabile intr o stare electronica degenerata";
			raspuns[3] += ") in general moleculele neliniare sunt stabile intr-o stare electronica degenerata";
			raspuns[4] += ") in general moleculele liniare trebuie sa se distorsioneze";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 24:
		{
			intrebare = "24.Dezavantajul major al TCC este acela ca:";
			raspuns[0] += ") neglijeaza evidenta prezentei legaturilor ionice ce apar in unii complecsi";
			raspuns[1] += ") neglijeaza evidenta	prezentei legaturilor covalente ce apar in unii complecsi";
			raspuns[2] += ") nu poate prezice energii de formare s1 mecamsme";
			raspuns[3] += ") presupune un aparat matematic foarte complicat";
			raspuns[4] += ") nu este corelata cu practica";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 25:
		{
			intrebare = "25.Liganzii n cu caracter de acid Lewis sunt liganzii care";
			raspuns[0] += ") in afara orbitalilor n ocupati mai au orbitali n neocupati de antilegatura care sunt insa accesibili pentru formarea de legaturi";
			raspuns[1] += ") au orbitalii n ocupati cu electroni";
			raspuns[2] += ") au orbitalii cr ocupati cu electroni";
			raspuns[3] += ") au orbitali cu energia mai joasa decat orbitalii d ai metalului";
			raspuns[4] += ") au orbitali cu energia egala cu cea a orbitalilor d ai metalului";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 26:
		{
			intrebare = "26.Legaturile in cristalele covalente sunt:";
			raspuns[0] += ") slabe si nepolare";
			raspuns[1] += ") slabe si polare";
			raspuns[2] += ") puternice si polare";
			raspuns[3] += ") puternice si nepolare";
			raspuns[4] += ") de natura ionica";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 27:
		{
			intrebare = "27.Aparitia legaturilor de hidrogen este evidentiata prin:";
			raspuns[0] += ") cresterea valorii punctelor de fierbere";
			raspuns[1] += ") cresterea valorii punctelor de topire";
			raspuns[2] += ") cresterea	valorii	caldurilor	latente	de vaporizare";
			raspuns[3] += ") cresterea valorii caldurilor latente de topire";
			raspuns[4] += ") toate variantele anterioare";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 28:
		{
			intrebare = "28.Coordinarea in structura tip clorura de sodiu este:";
			raspuns[0] += ") (4,8)";
			raspuns[1] += ") (8,8)";
			raspuns[2] += ") (8,4)";
			raspuns[3] += ") (4,4)";
			raspuns[4] += ") (6,6)";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 29:
		{
			intrebare = "29.Razele ionilor moleculari nesferici determinate cu ajutorul ecuatiei Kapustinskii, folosind entalpia de retea determinata din ciclul Born-Haber, se numesc:";
			raspuns[0] += ") raze termochimice";
			raspuns[1] += ") raze moleculare";
			raspuns[2] += ") raze ionice";
			raspuns[3] += ") raze atomice";
			raspuns[4] += ") raze termocromice";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 30:
		{
			intrebare = "30.Un criteriu de identificare a conductiei metalice este:";
			raspuns[0] += ") cresterea conductivitatii la cresterea temperaturii";
			raspuns[1] += ") independenta conductivitatii fata de cresterea temperaturii";
			raspuns[2] += ") scaderea conductivitatii la cresterea temperaturii";
			raspuns[3] += ") disparitia rezistentei electrice la temperaturi foarte scazute";
			raspuns[4] += ") disparitia rezistentei electrice";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 31:
		{
			intrebare = "31.Denumirea de semiconductivitate de tip n provine de la:";
			raspuns[0] += ") numarul cuantic principal n";
			raspuns[1] += ") nivelul Fermi";
			raspuns[2] += ") transportorii de sarcina care sunt negativi";
			raspuns[3] += ") banda care este neocupata";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 32:
		{
			intrebare = "1.Prin potential de ionizare de ordinul intai se intelege:";
			raspuns[0] += ") energia pe care o poseda un ion pozitiv";
			raspuns[1] += ") energia pe care o poseda un ion negativ";
			raspuns[2] += ") energia minima necesara smulgerii unm electron din invelisul electronic al unui atom";
			raspuns[3] += ") energia necesara obtinerii celei mai stabile stari de oxidare";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 33:
		{
			intrebare = "2.Pentru elementele dintr-o perioada afinitatea pentru electron:";
			raspuns[0] += ") creste de la dreapta la stanga";
			raspuns[1] += ") ramane relativ constant";
			raspuns[2] += ") creste de la stanga la dreapta";
			raspuns[3] += ") prezinta o variatie aleatoare";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 34:
		{
			intrebare = "3.Afinitatea fata de electron reprezinta:";
			raspuns[0] += ") energia electronilor de pe ultimul strat al unui atom";
			raspuns[1] += ") energia unui ion negativ";
			raspuns[2] += ") potentialul de ionizare luat cu semn negativ";
			raspuns[3] += ") energia necesara captarii unui electron, cu energie cinetica zero, de catre un atom, ion sau molecula";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 35:
		{
			intrebare = "4.Un acid Bronsted este un compus sau un ion care:";
			raspuns[0] += ") disociaza in solutie apoasa cu formare de protoni";
			raspuns[1] += ") contine in molecula atomi de hidrogen";
			raspuns[2] += ") cedeaza in solutie atomi de hidrogen";
			raspuns[3] += ") disociaza in solutie cu formare de anion s1 cation";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 36:
		{
			intrebare = "5.intr-o grupa principala a sistemului periodic caracterul bazic al compusilor similari:";
			raspuns[0] += ") creste de jos in sus";
			raspuns[1] += ") creste de sus in jos";
			raspuns[2] += ") ramane constat";
			raspuns[3] += ") prezinta o variatie neperiodica";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 37:
		{
			intrebare = "6.O baza Lewis este:";
			raspuns[0] += ") un compus care contine in molecula grupari Ro -";
			raspuns[1] += ") un atom, molecula sau ion care are cel putin o pereche de electroni neparticipanti la o legatura covalenta";
			raspuns[2] += ") un compus care disociaza cu formare de anioni hidroxid";
			raspuns[3] += ") un atom, molecula sau ion care leaga prm legaturi covalente o grupa hidroxid";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 38:
		{
			intrebare = "7.Cu metalele din prima grupa hidrogenul formeaza:";
			raspuns[0] += ") hidruri covalente polare";
			raspuns[1] += ") hidruri ionice";
			raspuns[2] += ") hidruri interstitiale";
			raspuns[3] += ") hidrogenul nu formeaza compusi pentru ca are un singur electron";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 39:
		{
			intrebare = "8.Metalele alcaline complexeaza cel mai bine cu:";
			raspuns[0] += ") liganzi de tip crown sau criptati";
			raspuns[1] += ") liganzi care contin un atom de oxigen donor";
			raspuns[2] += ") liganzi care contin legaturi n in molecula";
			raspuns[3] += ") liganzi anorganici";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 40:
		{
			intrebare = "9.Elementele blocului s:";
			raspuns[0] += ") nu se dizolva in amoniac lichid anhidru";
			raspuns[1] += ") se dizolva in amoniac lichid anhidru cu formare de solutii cu caracter puternic oxidant";
			raspuns[2] += ") se dizolva in amoniac lichid anhidru cu formare de solutii cu caracter puternic reducator";
			raspuns[3] += ") se dizolva in amoniac lichid anhidru cu formare de solutii cu caracter slab oxidant";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 41:
		{
			intrebare = "Acidul azotos disproportioneaza cu formare de:";
			raspuns[0] += ") N2 si NO2";
			raspuns[1] += ") N2 si N2O2";
			raspuns[2] += ") N2 si N2O4";
			raspuns[3] += ") NO si NO3";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 42:
		{
			intrebare = "11.In borati atomii de bor pot avea:";
			raspuns[0] += ") coordinatia trei";
			raspuns[1] += ") coordinatia patru";
			raspuns[2] += ") ambele coordinatii";
			raspuns[3] += ") coordinatia cinci";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 43:
		{
			intrebare = "12.Aminoboranul este izoelectronic cu:";
			raspuns[0] += ") etanul";
			raspuns[1] += ") acetilena";
			raspuns[2] += ") etena";
			raspuns[3] += ") metilamina";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 44:
		{
			intrebare = "13.Forma cristalina de temperatura Joasa a nitrurii de bor este similara cu cea a:";
			raspuns[0] += ") diamantului";
			raspuns[1] += ") grafitului";
			raspuns[2] += ") clorurii de sodiu";
			raspuns[3] += ") rutilului";
			raspuns[4] += ") perovskitului";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 45:
		{
			intrebare = "14.Conductibilitatea electrica a grafitului se datoreaza:";
			raspuns[0] += ") electronilor legaturii n conjugate";
			raspuns[1] += ") electronilor legaturilor C-C";
			raspuns[2] += ") golurilor din reteaua cristalina";
			raspuns[3] += ") distantei mari dintre straturile de atomi de carbon";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 46:
		{
			intrebare = "AICI TREBUIA SA FIE O DIAGRAMA!!!!!\n15.Conform diagramei Ellingham de mai sus AhO3 se poate reduce cu carbon:";
			raspuns[0] += ") peste aproximativ 2000 grade C";
			raspuns[1] += ") peste aproximativ 1500 grade C";
			raspuns[2] += ") in orice conditii";
			raspuns[3] += ") mai jos de 1500 grade C";
			raspuns[4] += ") nu se reduce cu carbon";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 47:
		{
			intrebare = "16. Care dintre urmatoarele enunturi este adevarat:";
			raspuns[0] += ") Silanii sunt compusi ai siliciul cu sulful";
			raspuns[1] += ") Silanii sunt omologii acizilor organici";
			raspuns[2] += ") Silanii sunt mai volatili decat alcanii";
			raspuns[3] += ") Silanii sunt compusi saturati";
			raspuns[4] += ") Silanii se obtin prin oxidarea	clorurilor corespunzatoare";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 48:
		{
			intrebare = "17.Formula moleculara corecta a dioxidului de siliciu este:";
			raspuns[0] += ") (SiO2)n";
			raspuns[1] += ") SiO4 ^-4";
			raspuns[2] += ") [(SiO3)^2-]n";
			raspuns[3] += ") SiO2";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 49:
		{
			intrebare = "18.Molecula de azot este foarte putin reactiva pentru ca:";
			raspuns[0] += ") azotul este gaz in conditii normale";
			raspuns[1] += ") este primul element din grupa";
			raspuns[2] += ") cei doi atomi de azot sunt legati prin trei legaturi chimice";
			raspuns[3] += ") are o mare afinitate pentru electron";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 50:
		{
			intrebare = "19.Care dintre urmatorii OXIZI de azot dimerizeaza:";
			raspuns[0] += ") N2O";
			raspuns[1] += ") N2O3";
			raspuns[2] += ") NO2";
			raspuns[3] += ") N2O5";
			raspuns[4] += ") N2O4";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 51:
		{
			intrebare = "20.Acidul azotic este fabricat industrial prin:";
			raspuns[0] += ") reducerea azotului la amoniac urmata de oxidarea cu oxigen si disproportionarea oxidului obtinut in apa";
			raspuns[1] += ") oxidarea azotului cu aer unnata de disproportionarea oxidului obtinut in apa";
			raspuns[2] += ") reducerea azotului cu oxigen din aer urmata de disproportionarea oxidului obtinut in apa";
			raspuns[3] += ") oxidarea azotului cu oxigen din aer urmata de disproportionarea oxidului obtinut in apa";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 52:
		{
			intrebare = "21.Hidrazina se prepara industrial prin:";
			raspuns[0] += ") aditia hidrogenului la molecula de amoniac";
			raspuns[1] += ") aditia catalitica a hidrogenului la compusi oxigenati";
			raspuns[2] += ") oxidarea solutiilor de amoniac cu hipoclorit de sodiu";
			raspuns[3] += ") reducerea compusilor oxigenati ai azotului in mediu acid";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 53:
		{
			intrebare = "22.	Starea de oxidare a fosforului in anionul fosfit este:";
			raspuns[0] += ") (+l)";
			raspuns[1] += ") (+2)";
			raspuns[2] += ") (+3)";
			raspuns[3] += ") (+4)";
			raspuns[4] += ") (+5)";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 54:
		{
			intrebare = "23.In stare de vapori sulful este format din:";
			raspuns[0] += ") molecule ciclice S5";
			raspuns[1] += ") molecule S2 similare cu 02";
			raspuns[2] += ") molecule ciclice S6";
			raspuns[3] += ") lanturi polimere Sn";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 55:
		{
			intrebare = "HNO3 + H2S -> NO + H2O + S\n25.Coeficientii reactiei redox de mai sus sunt:";
			raspuns[0] += ") 1,3,2,4,2";
			raspuns[1] += ") 1,2,3,4,2";
			raspuns[2] += ") 1,3,2,2,4";
			raspuns[3] += ") 1,3,4,2,2";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 56:
		{
			intrebare = "FeCl3 + H2S -> \n24. Produsii reactiei de mai sus sunt:";
			raspuns[0] += ") FeS +HCI+ S";
			raspuns[1] += ") FeS+H2O+S";
			raspuns[2] += ") FeCh+H2O+S";
			raspuns[3] += ") FeCh + HCI + S";
			raspuns[4] += ") FeCh + Ch +FeS";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 57:
		{
			intrebare = "26.Metalele alcaline formeaza in reactia cu oxigenul:";
			raspuns[0] += ") oxizi, peroxizi, superoxizi si ozonide";
			raspuns[1] += ") OXIZI, peroxizI sI superoxizI";
			raspuns[2] += ") oxizi cu formula M2O";
			raspuns[3] += ") oxizt si peroxizI";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 58:
		{
			intrebare = "27.Care din urmatoarele afirmatii este falsa:";
			raspuns[0] += ") SOJ este un acid Lewis";
			raspuns[1] += ") SOJ este o anhidrida acida ";
			raspuns[2] += ") SOJ polimerizeaza ";
			raspuns[3] += ") SOJ hibridizeaza sp2 in faza gazoasa ";
			raspuns[4] += ") nici un raspuns anterior nu este adevarat ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 59:
		{
			intrebare = "28.in compusii interhalogenici cea mai inalta stare de oxidare o atinge: ";
			raspuns[0] += ") clorul si iodul ";
			raspuns[1] += ") toti halogenii ";
			raspuns[2] += ") clorul, iodul si bromul ";
			raspuns[3] += ") in compusii interhalogenici nu se ating stari maxime de oxidare deoarece sunt formati din doua nemetale ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 60:
		{
			intrebare = "29.Un izotop reprezinta:";
			raspuns[0] += ") o specie atomica cu acelasi numar de ordine Z ca al unui alt element dar cu un numar de masa A diferit";
			raspuns[1] += ") un atom radioactiv ";
			raspuns[2] += ") un atom foarte stabil ";
			raspuns[3] += ") o specie atomica cu acelasi numar de masa A ca al unui alt element dar cu Z diferit ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 61:
		{
			intrebare = "30.Prin fisiune nucleara se intelege:";
			raspuns[0] += ") formarea unui nucleu mai mare din nuclee mai mici cu o mare degajare de energie ";
			raspuns[1] += ") descompunerea unui nucleu mare in alte nuclee mai mici cu o mare degajare de energie ";
			raspuns[2] += ") reactia nucleara a uraniului ";
			raspuns[3] += ") o reactie nucleara in un electron este captat de nucleu ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 62:
		{
			intrebare = "31.Disocierea moleculei de hidrogen pentru cresterea reactivitatii chimice poate fi:";
			raspuns[0] += ") homolitica si heterolitica";
			raspuns[1] += ") homolitica ";
			raspuns[2] += ") heterolitica ";
			raspuns[3] += ") molecula de hidrogen nu disociaza datorita entalpiei mari de legatura ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 63:
		{
			intrebare = "32.Numarul de coordinatie al unui atom sau ion central este identic cu: ";
			raspuns[0] += ") starea de oxidare ";
			raspuns[1] += ") numarul de liganzi din sfera de coordinare primara ";
			raspuns[2] += ") valenta ";
			raspuns[3] += ") numarul	total	de	specii	chimice	ce-l inconjoara ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 64:
		{
			intrebare = "33.Raza Van der Waals este: ";
			raspuns[0] += ") identica cu raza ionica ";
			raspuns[1] += ") identica cu raza atomica ";
			raspuns[2] += ") distanta minima la care se pot apropia doi atomi fara ca intre ei sa se formeze o legatura chimica ";
			raspuns[3] += ") distanta maxima la care se pot apropia doi atomi fara ca intre ei sa se formeze o legatura chimica ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 65:
		{
			intrebare = "34.Parahidrogenul este: ";
			raspuns[0] += ") constituit din atomi in care nucleele se rotesc sens invers unul fata de celalalt ";
			raspuns[1] += ") constituit din atomi in care nucleele se rotesc in acelasi sens unul fata de celalalt ";
			raspuns[2] += ") identic cu ortohidrogenul ";
			raspuns[3] += ") fonnat din atomi de heliu ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 66:
		{
			intrebare = "35.Sunt congeneri elementele care fac parte:";
			raspuns[0] += ") din aceeasi perioada";
			raspuns[1] += ") din acelasi bloc de elemente";
			raspuns[2] += ") din aceeasi grupa ";
			raspuns[3] += ") numai din grupele principale ";
			raspuns[4] += ") numai din grupele secundare ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 67:
		{
			intrebare = "36.Care dintre afirmatiile referitoare la beriliu este falsa: ";
			raspuns[0] += ") este un metal alcalino-pamantos ";
			raspuns[1] += ") are un caracter mai putin electropozitiv decat litiu ";
			raspuns[2] += ") face parte din blocul elementelor de tip s ";
			raspuns[3] += ") ionul simplu Be2+ exista in solutii sau retele ";
			raspuns[4] += ") prezinta tendinta partiala de a forma legaturi covalente ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 68:
		{
			intrebare = "37.Elementele de tip p din perioada a 2-a pot adopta un numar maxim de coordinatie:";
			raspuns[0] += ") egal cu 3 deoarece utilizeaza trei orbitali 2p ";
			raspuns[1] += ") egal cu 4 deoarece utilizeaza un orbital 2s si trei orbitali 2p ";
			raspuns[2] += ") egal cu 5 prin utilizarea unui orbital 2s, a trei orbitali 2p si a unui orbital 2d ";
			raspuns[3] += ") egal cu 6 prin utilizarea unui orbital 2s, a trei orbitali 2p si a doi orbitali 2d ";
			raspuns[4] += ") egal cu 7 prin utilizarea unui orbital 2s, a trei orbitali 2p si a trei orbitali 2d ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 69:
		{
			intrebare = "38.Identificati afirmatia falsa. Prezenta orbitalilor de tip d influenteaza:";
			raspuns[0] += ") numarul maxim de coordinatie al elementelor de tip p ";
			raspuns[1] += ") comportarea chimica diferita a compusilor primului element comparativ cu compusii similari ai celui de-al doilea element dintr-o grupa din blocul p ";
			raspuns[2] += ") disponibilitatea perechii de electroni din substratul ns2 de a participa la legaturi ";
			raspuns[3] += ") capacitatea de formare a unei legaturi P pi - P pi a unui element din perioada a 2-a ";
			raspuns[4] += ") capacitatea de formare a unei legaturi de tip d pi - P pi  sau d pi - d pi in cazul elementelor de tip p din perioadele 3, 4 si 5 ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 70:
		{
			intrebare = "39.Taria legaturilor element-hidrogen (E-H) in cazul hidrurilor elementelor din grupa a 14-a scade in ordinea: ";
			raspuns[0] += ") CH4> SiH4 > PbH4 > GeH4 > SnH4 ";
			raspuns[1] += ") SiH4 > CH4 > PbH4 > SnH4 > GeH4 ";
			raspuns[2] += ") PbH4 > SnH4 > GeH4 > SiH4 > CH4 ";
			raspuns[3] += ") CH4 > PbH4 > GeH4 > SiH4 > SnH4";
			raspuns[4] += ") CH4 > SiH4 > GeH4 > SnH4 > PbH4 ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 71:
		{
			intrebare = "40.Care dintre elementele unei grupe din blocul p vor avea electronii ns^2 mai inerti:";
			raspuns[0] += ") cele din perioada a 6-a ";
			raspuns[1] += ") cele din perioada a 2-a ";
			raspuns[2] += ") cele din perioada a 4-a ";
			raspuns[3] += ") cele din perioada a 3-a ";
			raspuns[4] += ") cele din perioada a 5-a ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 72:
		{
			intrebare = "41.Care dintre oxizii prezentati mai JOS contin numai legaturi p pi - p pi:";
			raspuns[0] += ") CO, SO3, N2O, NO ";
			raspuns[1] += ") SO3, NO2, CO2, N2O3 ";
			raspuns[2] += ") CO, CO2, N2O, NO ";
			raspuns[3] += ") N2O, NO2, SO3, CO2 ";
			raspuns[4] += ") CO, N2O3, NO, SO3 ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 73:
		{
			intrebare = "42.Care dintre urmatorii hidroxizi se topeste la incalzire fara sa se descompuna in oxid: ";
			raspuns[0] += ") LiOH ";
			raspuns[1] += ") Ca(OH)2 ";
			raspuns[2] += ") Mg(OH)2 ";
			raspuns[3] += ") Ba(OH)2 ";
			raspuns[4] += ") KOH ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 74:
		{		
			intrebare = "43.Care dintre urmatorii compusi este considerat un oxihidroxid: ";
			raspuns[0] += ") NaOH ";
			raspuns[1] += ") Mg(OH)2 ";
			raspuns[2] += ") H3BO3 ";
			raspuns[3] += ") HClO ";
			raspuns[4] += ") H3PO4 ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 75:
		{
			intrebare = "44.Care pereche de elemente face parte din relatia diagonala: ";
			raspuns[0] += ") K-Mg ";
			raspuns[1] += ") Be -Al ";
			raspuns[2] += ") B -Al ";
			raspuns[3] += ") P - Se ";
			raspuns[4] += ") Se - I ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 76:
		{
			intrebare = "1.Cu care dintre urmatorii ac1z1 se combina toate elementele grupei a 4-a: ";
			raspuns[0] += ") HCI ";
			raspuns[1] += ") H2S04 ";
			raspuns[2] += ") HF ";
			raspuns[3] += ") H2C03 ";
			raspuns[4] += ") HN03 ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 77:
		{
			intrebare = "2.in urma reactiilor de hidroliza a MCl4 (M = Ti, Zr, Hf) se obtin oxihalogenuri MOCh. Care dintre aceste oxihalogenuri poate hidroliza mai departe pentru a forma oxid hidratat:";
			raspuns[0] += ") ZrOCh ";
			raspuns[1] += ") TiOCh ";
			raspuns[2] += ") HfOCh ";
			raspuns[3] += ") atat HfOCh cat si ZrOCh ";
			raspuns[4] += ") nici una dintre ele ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 78:
		{
			intrebare = "3.Cu care halogen se combina vanadiul, la temperatura ridicata, pentru a forma pentahalogenura: ";
			raspuns[0] += ") F2 ";
			raspuns[1] += ") Cb ";
			raspuns[2] += ") Br2 ";
			raspuns[3] += ") I2 ";
			raspuns[4] += ") cu nici un halogen ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 79:
		{
			intrebare = "4.Care dintre oxizii vanadiului prezinta activitate catalitica: ";
			raspuns[0] += ") VO ";
			raspuns[1] += ") V2O3 ";
			raspuns[2] += ") VO2 ";
			raspuns[3] += ") V2O5 ";
			raspuns[4] += ") nici unul dintre oxizi ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 80:
		{
			intrebare = "5.Cromul nu prezinta fenomenul de pasivare fata de: ";
			raspuns[0] += ") HN03 diluat ";
			raspuns[1] += ") HN03 concentrat ";
			raspuns[2] += ") H2S04 diluat ";
			raspuns[3] += ") H2S04 concentrat ";
			raspuns[4] += ") apa regala ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 81:
		{
			intrebare = "6.Care dintre urmatoarele afirmatii este falsa: ";
			raspuns[0] += ") ionii	CrO -	si Cr2O - contin cromul in starea de oxidare (+6) ";
			raspuns[1] += ") ambii ioni au caracter oxidant ";
			raspuns[2] += ") ionul CrO - are culoarea galbena iar Cr2O - are culoarea portocalie ";
			raspuns[3] += ") ionul CrO - este stabil in mediu acid ";
			raspuns[4] += ") ionul Cr2O - se obtine din condensarea prin varfuri a doi ioni tetraedrici CrO-, in mediu acid ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 82:
		{
			intrebare = "7.Manganul se combina la cald cu oxigenul formand: ";
			raspuns[0] += ") Mn2O3 ";
			raspuns[1] += ") Mn2O1 ";
			raspuns[2] += ") MnO ";
			raspuns[3] += ") MnO2 ";
			raspuns[4] += ") Mn3O4 ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 83:
		{
			intrebare = "8.Care dintre urmatoarele afirmatii este falsa: ";
			raspuns[0] += ") ionul MnO4 ^2- este stabil numai in mediu apos ";
			raspuns[1] += ") ionul MnO4 ^2- este verde iar ionul MnO 4 este violet ";
			raspuns[2] += ") ionul MnO4 ^- este oxidant atat in mediu acid cat si in mediu neutru sau bazic ";
			raspuns[3] += ") ionul MnO4 ^- are caracterul cel mai oxidant in mediul acid ";
			raspuns[4] += ") ionul MnO4 ^- are proprietati puternic oxidante comparativ cu ionii TcO4 ^- si ReO4 ^- ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 84:
		{
			intrebare = "9.Fierul rugineste: ";
			raspuns[0] += ") in prezenta aerului uscat ";
			raspuns[1] += ") in apa si absenta oxigenului ";
			raspuns[2] += ") la temperatura ridicata si in atmosfera inerta ";
			raspuns[3] += ") in apa si prezenta oxigenului ";
			raspuns[4] += ") in atmosfera inerta si presiune ridicata ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 85:
		{
			intrebare = "10.Ruteniul si osmiul sunt atacate de:";
			raspuns[0] += ") HCl diluat ";
			raspuns[1] += ") H2SO4 diluat ";
			raspuns[2] += ") HNO3 concentrat ";
			raspuns[3] += ") H2SO4 concentrat ";
			raspuns[4] += ") nu sunt atacate de nici un acid atat diluat cat si concentrat ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 86:
		{
			intrebare = "11.Iridiul reactioneaza cu: ";
			raspuns[0] += ") H2SO4 concentrat ";
			raspuns[1] += ") HCl concentrat ";
			raspuns[2] += ") apa regala ";
			raspuns[3] += ") topituri alcalin oxidante ";
			raspuns[4] += ") HNO3 concentrat ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 87:
		{
			intrebare = "12.O hartie imbibata cu CoCh va avea, intr-o atmosfera cu cel mai ridicat grad de umiditate, culoarea: ";
			raspuns[0] += ") roz ";
			raspuns[1] += ") rosie ";
			raspuns[2] += ") violeta ";
			raspuns[3] += ") verde ";
			raspuns[4] += ") albastra ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 88:
		{
			intrebare = "13.Un catalizator se defineste ca fiind un compus care: ";
			raspuns[0] += ") determina cresterea vitezei de reactie, consumandu-se la sfarsitul reactiei ";
			raspuns[1] += ") determina cresterea vitezei de reactie, ramanand neconsumat la sfarsitul procesului chimic ";
			raspuns[2] += ") scade viteza de reactie si se consuma la sfarsitul reactiei ";
			raspuns[3] += ") scade viteza de reactie dar nu se consuma la sfarsitul procesului chimic ";
			raspuns[4] += ") nu influenteaza viteza de reactie, jucand rol de suport pentru reactanti ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 89:
		{
			intrebare = "14.Nichelul face parte din familia fierului impreuna cu: ";
			raspuns[0] += ") Fe si Co ";
			raspuns[1] += ") Fe si Ru ";
			raspuns[2] += ") Pd si Fe ";
			raspuns[3] += ") Fe si Pt ";
			raspuns[4] += ") Os si Fe ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 90:
		{
			intrebare = "15.Nichelul prezinta fenomenul de pasivare fata de: ";
			raspuns[0] += ") HNO3 diluat ";
			raspuns[1] += ") HCl diluat ";
			raspuns[2] += ") H2SO4 concentrat ";
			raspuns[3] += ") H2SO4 diluat ";
			raspuns[4] += ") HNO3 concentrat ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 91:
		{
			intrebare = "16.Care dintre afirmatiile referitoare la proprietatile cuprului este cea falsa: ";
			raspuns[0] += ") se combina cu oxigenul la temperaturi ridicate formand CuO ";
			raspuns[1] += ") este stabil la actiunea combinata a 02 si CO2 din aerul umed ";
			raspuns[2] += ") reactioneaza cu H2SO4 concentrat ";
			raspuns[3] += ") este cel mai reactiv element din grupa 11 ";
			raspuns[4] += ") combinatiile cuprului in starea de oxidare (+2) sunt mai stabile in solutii apoase decat cele in starea de oxidare (+1) ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 92:
		{
			intrebare = "17.Care afirmatie este adevarata: ";
			raspuns[0] += ") atat Ag cat si Au se combina la cald cu sulful formand sulfurile respective ";
			raspuns[1] += ") Au este atacat de HNO3 concentrat ";
			raspuns[2] += ") Ag nu este atacat de H2SO4 concentrat ";
			raspuns[3] += ") Au nu reactioneaza cu HCl concentrat ";
			raspuns[4] += ") apa regala ataca Au dar nu ataca Ag ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 93:
		{
			intrebare = "18.Identificati afirmatia corecta: ";
			raspuns[0] += ") Hg nu reactioneaza cu HNO3 si H2SO4 concentrati deoarece este un metal situat dupa hidrogen in seria activitatii metalelor ";
			raspuns[1] += ") Cd nu se poate combina cu sulful nici chiar la temperaturi ridicate deoarece este mai putin reactiv decat Zn ";
			raspuns[2] += ") Zn reactioneaza cu hidroxizii alcalini eliberand H2 deoarece prezinta caracter amfoter ";
			raspuns[3] += ") Hg nu poate forma compusi in starea de oxidare (+1) deoarece este ultimul element din grupa 12 ";
			raspuns[4] += ") Cd degaja H2 in reactia cu hidroxizii alcalini deoarece prezinta caracter amfoter ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 94:
		{
			intrebare = "19.Care dintre urmatoarele afirmatii nu este corecta: ";
			raspuns[0] += ") electronii necuplati situati in substratul 4f sunt mai bine ecranati fata de campurile exterioare ale liganzilor comparativ cu electronii necuplati din substratul Sf ";
			raspuns[1] += ") spectrele de absorbtie ale compusilor lantanidelor sunt asemanatoare indiferent de natura ligandului, fiind aceleasi atat in stare solida cat si lichida ";
			raspuns[2] += ") spectrele de absorbtie ale compusilor actinidelor sunt asemanatoare indiferent de natura ligandului deoarece orbitalii Sf patrund mai adanc in atom comparativ cu orbitalii 4f ";
			raspuns[3] += ") ionii trivalenti de lantanide cu n sau 14-n electroni in substratul 4f au aceeasi culoare ";
			raspuns[4] += ") orbitalii 4f in cazul lantanidelor nu participa la formarea de legaturi covalente in timp ce orbitalii Sf ai actinidelor participa intr-o oarecare masura la formarea de legaturi covalente ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 95:
		{
			intrebare = "20.Se produce fenomenul de fluorescenta daca: ";
			raspuns[0] += ") nivelul energetic excitat este mai mic decat nivelul energetic corespunzator pierderii de caldura in exterior ";
			raspuns[1] += ") electronii aflati pe nivelul energetic excitat revin pe nivelul energetic de baza (fundamental) emitand fotoni cu aceeasi lungime de unda cu cea a luminii absorbite ";
			raspuns[2] += ") se produce o tranzitie interna cu emisie de fotoni intre doua nivele energetice excitate ";
			raspuns[3] += ") daca se produce o tranzitie interna, fara emisie de fotoni intre doua nivele energetice excitate, urmata de o revenire a electronilor pe nivelul energetic de baza cu em1s1e de fotoni cu alta lungime de unda decat cea a luminii absorbite";
			raspuns[4] += ") daca timpul de viata al electronilor pe un nivel energetic este foarte mic (de ordinul nanosecundelor) ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 96:
		{
			intrebare = "21.in cromatografia cu schimbatori de ioni va fi eluat primul ionul de lantanid care: ";
			raspuns[0] += ") are raza cationului nehidratat cea mai mica ";
			raspuns[1] += ") are raza cationului nehidratat cea mai mare ";
			raspuns[2] += ") are raza cationului hidratat cea mai mica ";
			raspuns[3] += ") formeaza cu eluantul complexul cel mai putin stabil ";
			raspuns[4] += ") elutia se realizeaza la intamplare deoarece nu depinde de raza cationului de lantanid ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 97:
		{
			intrebare = "22.Completa separare a ceriului de celelalte lantanide se realizeaza prin: ";
			raspuns[0] += ") evaporare ";
			raspuns[1] += ") schimbarea valentei urmata de precipitarea selectiva a Ce(OH)4 ";
			raspuns[2] += ") extractie cu solventi ";
			raspuns[3] += ") cromatografie cu schimbatori de ioni ";
			raspuns[4] += ") centrifugare ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 98:
		{
			intrebare = "23.Dintre izotopii uraniului, cel care sufera reactii de fisiune nucleara este: ";
			raspuns[0] += ") 238U ";
			raspuns[1] += ") 239U ";
			raspuns[2] += ") 235U ";
			raspuns[3] += ") 239U ";
			raspuns[4] += ") nici unul dintre izotopii mentionati ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 99:
		{
			intrebare = "24.Moderatorii existenti intr-un reactor nuclear au rolul: ";
			raspuns[0] += ") de a respinge neutroni ";
			raspuns[1] += ") de a mari viteza neutronilor ";
			raspuns[2] += ") de a frana viteza neutronilor prm c10cmn plastice ";
			raspuns[3] += ") de a frana viteza neutronilor pnn c10cmn elastice ";
			raspuns[4] += ") de a transforma neutronii rapizi in neutroni lenti ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 100:
		{
			intrebare = "25.Care dintre urmatoarele afirmatii referitoare la proprietatile chimice ale metalelor din grupa a 3-a este falsa: ";
			raspuns[0] += ") sunt metale electropozitive si reactive ";
			raspuns[1] += ") oxizii lor au caldurile de formare dintre cele mai man ";
			raspuns[2] += ") se dizolva in acizi diluati cu degajare de H2 ";
			raspuns[3] += ") se combina la temperaturi ridicate cu azotul, sulful, fosforul si oxigenul ";
			raspuns[4] += ") se dizolva in solutii concentrate de alcalii ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 101:
		{
			intrebare = "26.Uraniul reactioneaza usor cu oxigenul, la 150 grade C, formand:";
			raspuns[0] += ") UO2 ";
			raspuns[1] += ") UO3 ";
			raspuns[2] += ") U3O5 ";
			raspuns[3] += ") UO4 ";
			raspuns[4] += ") UO ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 102:
		{
			intrebare = "27.Care afirmatie este falsa: ";
			raspuns[0] += ") razele a sunt nuclee de heliu dublu ionizate care au viteze mari date de energia lor cinetica ";
			raspuns[1] += ") radiatiile  pot fi electronice sau pozitronice ";
			raspuns[2] += ") radiatiile y sunt de natura electromagnetica si produc ionizarea gazelor prin care trec ";
			raspuns[3] += ") radiatiile y au energia data de relatia hv ";
			raspuns[4] += ") radiatiile au energii cuprinse intr-un interval larg de valori ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 103:
		{
			intrebare = "28.Dezintegrarea unui nucleu prin captura K se realizeaza prin absorbtia de catre un nucleu parinte a: ";
			raspuns[0] += ") doi electroni din stratul L ";
			raspuns[1] += ") unui electron din primul strat ";
			raspuns[2] += ") doi electroni din primul strat ";
			raspuns[3] += ") doi electroni din stratul M ";
			raspuns[4] += ") alt raspuns ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 104:
		{
			intrebare = "29.Care dintre seriile radioactive este considerata artificiala: ";
			raspuns[0] += ") 4n ";
			raspuns[1] += ") 4n + 1 ";
			raspuns[2] += ") 4n + 5 ";
			raspuns[3] += ") 4n + 2 ";
			raspuns[4] += ") 4n + 3 ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 105:
		{
			intrebare = "30.Prin timp de injumatatire se intelege perioada de timp dupa care: ";
			raspuns[0] += ") jumatate	din atomii unui radionuclid	se dezintegreaza ";
			raspuns[1] += ") atomii unui radionuclid se dubleaza ca numar ";
			raspuns[2] += ") atomii unui radionuclid se tripleaza ";
			raspuns[3] += ") un sfert din atomii	unui radionuclid se dezintegreaza ";
			raspuns[4] += ") alt raspuns ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 106:
		{
			intrebare = "1.Un defect Schottky este: ";
			raspuns[0] += ") o vacanta intr-o retea altfel perfecta ";
			raspuns[1] += ") deplasarea unui atom sau a unui ion intr-o pozitie interstitiala ";
			raspuns[2] += ") identic cu defectul Frenkel";
			raspuns[3] += ") identic cu interschimbul ionic ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 107:
		{
			intrebare = "2.Tranzitiile ordine-dezordine sunt in general asociate cu: ";
			raspuns[0] += ") dezordonari pozitionale ";
			raspuns[1] += ") dezordonari orientationale ";
			raspuns[2] += ") dezordonari ale starilor spinului electronic sau nuclear ";
			raspuns[3] += ") a), b) si c) ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 108:
		{
			intrebare = "3.Efectul Meissner este: ";
			raspuns[0] += ") respingerea campului magnetic aplicat unei probe supraconductoare ";
			raspuns[1] += ") pierderea progresiva a supraconductivitatii peste o valoare a campului magnetic aplicat probei ";
			raspuns[2] += ") cresterea progresiva a supraconductivitatii peste o valoare a campului magnetic aplicat probei ";
			raspuns[3] += ") respingerea campului magnetic aplicat unei probe semiconductoare ";
			raspuns[4] += ") altceva ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 109:
		{
			intrebare = "4.pereche Cooper se refera la: ";
			raspuns[0] += ") o pereche de atomi ";
			raspuns[1] += ") o pereche de anioni ";
			raspuns[2] += ") o pereche de cationi ";
			raspuns[3] += ") o pereche de electroni ";
			raspuns[4] += ") altceva ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 110:
		{
			intrebare = "5.Un feromagnet tare: ";
			raspuns[0] += ") are curba de histerezis ingusta ";
			raspuns[1] += ") are curba de histerezis larga ";
			raspuns[2] += ") nu prezinta fenomenul de histerezis ";
			raspuns[3] += ") are magnetizarea liniara ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 111:
		{
			intrebare = "6.Temperatura peste care dispare feromagnetismul se numeste: ";
			raspuns[0] += ") temperatura Neel ";
			raspuns[1] += ") temperatura Curie ";
			raspuns[2] += ") temperatura absoluta ";
			raspuns[3] += ") temperatura	critica	de supraconductoare ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 112:
		{
			intrebare = "7.Difractia cu neutroni este un instrument major de studiu al proprietatilor magnetice a materialelor deoarece: ";
			raspuns[0] += ") neutronii pot interactiona din cauza spinului lor doar cu spinul electronilor impari ";
			raspuns[1] += ") neutronii pot interactiona din cauza spinului lor doar cu spinurile nucleelor ";
			raspuns[2] += ") neutronii nu pot interactiona cu spinul electronilor impari si cu cel al nucleelor";
			raspuns[3] += ") neutronii pot interactiona din cauza spinului lor atat cu spinul electronilor impari cat si cu spinurile nucleelor ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 113:
		{
			intrebare = "8.Defectele extrinseci: ";
			raspuns[0] += ") apar in substantele pure ";
			raspuns[1] += ") apar in substantele impure ";
			raspuns[2] += ") nu apar niciodata ";
			raspuns[3] += ") sunt identice cu defectele intrinseci ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 114:
		{
			intrebare = "9.Caracterul metalic a unor oxizi tranzitionali apare atunci cand: ";
			raspuns[0] += ") suprapunerea dintre orbitalii de valenta ai atomilor constituenti este mare ";
			raspuns[1] += ") suprapunerea dintre orbitalii de valenta ai	atomilor constituenti nu este mare ";
			raspuns[2] += ") suprapunerea dintre orbitalii de valenta ai	atomilor constituenti este minima ";
			raspuns[3] += ") suprapunerea dintre orbitalii de valenta ai	atomilor constituenti este zero ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 115:
		{
			intrebare = "Supraconductorii de tipul I: ";
			raspuns[0] += ") prezinta o pierdere brusca a supraconductivitatii cand nu li se aplica un camp magnetic ";
			raspuns[1] += ") nu prezinta pierderea supraconductivitatii cand li se aplica un camp magnetic care depaseste valoarea critica ";
			raspuns[2] += ") prezinta o pierdere progresiva a supraconductivitatii peste o valoare a campului magnetic aplicat ";
			raspuns[3] += ") prezinta o pierdere progresiva a supraconductivitatii peste o valoare a campului aplicat care variaza de la o substanta la alta ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[4][0];
			break; 
		}
		case 116:
		{
			intrebare = "11.Modelul Little de	explicare a supraconductivitatii in compusii organici: ";
			raspuns[0] += ") explica formarea de perechi Cooper ";
			raspuns[1] += ") nu explica formarea de perechi Cooper ";
			raspuns[2] += ") explica aparitia practica a fenomenului la temperatura camerei ";
			raspuns[3] += ") explica aparitia fenomenului prin deformatiile retelei cristaline ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 117:
		{
			intrebare = "12.Caracteristica comuna a electrolitilor solizi o reprezinta: ";
			raspuns[0] += ") concentratia mare de ioni mobili si vacante ";
			raspuns[1] += ") concentratia mica de ioni mobili si vacante ";
			raspuns[2] += ") lipsa de ioni mobili si vacante ";
			raspuns[3] += ") concentratia mare de ioni mobili si vacante, cat si existenta caii dintre vacante care permite miscare ionilor cu o energie de activare joasa ";
			raspuns[4] += ") nici un raspuns nu este corect";
			raspunsCorect = raspuns[3][0];
			break;
		}
		case 118:
		{
			intrebare = "13.Stabilitatea complecsilor ciclopentadienilici cu metale din grupa a 8-a se datoreaza: ";
			raspuns[0] += ") structurii de 18 electroni  ";
			raspuns[1] += ") legaturilor M-M ";
			raspuns[2] += ") ciclurilor pentadienilice  ";
			raspuns[3] += ") structurii electronice a metalelor ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 119:
		{
			intrebare = "14.Prin definitie	un compus organo-metalic contine: ";
			raspuns[0] += ") un ligand organic in molecula ";
			raspuns[1] += ") un ligand organic si legaturi M-M ";
			raspuns[2] += ") cel putin o legatura M-C ";
			raspuns[3] += ") legaturi M-M ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 120:
		{
			intrebare = "15.Una din metodele de obtinere a carbonililor metalici o reprezinta: ";
			raspuns[0] += ") tratarea unei sarii a metalului cu carbonati ai metalelor active ";
			raspuns[1] += ") combinarea directa a CO cu metalul respectiv in stare fin divizata ";
			raspuns[2] += ") descompunerea formiatilor metalelor respective ";
			raspuns[3] += ") descompunerea oxalatilor metalelor respective ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 121:
		{
			intrebare = "16.Radicalul alil poate functiona ca donor de: ";
			raspuns[0] += ") doi electroni ";
			raspuns[1] += ") un electron sau trei electroni ";
			raspuns[2] += ") patru electroni ";
			raspuns[3] += ") mai mult de patru electroni ";
			raspuns[4] += ") este pi - acceptor ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 122:
		{
			intrebare = "17.Compusii metal-alchilici sunt relativ instabili deoarece: ";
			raspuns[0] += ") in acest caz legatura M-C este slaba ";
			raspuns[1] += ") radicalul alchil este un compus saturat ";
			raspuns[2] += ") radicalul alchil este atragator de electroni ";
			raspuns[3] += ") carbonul este hibridizat sp3 in acesti radicali ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 123:
		{
			intrebare = "18.Interactiunea agostica la formarea unui compus alchilic sau eliminarea hidrogenului dintr-un astfel de compus, consta in : ";
			raspuns[0] += ") eliminarea unui proton H+ ";
			raspuns[1] += ") formarea unui intermediar ciclic care contine o legatura de trei centre M-H-C ";
			raspuns[2] += ") eliminarea ionului hidrura H- ";
			raspuns[3] += ") a) si b) ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 124:
		{
			intrebare = "19.Carbonilarea reductiva consta in: ";
			raspuns[0] += ") tratarea unei sari metalice cu CO2 ";
			raspuns[1] += ") descompunerea carbonatilor metalelor respective ";
			raspuns[2] += ") reducerea unui compus, sare sau complex al metalului in prezenta CO ";
			raspuns[3] += ") reducerea monoxidului de carbon la carbon elementar ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[2][0];
			break;
		}
		case 125:
		{
			intrebare = "20.Hidrurile carbonililor simpli se obtin prin: ";
			raspuns[0] += ") tratarea	acestora	cu acizi concentrati	in atmosfera inerta ";
			raspuns[1] += ") tratare cu acizi concentrati	in atmosfera oxidanta ";
			raspuns[2] += ") tratare cu baze concentrate in atmosfera inerta ";
			raspuns[3] += ") tratare cu baze concentrate in atmosfera oxidanta ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 126:
		{
			intrebare = "21.Fluxionalitatea este proprietatea metalului dintr-un compus organometalic: ";
			raspuns[0] += ") de a se deplasa in jurul unui ciclu cu legaturi duble conjugate la fiecare atom de carbon ";
			raspuns[1] += ") de a se deplasa de la un ciclu cu legaturi duble conjugate la altul ";
			raspuns[2] += ") de a nu se deplasa de la un ciclu cu legaturi duble conjugate la altul ";
			raspuns[3] += ") de a cobori punctul de topire al compusului ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 127:
		{
			intrebare = "22.Introducerea unor liganzi polienici ciclici neutri in sfera de coordinare a unui metal se poate realiza prin: ";
			raspuns[0] += ") activarea fotochimica a carbonililor metalici ";
			raspuns[1] += ") activarea termica a carbonililor metalici ";
			raspuns[2] += ") activarea fotochimica si termica a carbonililor metalici ";
			raspuns[3] += ") activarea fotochimica sau termica a carbonatilor metalici ";
			raspuns[4] += ") activarea fotochimica sau termica a carbonililor metalici ";
			raspunsCorect = raspuns[4][0];
			break;
		}
		case 128:
		{
			intrebare = "23.Toti carbonilii metalici sunt: ";
			raspuns[0] += ") toxici si volatili ";
			raspuns[1] += ") solizi in conditii normale de temperatura si presiune ";
			raspuns[2] += ") lichizi in conditii normale de temperatura si presiune ";
			raspuns[3] += ") gazosi in conditii normale de temperatura si presiune ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
			break;
		}
		case 129:
		{
			intrebare = "24.Carbonilii metalici: ";
			raspuns[0] += ") se preteaza oxidarii gruparilor CO la CO2 fara descompunere ";
			raspuns[1] += ") se preteaza substitutiei gruparilor carbonilice cu liganzi diferiti ";
			raspuns[2] += ") nu	se	preteaza	substitutiei	gruparilor carbonilice cu liganzi diferiti ";
			raspuns[3] += ") nu pot fi redusi la anionii corespunzatori ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[1][0];
			break;
		}
		case 130:
		{
			intrebare = "25.La formarea legaturii in compusii metal- alchenici participa: ";
			raspuns[0] += ") doi electroni din orbitalul n de la ligand ";
			raspuns[1] += ") doi electroni din orbitalul n de la metal ";
			raspuns[2] += ") trei electroni din orbitalul n de la metal ";
			raspuns[3] += ") a) si b) ";
			raspuns[4] += ") nici un raspuns nu este corect ";
			raspunsCorect = raspuns[0][0];
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
	int b[5] = { 0, 1,2,3,4 };
	random_shuffle(std::begin(b), std::end(b));
	cout << intrebare << "\n";
	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		while (raspuns[b[j]][0] != (char(i + 97)))
		{
			j++;
		}
		
		cout << raspuns[b[j]] << "\n";
		j = 0;
	}
}
