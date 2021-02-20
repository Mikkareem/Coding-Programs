#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int q = 0, number_of_pairs_qa = 0;
	int ans = 0;
	for(char c: s) {
		if(c == 'Q') {
			ans += number_of_pairs_qa;
			q++;
		}
		else if(c == 'A') number_of_pairs_qa += q;
	}
	
	cout << ans; 
}

int main()
{
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}

//123456
//QAQAQQ

//123
//125
//145
//146
//345
//346

//Q-3
//A-2

//NEXT_A -> A++
//NEXT_Q -> 2*2 = 4, Q++

//NEXT_Q -> 3*2 = 6

//12345
//QAQQQ

//123
//124
//125

//Q-1, 2, 3
//A-1

//NEXT_Q -> 1*1 = 1, Q++
//NEXT_Q -> 2*1 = 2, Q++
//NEXT_Q -> 3*1 = 3, Q++


//0123456789
//QAQQAQAAAQ


//IF A -> HOW MANY 'QA' PAIRS FORMED UPTO THAT POINT

//012
//013
//015
//019
//045
//049
//069
//079
//089

//245
//249
//269
//279
//289

//345
//349
//369
//379
//389

//569
//579
//589



//abcdefghijklmnopqr
//QAQQAQAAAQAQQQAQAQ -> 72

//Q=1,2,3,4,5,6,7,8,9
//A=1,2,3,4,5,6,7,8

//I = 3 -> ANS = 1*1 = 1
//I = 4 -> ANS = 2*1 = 2
//I = 5 -> A++
//I = 6 -> ANS = 3*2 = 6
//I = 7 -> A++
//I = 8 -> A++
//I = 9 -> A++
//I = 10 -> ANS = 4*5 = 20
//I = 11 -> A++
//I = 12 -> ANS = 5*6 = 30
//I = 13 -> ANS = 6*6 = 36
//I = 14 -> ANS = 7*6 = 42
//I = 15 -> A++
//I = 16 -> ANS = 8*7 = 56
//I = 17 -> A++
//I = 18 -> ANS = 9*8 = 72




//abc
//abd
//abf
//abj
//abl
//abm
//abn
//abp
//abr
//aef
//aej
//ael
//aem
//aen
//aep
//aer
//agj
//agl
//agm
//agn
//agp
//agr
//ahj
//ahl
//ahm
//ahn
//ahp
//ahr
//aij
//ail
//aim
//ain
//aip
//air
//akl
//akm
//akn
//akp
//akr
//aop
//aor
//aqr
//42 + 110 = 152
//abcdefghijklmnopqr
//QAQQAQAAAQAQQQAQAQ -> 72

//cef
//cej
//cel
//cem
//cen
//cep
//cer
//cgj
//cgl
//cgm
//cgn
//cgp
//cgr
//chj
//chl
//chm
//chn
//chp
//chr
//cij
//cil
//cim
//cin
//cip
//cir
//ckl
//ckm
//ckn
//ckp
//ckr
//cop
//cor
//cqr
//33 + 77 = 110

//abcdefghijklmnopqr
//QAQQAQAAAQAQQQAQAQ -> 72

//def
//dej
//del
//dem
//den
//dep
//der
//dgj
//dgl
//dgm
//dgn
//dgp
//dgr
//dhj
//dhl
//dhm
//dhn
//dhp
//dhr
//dij
//dil
//dim
//din
//dip
//dir
//dkl
//dkm
//dkn
//dkp
//dkr
//dop
//dor
//dqr
//33 + 44 = 77

//abcdefghijklmnopqr
//QAQQAQAAAQAQQQAQAQ -> 72

//fgj
//fgl
//fgm
//fgn
//fgp
//fgr
//fhj
//fhl
//fhm
//fhn
//fhp
//fhr
//fij
//fil
//fim
//fin
//fip
//fir
//fkl
//fkm
//fkn
//fkp
//fkr
//fop
//for
//fqr
//26 + 18 = 44

//abcdefghijklmnopqr
//QAQQAQAAAQAQQQAQAQ -> 72

//jkl
//jkm
//jkn
//jkp
//jkr
//jop
//jor
//jqr

//lop
//lor
//lqr

//mop
//mor
//mqr

//nop
//nor
//nqr

//pqr
//18
