#pragma once
#include <Arduino.h>
// TODO - make fsinf faster

const float fsinLUT[628] PROGMEM = {0.0003980891614599929,0.0028993531461428425,0.0054005989914908984,0.007901811048863411,0.010402973669831023,0.012904071206273663,0.01540508801047845,0.017906008435237597,0.0204068168339463,0.022907497560700613,0.02540803497039537,0.027908413418822026,0.03040861726276657,0.03290863086010737,0.03540843856991301,0.03790802475254024,0.040407373769731705,0.042906469984713855,0.04540529776229475,0.0479038414689619,0.05040208547298006,0.05290001414448899,0.05539761185560132,0.05789486298050027,0.060391751895537395,0.0628882629793304,
0.0653843806128608,0.06788008917957164,0.0703753730654653,0.07287021665920108,0.07536460435219283,0.07785852053870677,0.08035194961595897,0.08284487598421302,0.08533728404687763,0.0878291582106042,0.09032048288538444,0.09281124248464778,0.09530142142535894,0.0977910041281155,0.10027997501724532,0.10276831852090386,0.10525601907117185,0.10774306110415245,0.11022942906006876,0.11271510738336121,0.11520008052278467,0.117684332931506,0.12016784906720109,0.12265061339215229,0.1251326103733455,0.12761382448256736,
0.1300942401965025,0.13257384199683042,0.13505261437032293,0.13753054180894092,0.14000760880993143,0.14248379987592483,0.14495909951503153,0.14743349224093896,0.14990696257300862,0.15237949503637283,0.1548510741620314,0.15732168448694864,0.15979131055415,0.1622599369128188,0.16472754811839277,0.1671941287326609,0.16965966332385984,0.17212413646677058,0.1745875327428148,0.1770498367401515,0.17951103305377328,0.18197110628560287,0.1844300410445893,0.18688782194680423,0.18934443361553843,0.19179986068139762,
0.19425408778239883,0.1967070995640665,0.19915888067952855,0.20160941578961225,0.20405868956294043,0.20650668667602723,0.20895339181337397,0.21139878966756503,0.2138428649393636,0.2162856023378074,0.21872698658030434,0.22116700239272813,0.22360563450951382,0.2260428676737533,0.2284786866372909,0.23091307616081852,0.23334602101397134,0.23577750597542255,0.23820751583297917,0.24063603538367692,0.2430630494338754,0.24548854279935312,0.24791250030540235,0.25033490678692455,0.2527557470885245,0.25517500606460597,
0.2575926685794657,0.2600087195073885,0.262423143732742,0.26483592615007084,0.26724705166419144,0.2696565051902863,0.27206427165399855,0.274470335991526,0.27687468314971575,0.279277298086158,0.28167816576928034,0.28407727117844184,0.2864745993040268,0.28887013514753895,0.29126386372169516,0.29365577005051907,0.2960458391694349,0.2984340561253613,0.3008204059768044,0.3032048737939516,0.30558744465876525,0.3079681036650752,0.31034683591867307,0.3127236265374044,0.31509846065126257,0.3174713234024813,
0.3198421999456281,0.32221107544769667,0.32457793508819976,0.3269427640592625,0.32930554756571406,0.331666270825181,0.33402491906817955,0.3363814775382078,0.33873593149183806,0.3410882661988095,0.34343846694211977,0.34578651901811747,0.34813240773659393,0.3504761184208752,0.35281763640791375,0.35515694704838047,0.357494035706756,0.3598288877614225,0.3621614886047553,0.3644918236432136,0.3668198782974327,0.36914563800231454,0.371469088207119,0.37379021437555515,0.3761090019858719,0.3784254365309489,
0.3807395035183875,0.3830511884706013,0.38536047692490666,0.38766735443361316,0.3899718065641143,0.3922738188989773,0.39457337703603373,0.3968704665884695,0.3991650731849147,0.4014571824695336,0.40374678010211473,0.40603385175816015,0.40831838312897517,0.4106003599217584,0.4128797678596904,0.4151565926820234,0.4174308201441707,0.4197024360177953,0.42197142609089927,0.42423777616791275,0.42650147206978223,0.42876249963406005,0.43102084471499214,0.4332764931836073,0.435529430927805,0.4377796438524441,
0.4400271178794308,0.4422718389478067,0.4445137930138369,0.4467529660510979,0.448989344050565,0.45122291302070056,0.4534536589875408,0.45568156799478376,0.45790662610387667,0.46012881939410255,0.46234813396266805,0.4645645559247899,0.4667780714137819,0.46898866658114197,0.47119632759663826,0.47340104064839617,0.4756027919429845,0.4778015677055017,0.47999735417966227,0.48219013762788293,0.4843799043313678,0.4865666405901952,0.48875033272340285,0.4909309670690735,0.4931085299844206,0.4952830078458732,
0.49745438704916184,0.4996226540094029,0.5017877951611845,0.5039497969586506,0.5061086458755859,0.5082643284055011,0.5104168310617161,0.5125661403774459,0.5147122429058836,0.5168551252202854,0.5189947739140542,0.5211311756008233,0.5232643169145407,0.5253941845095519,0.5275207650606843,0.5296440452633303,0.53176401183353,0.5338806515080549,0.5359939510444905,0.5381038972213198,0.5402104768380049,0.5423136767150709,0.5444134836941873,0.5465098846382507,0.5486028664314669,0.5506924159794336,
0.5527785202092215,0.554861166069456,0.5569403405304,0.5590160305840337,0.5610882232441379,0.5631569055463735,0.5652220645483639,0.5672836873297753,0.5693417609923975,0.5713962726602252,0.5734472094795376,0.5754945586189798,0.5775383072696425,0.5795784426451422,0.5816149519817017,0.5836478225382286,0.5856770415963969,0.5877025964607252,0.5897244744586564,0.5917426629406375,0.5937571492801978,0.5957679208740293,0.5977749651420639,0.5997782695275531,0.6017778214971468,0.6037736085409706,
0.6057656181727056,0.6077538379296648,0.6097382553728725,0.6117188580871414,0.6136956336811503,0.615668569787522,0.6176376540629005,0.6196028741880276,0.6215642178678212,0.6235216728314511,0.6254752268324165,0.6274248676486223,0.6293705830824555,0.6313123609608616,0.6332501891354209,0.6351840554824242,0.6371139479029491,0.6390398543229352,0.6409617626932602,0.6428796609898144,0.644793537213577,0.6467033793906904,0.6486091755725354,0.6505109138358061,0.6524085822825837,0.6543021690404124,
0.6561916622623721,0.6580770501271538,0.6599583208391326,0.6618354626284422,0.6637084637510481,0.665577312488821,0.6674419971496107,0.6693025060673188,0.6711588276019715,0.673010950139793,0.6748588620932777,0.6767025519012627,0.6785420080290006,0.680377218968231,0.682208173237253,0.6840348593809971,0.6858572659710962,0.6876753816059578,0.6894891949108349,0.6912986945378977,0.6931038691663036,0.6949047075022693,0.6967011982791406,0.6984933302574626,0.7002810922250514,0.7020644729970628,
0.7038434614160628,0.7056180463520979,0.7073882167027638,0.7091539613932756,0.7109152693765367,0.7126721296332083,0.7144245311717775,0.7161724630286274,0.7179159142681044,0.7196548739825874,0.7213893312925558,0.7231192753466574,0.7248446953217766,0.7265655804231019,0.7282819198841938,0.7299937029670512,0.7317009189621798,0.7334035571886586,0.7351016069942061,0.7367950577552481,0.7384838988769835,0.7401681197934502,0.7418477099675923,0.7435226588913246,0.7451929560856002,0.7468585911004741,
0.74851955351517,0.7501758329381444,0.7518274190071527,0.7534743013893134,0.7551164697811727,0.7567539139087696,0.7583866235276988,0.7600145884231764,0.7616377984101029,0.7632562433331272,0.7648699130667098,0.7664787975151869,0.7680828866128323,0.769682170323922,0.7712766386427954,0.772866281593919,0.7744510892319485,0.7760310516417906,0.7776061589386658,0.7791764012681694,0.7807417688063342,0.7823022517596905,0.783857840365329,0.7854085248909607,0.7869542956349782,0.7884951429265165,
0.7900310571255131,0.7915620286227693,0.7930880478400086,0.7946091052299386,0.7961251912763091,0.7976362964939727,0.7991424114289434,0.8006435266584566,0.802139632791027,0.8036307204665083,0.8051167803561513,0.8065978031626619,0.8080737796202606,0.8095447004947385,0.8110105565835171,0.8124713387157041,0.8139270377521522,0.8153776445855153,0.8168231501403062,0.8182635453729524,0.8196988212718541,0.8211289688574394,0.8225539791822205,0.8239738433308508,0.8253885524201792,0.8267980975993069,
0.828202470049642,0.8296016609849552,0.8309956616514342,0.832384463327739,0.833768057325056,0.835146434987153,0.8365195876904326,0.8378875068439865,0.8392501838896497,0.8406076103020531,0.8419597775886776,0.8433066772899069,0.8446483009790806,0.8459846402625464,0.8473156867797138,0.8486414322031047,0.8499618682384075,0.8512769866245269,0.8525867791336371,0.8538912375712332,0.855190353776181,0.8564841196207703,0.8577725270107637,0.8590555678854485,0.8603332342176864,0.8616055180139647,
0.8628724113144449,0.8641339061930139,0.8653899947573326,0.8666406691488856,0.8678859215430308,0.8691257441490473,0.8703601292101856,0.8715890690037144,0.8728125558409707,0.8740305820674066,0.8752431400626376,0.8764502222404904,0.8776518210490502,0.8788479289707082,0.8800385385222083,0.8812236422546941,0.8824032327537553,0.8835773026394748,0.8847458445664734,0.8859088512239578,0.8870663153357643,0.8882182296604056,0.8893645869911159,0.8905053801558953,0.8916406020175559,0.8927702454737653,
0.8938943034570918,0.8950127689350478,0.896125634910135,0.8972328944198867,0.8983345405369131,0.8994305663689427,0.9005209650588671,0.9016057297847829,0.9026848537600348,0.9037583302332579,0.9048261524884198,0.9058883138448632,0.906944807657347,0.9079956273160882,0.9090407662468033,0.9100802179107496,0.911113975804765,0.912142033461311,0.9131643844485102,0.9141810223701891,0.9151919408659164,0.9161971336110438,0.9171965943167456,0.9181903167300568,0.9191782946339139,0.9201605218471924,
0.9211369922247468,0.9221076996574472,0.92307263807222,0.9240318014320833,0.9249851837361865,0.9259327790198475,0.9268745813545889,0.9278105848481769,0.9287407836446564,0.9296651719243892,0.9305837439040892,0.931496493836859,0.932403416012226,0.9333045047561782,0.9341997544311994,0.9350891594363043,0.9359727142070745,0.9368504132156921,0.9377222509709747,0.9385882220184104,0.9394483209401913,0.940302542355247,0.9411508809192796,0.9419933313247956,0.9428298883011399,0.9436605466145292,
0.9444853010680837,0.9453041465018606,0.9461170777928852,0.9469240898551845,0.9477251776398177,0.9485203361349085,0.9493095603656762,0.9500928453944666,0.9508701863207838,0.9516415782813193,0.9524070164499844,0.9531664960379385,0.9539200122936201,0.9546675605027767,0.9554091359884934,0.956144734111223,0.9568743502688147,0.9575979798965427,0.9583156184671352,0.9590272614908022,0.9597329045152642,0.9604325431257794,0.961126172945172,0.9618137896338589,0.9624953888898773,0.9631709664489116,
0.9638405180843199,0.9645040396071604,0.9651615268662179,0.9658129757480295,0.9664583821769106,0.9670977421149798,0.9677310515621852,0.9683583065563283,0.9689795031730896,0.9695946375260527,0.970203705766729,0.9708067040845813,0.971403628707048,0.9719944758995664,0.9725792419655969,0.9731579232466446,0.9737305161222837,0.9742970170101792,0.9748574223661101,0.9754117286839903,0.9759599324958922,0.9765020303720671,0.977038018920967,0.9775678947892662,0.978091654661882,0.9786092952619951,
0.9791208133510709,0.9796262057288789,0.9801254692335135,0.9806186007414129,0.9811055971673798,0.9815864554645993,0.9820611726246594,0.9825297456775688,0.9829921716917758,0.9834484477741867,0.983898571070184,0.9843425387636437,0.9847803480769539,0.9852119962710312,0.9856374806453384,0.9860567985379012,0.9864699473253249,0.9868769244228108,0.9872777272841725,0.9876723534018516,0.9880608003069334,0.9884430655691627,0.9888191467969585,0.9891890416374295,0.9895527477763881,0.9899102629383657,
0.9902615848866265,0.9906067114231814,0.990945640388802,0.9912783696630337,0.9916048971642099,0.9919252208494637,0.9922393387147418,0.9925472487948166,0.9928489491632982,0.9931444379326472,0.9934337132541856,0.9937167733181093,0.9939936163534985,0.9942642406283295,0.9945286444494852,0.9947868261627659,0.9950387841528995,0.9952845168435511,0.9955240226973343,0.995757300215819,0.9959843479395423,0.9962051644480167,0.9964197483597393,0.9966280983322008,0.9968302130618928,0.9970260912843175,
0.9972157317739943,0.997399133344468,0.9975762948483163,0.9977472151771571,0.9979118932616547,0.9980703280715274,0.9982225186155533,0.998368463941577,0.9985081631365148,0.9986416153263616,0.9987688196761952,0.9988897753901821,0.9990044817115824,0.9991129379227545,0.9992151433451596,0.9993110973393662,0.9994007993050533,0.9994842486810154,0.9995614449451646,0.9996323876145352,0.9996970762452857,0.9997555104327022,0.9998076898112005,0.9998536140543289,0.9998932828747699,0.9999266960243416,
0.9999538532940003,0.9999747545138408,0.999989399553098,0.9999977883201476};

const double dsinLUT[628] PROGMEM = {0.0003980891614599929,0.0028993531461428425,0.0054005989914908984,0.007901811048863411,0.010402973669831023,0.012904071206273663,0.01540508801047845,0.017906008435237597,0.0204068168339463,0.022907497560700613,0.02540803497039537,0.027908413418822026,0.03040861726276657,0.03290863086010737,0.03540843856991301,0.03790802475254024,0.040407373769731705,0.042906469984713855,0.04540529776229475,0.0479038414689619,0.05040208547298006,0.05290001414448899,0.05539761185560132,0.05789486298050027,0.060391751895537395,0.0628882629793304,
0.0653843806128608,0.06788008917957164,0.0703753730654653,0.07287021665920108,0.07536460435219283,0.07785852053870677,0.08035194961595897,0.08284487598421302,0.08533728404687763,0.0878291582106042,0.09032048288538444,0.09281124248464778,0.09530142142535894,0.0977910041281155,0.10027997501724532,0.10276831852090386,0.10525601907117185,0.10774306110415245,0.11022942906006876,0.11271510738336121,0.11520008052278467,0.117684332931506,0.12016784906720109,0.12265061339215229,0.1251326103733455,0.12761382448256736,
0.1300942401965025,0.13257384199683042,0.13505261437032293,0.13753054180894092,0.14000760880993143,0.14248379987592483,0.14495909951503153,0.14743349224093896,0.14990696257300862,0.15237949503637283,0.1548510741620314,0.15732168448694864,0.15979131055415,0.1622599369128188,0.16472754811839277,0.1671941287326609,0.16965966332385984,0.17212413646677058,0.1745875327428148,0.1770498367401515,0.17951103305377328,0.18197110628560287,0.1844300410445893,0.18688782194680423,0.18934443361553843,0.19179986068139762,
0.19425408778239883,0.1967070995640665,0.19915888067952855,0.20160941578961225,0.20405868956294043,0.20650668667602723,0.20895339181337397,0.21139878966756503,0.2138428649393636,0.2162856023378074,0.21872698658030434,0.22116700239272813,0.22360563450951382,0.2260428676737533,0.2284786866372909,0.23091307616081852,0.23334602101397134,0.23577750597542255,0.23820751583297917,0.24063603538367692,0.2430630494338754,0.24548854279935312,0.24791250030540235,0.25033490678692455,0.2527557470885245,0.25517500606460597,
0.2575926685794657,0.2600087195073885,0.262423143732742,0.26483592615007084,0.26724705166419144,0.2696565051902863,0.27206427165399855,0.274470335991526,0.27687468314971575,0.279277298086158,0.28167816576928034,0.28407727117844184,0.2864745993040268,0.28887013514753895,0.29126386372169516,0.29365577005051907,0.2960458391694349,0.2984340561253613,0.3008204059768044,0.3032048737939516,0.30558744465876525,0.3079681036650752,0.31034683591867307,0.3127236265374044,0.31509846065126257,0.3174713234024813,
0.3198421999456281,0.32221107544769667,0.32457793508819976,0.3269427640592625,0.32930554756571406,0.331666270825181,0.33402491906817955,0.3363814775382078,0.33873593149183806,0.3410882661988095,0.34343846694211977,0.34578651901811747,0.34813240773659393,0.3504761184208752,0.35281763640791375,0.35515694704838047,0.357494035706756,0.3598288877614225,0.3621614886047553,0.3644918236432136,0.3668198782974327,0.36914563800231454,0.371469088207119,0.37379021437555515,0.3761090019858719,0.3784254365309489,
0.3807395035183875,0.3830511884706013,0.38536047692490666,0.38766735443361316,0.3899718065641143,0.3922738188989773,0.39457337703603373,0.3968704665884695,0.3991650731849147,0.4014571824695336,0.40374678010211473,0.40603385175816015,0.40831838312897517,0.4106003599217584,0.4128797678596904,0.4151565926820234,0.4174308201441707,0.4197024360177953,0.42197142609089927,0.42423777616791275,0.42650147206978223,0.42876249963406005,0.43102084471499214,0.4332764931836073,0.435529430927805,0.4377796438524441,
0.4400271178794308,0.4422718389478067,0.4445137930138369,0.4467529660510979,0.448989344050565,0.45122291302070056,0.4534536589875408,0.45568156799478376,0.45790662610387667,0.46012881939410255,0.46234813396266805,0.4645645559247899,0.4667780714137819,0.46898866658114197,0.47119632759663826,0.47340104064839617,0.4756027919429845,0.4778015677055017,0.47999735417966227,0.48219013762788293,0.4843799043313678,0.4865666405901952,0.48875033272340285,0.4909309670690735,0.4931085299844206,0.4952830078458732,
0.49745438704916184,0.4996226540094029,0.5017877951611845,0.5039497969586506,0.5061086458755859,0.5082643284055011,0.5104168310617161,0.5125661403774459,0.5147122429058836,0.5168551252202854,0.5189947739140542,0.5211311756008233,0.5232643169145407,0.5253941845095519,0.5275207650606843,0.5296440452633303,0.53176401183353,0.5338806515080549,0.5359939510444905,0.5381038972213198,0.5402104768380049,0.5423136767150709,0.5444134836941873,0.5465098846382507,0.5486028664314669,0.5506924159794336,
0.5527785202092215,0.554861166069456,0.5569403405304,0.5590160305840337,0.5610882232441379,0.5631569055463735,0.5652220645483639,0.5672836873297753,0.5693417609923975,0.5713962726602252,0.5734472094795376,0.5754945586189798,0.5775383072696425,0.5795784426451422,0.5816149519817017,0.5836478225382286,0.5856770415963969,0.5877025964607252,0.5897244744586564,0.5917426629406375,0.5937571492801978,0.5957679208740293,0.5977749651420639,0.5997782695275531,0.6017778214971468,0.6037736085409706,
0.6057656181727056,0.6077538379296648,0.6097382553728725,0.6117188580871414,0.6136956336811503,0.615668569787522,0.6176376540629005,0.6196028741880276,0.6215642178678212,0.6235216728314511,0.6254752268324165,0.6274248676486223,0.6293705830824555,0.6313123609608616,0.6332501891354209,0.6351840554824242,0.6371139479029491,0.6390398543229352,0.6409617626932602,0.6428796609898144,0.644793537213577,0.6467033793906904,0.6486091755725354,0.6505109138358061,0.6524085822825837,0.6543021690404124,
0.6561916622623721,0.6580770501271538,0.6599583208391326,0.6618354626284422,0.6637084637510481,0.665577312488821,0.6674419971496107,0.6693025060673188,0.6711588276019715,0.673010950139793,0.6748588620932777,0.6767025519012627,0.6785420080290006,0.680377218968231,0.682208173237253,0.6840348593809971,0.6858572659710962,0.6876753816059578,0.6894891949108349,0.6912986945378977,0.6931038691663036,0.6949047075022693,0.6967011982791406,0.6984933302574626,0.7002810922250514,0.7020644729970628,
0.7038434614160628,0.7056180463520979,0.7073882167027638,0.7091539613932756,0.7109152693765367,0.7126721296332083,0.7144245311717775,0.7161724630286274,0.7179159142681044,0.7196548739825874,0.7213893312925558,0.7231192753466574,0.7248446953217766,0.7265655804231019,0.7282819198841938,0.7299937029670512,0.7317009189621798,0.7334035571886586,0.7351016069942061,0.7367950577552481,0.7384838988769835,0.7401681197934502,0.7418477099675923,0.7435226588913246,0.7451929560856002,0.7468585911004741,
0.74851955351517,0.7501758329381444,0.7518274190071527,0.7534743013893134,0.7551164697811727,0.7567539139087696,0.7583866235276988,0.7600145884231764,0.7616377984101029,0.7632562433331272,0.7648699130667098,0.7664787975151869,0.7680828866128323,0.769682170323922,0.7712766386427954,0.772866281593919,0.7744510892319485,0.7760310516417906,0.7776061589386658,0.7791764012681694,0.7807417688063342,0.7823022517596905,0.783857840365329,0.7854085248909607,0.7869542956349782,0.7884951429265165,
0.7900310571255131,0.7915620286227693,0.7930880478400086,0.7946091052299386,0.7961251912763091,0.7976362964939727,0.7991424114289434,0.8006435266584566,0.802139632791027,0.8036307204665083,0.8051167803561513,0.8065978031626619,0.8080737796202606,0.8095447004947385,0.8110105565835171,0.8124713387157041,0.8139270377521522,0.8153776445855153,0.8168231501403062,0.8182635453729524,0.8196988212718541,0.8211289688574394,0.8225539791822205,0.8239738433308508,0.8253885524201792,0.8267980975993069,
0.828202470049642,0.8296016609849552,0.8309956616514342,0.832384463327739,0.833768057325056,0.835146434987153,0.8365195876904326,0.8378875068439865,0.8392501838896497,0.8406076103020531,0.8419597775886776,0.8433066772899069,0.8446483009790806,0.8459846402625464,0.8473156867797138,0.8486414322031047,0.8499618682384075,0.8512769866245269,0.8525867791336371,0.8538912375712332,0.855190353776181,0.8564841196207703,0.8577725270107637,0.8590555678854485,0.8603332342176864,0.8616055180139647,
0.8628724113144449,0.8641339061930139,0.8653899947573326,0.8666406691488856,0.8678859215430308,0.8691257441490473,0.8703601292101856,0.8715890690037144,0.8728125558409707,0.8740305820674066,0.8752431400626376,0.8764502222404904,0.8776518210490502,0.8788479289707082,0.8800385385222083,0.8812236422546941,0.8824032327537553,0.8835773026394748,0.8847458445664734,0.8859088512239578,0.8870663153357643,0.8882182296604056,0.8893645869911159,0.8905053801558953,0.8916406020175559,0.8927702454737653,
0.8938943034570918,0.8950127689350478,0.896125634910135,0.8972328944198867,0.8983345405369131,0.8994305663689427,0.9005209650588671,0.9016057297847829,0.9026848537600348,0.9037583302332579,0.9048261524884198,0.9058883138448632,0.906944807657347,0.9079956273160882,0.9090407662468033,0.9100802179107496,0.911113975804765,0.912142033461311,0.9131643844485102,0.9141810223701891,0.9151919408659164,0.9161971336110438,0.9171965943167456,0.9181903167300568,0.9191782946339139,0.9201605218471924,
0.9211369922247468,0.9221076996574472,0.92307263807222,0.9240318014320833,0.9249851837361865,0.9259327790198475,0.9268745813545889,0.9278105848481769,0.9287407836446564,0.9296651719243892,0.9305837439040892,0.931496493836859,0.932403416012226,0.9333045047561782,0.9341997544311994,0.9350891594363043,0.9359727142070745,0.9368504132156921,0.9377222509709747,0.9385882220184104,0.9394483209401913,0.940302542355247,0.9411508809192796,0.9419933313247956,0.9428298883011399,0.9436605466145292,
0.9444853010680837,0.9453041465018606,0.9461170777928852,0.9469240898551845,0.9477251776398177,0.9485203361349085,0.9493095603656762,0.9500928453944666,0.9508701863207838,0.9516415782813193,0.9524070164499844,0.9531664960379385,0.9539200122936201,0.9546675605027767,0.9554091359884934,0.956144734111223,0.9568743502688147,0.9575979798965427,0.9583156184671352,0.9590272614908022,0.9597329045152642,0.9604325431257794,0.961126172945172,0.9618137896338589,0.9624953888898773,0.9631709664489116,
0.9638405180843199,0.9645040396071604,0.9651615268662179,0.9658129757480295,0.9664583821769106,0.9670977421149798,0.9677310515621852,0.9683583065563283,0.9689795031730896,0.9695946375260527,0.970203705766729,0.9708067040845813,0.971403628707048,0.9719944758995664,0.9725792419655969,0.9731579232466446,0.9737305161222837,0.9742970170101792,0.9748574223661101,0.9754117286839903,0.9759599324958922,0.9765020303720671,0.977038018920967,0.9775678947892662,0.978091654661882,0.9786092952619951,
0.9791208133510709,0.9796262057288789,0.9801254692335135,0.9806186007414129,0.9811055971673798,0.9815864554645993,0.9820611726246594,0.9825297456775688,0.9829921716917758,0.9834484477741867,0.983898571070184,0.9843425387636437,0.9847803480769539,0.9852119962710312,0.9856374806453384,0.9860567985379012,0.9864699473253249,0.9868769244228108,0.9872777272841725,0.9876723534018516,0.9880608003069334,0.9884430655691627,0.9888191467969585,0.9891890416374295,0.9895527477763881,0.9899102629383657,
0.9902615848866265,0.9906067114231814,0.990945640388802,0.9912783696630337,0.9916048971642099,0.9919252208494637,0.9922393387147418,0.9925472487948166,0.9928489491632982,0.9931444379326472,0.9934337132541856,0.9937167733181093,0.9939936163534985,0.9942642406283295,0.9945286444494852,0.9947868261627659,0.9950387841528995,0.9952845168435511,0.9955240226973343,0.995757300215819,0.9959843479395423,0.9962051644480167,0.9964197483597393,0.9966280983322008,0.9968302130618928,0.9970260912843175,
0.9972157317739943,0.997399133344468,0.9975762948483163,0.9977472151771571,0.9979118932616547,0.9980703280715274,0.9982225186155533,0.998368463941577,0.9985081631365148,0.9986416153263616,0.9987688196761952,0.9988897753901821,0.9990044817115824,0.9991129379227545,0.9992151433451596,0.9993110973393662,0.9994007993050533,0.9994842486810154,0.9995614449451646,0.9996323876145352,0.9996970762452857,0.9997555104327022,0.9998076898112005,0.9998536140543289,0.9998932828747699,0.9999266960243416,
0.9999538532940003,0.9999747545138408,0.999989399553098,0.9999977883201476};

const float fpiBST[100] PROGMEM = {6.283185307179586, 12.566370614359172, 18.84955592153876, 25.132741228718345, 31.41592653589793, 37.69911184307752, 43.982297150257104, 50.26548245743669, 56.548667764616276, 62.83185307179586, 69.11503837897544, 75.39822368615503, 81.68140899333463, 87.96459430051421, 94.24777960769379, 100.53096491487338, 106.81415022205297, 113.09733552923255, 119.38052083641213, 125.66370614359172, 131.94689145077132, 138.23007675795088, 144.51326206513048, 150.79644737231007, 157.07963267948966, 163.36281798666926, 169.64600329384882, 
175.92918860102841, 182.212373908208, 188.49555921538757, 194.77874452256717, 201.06192982974676, 207.34511513692635, 213.62830044410595, 219.9114857512855, 226.1946710584651, 232.4778563656447, 238.76104167282426, 245.04422698000386, 251.32741228718345, 257.610597594363, 263.89378290154264, 270.1769682087222, 276.46015351590177, 282.7433388230814, 289.02652413026095, 295.3097094374406, 301.59289474462014, 307.8760800517997, 314.1592653589793, 320.4424506661589, 326.7256359733385, 333.0088212805181, 339.29200658769764, 345.57519189487726, 351.85837720205683, 
358.1415625092364, 364.424747816416, 370.7079331235956, 376.99111843077515, 383.27430373795477, 389.55748904513433, 395.84067435231395, 402.1238596594935, 408.4070449666731, 414.6902302738527, 420.97341558103227, 427.2566008882119, 433.53978619539146, 439.822971502571, 446.10615680975064, 452.3893421169302, 458.6725274241098, 464.9557127312894, 471.23889803846896, 477.5220833456485, 483.80526865282815, 490.0884539600077, 496.37163926718733, 502.6548245743669, 508.93800988154646, 515.221195188726, 521.5043804959057, 527.7875658030853, 534.0707511102648, 
540.3539364174444, 546.637121724624, 552.9203070318035, 559.2034923389832, 565.4866776461628, 571.7698629533423, 578.0530482605219, 584.3362335677015, 590.6194188748811, 596.9026041820607, 603.1857894892403, 609.4689747964198, 615.7521601035994, 622.0353454107791, 628.3185307179587};

#define EARTH_RADIUS 6371000.0f

const int_fast16_t ftable_size = sizeof(fsinLUT)/sizeof(float);
const float twoPif = 6.28318530718f;
const float halfPif = 1.57079632679f;
const float twoHundPif = 628.318530718f;
const float Pif = 3.14159265359f;
const float ftable_scalar = 400.0f;

const float ftable_scalar2 = 200.0f;

const int_fast16_t dtable_size = sizeof(dsinLUT)/sizeof(double);
const double twoPid = 6.28318530718;
const double halfPid = 1.57079632679;
const double dtable_scalar = 400.0;

// float operations

inline float fsqrtf(float x, uint_fast16_t max_iters) {
    uint_fast16_t iters;
    float estimate;
    float precision = 0.00001f;
    while(1)
    {
        iters ++;
        estimate = (estimate + x/estimate) / 2.0f;
        
        // only check for convergence every 5 iterations
        if (iters % 5 == 0) {
            if (estimate - x/estimate < precision){
                break;
            } else if (iters > max_iters) {
                break;
            }
        }
    }
    return estimate;
}

inline float fsqrtf(float x) { return fsqrtf(x, 1000); }

inline float BSTMod(float targ) 
{
    int index = 3;

    while (1) {
        if ( fpiBST[index] > targ ) { index >>= 1; }
        else if ( fpiBST[index] < targ ) { index = (100 + index)>>1; }
        else { if ( fpiBST[index+1] > targ && fpiBST[index-1] < targ ) {return fpiBST[index];} }
    }

}

inline float fsinf(float n) 
{

    int_fast8_t sign = 1;
    float ret;

    if ( n < 0.0f )
    {
        sign = -1;
        n = -n;
    }

    if ( n > twoPif )
    {
        n < twoHundPif ? n -= BSTMod(n) : n = fmod(n, twoPif);
    }

    if ( n > Pif )
    {
        n -= Pif;
        sign = -1;
    }

    if ( n < halfPif )
    {
        int_fast16_t LUTX = (int_fast16_t)(n * ftable_scalar);
        if (LUTX >= ftable_size) LUTX = ftable_size - 1;
        ret = fsinLUT[LUTX];
    } 
    else {
        n -= halfPif;
        int_fast16_t LUTX = (int_fast16_t)(n * ftable_scalar);
        if (LUTX >= ftable_size) {LUTX = ftable_size - 1;}
        if (LUTX == 0) {LUTX = 1;}
        ret = fsinLUT[(ftable_size-LUTX)];
    }

    return ret*sign;

}

inline float fcosf(float n) 
{
    return fsinf(n + halfPif);
}

inline float ftanf(float n) 
{
    return fsinf(n) / fcosf(n);
}

// operations with doubles
inline double fsqrt(double x, uint_fast32_t max_iters) 
{
    uint_fast32_t iters;
    double estimate;
    double precision = 0.000000001;
    while(1)
    {
        iters ++;
        estimate = (estimate + x/estimate) / 2.0;
        
        // only check for convergence every 5 iterations
        if (iters % 5 == 0) {
            if (estimate - x/estimate < precision){
                break;
            } else if (iters > max_iters) {
                break;
            }
        }
    }
    return estimate;
}
inline double fsqrt(double x) {
    return fsqrtf(x, 10000);
}

inline double fsin(double n) 
{

    int_fast8_t sign = 1;
    double ret;

    if ( n < 0 )
    {
        sign = -1;
        n = -n;
    }

    if ( n > twoPid )
    {
        n = fmod(n, twoPid);
    }

    if ( n > PI )
    {
        n -= PI;
        sign = -1;
    }

    if ( n < halfPid )
    {
        int_fast16_t LUTX = (int_fast16_t)(n * ftable_scalar);
        if (LUTX >= ftable_size) LUTX = dtable_size - 1;
        ret = dsinLUT[LUTX];
    } 
    else {
        n -= halfPid;
        int_fast16_t LUTX = (int_fast16_t)(n * dtable_scalar);
        if (LUTX >= dtable_size) {LUTX = dtable_size - 1;}
        if (LUTX == 0) {LUTX = 1;}
        ret = dsinLUT[dtable_size-LUTX];
    }

    if (sign < 0) {
        return(-ret); 
    } else { return(ret); }

}

inline double fcos(double n) { return fsin(n + halfPid); }

inline double ftan(double n) { return fsin(n) / fcos(n); }

double DBP(double la1, double lo1, double la2, double lo2)
{
    double dlat = (la2 - la1);
    double dlon = (lo2 - lo1);
    double a = sin(dlat/2) * sin(dlat/2) + cos(la1) * cos(la2) * sin(dlon/2) * sin(dlon/2);
    double c = 2 * atan2(sqrtf(a), sqrtf(1-a));
    return EARTH_RADIUS * c;
}

double fDBP(double la1, double lo1, double la2, double lo2)
{
    double dlat = (la2 - la1);
    double dlon = (lo2 - lo1);
    double a = fsin(dlat/2) * fsin(dlat/2) + fcos(la1) * fcos(la2) * fsin(dlon/2) * fsin(dlon/2);
    double c = 2 * atan2(fsqrt(a), fsqrt(1-a));
    return EARTH_RADIUS * c;
}

float fDBPf(float la1, float lo1, float la2, float lo2)
{
    float dlat = (la2 - la1);
    float dlon = (lo2 - lo1);
    float a = fsinf(dlat/2) * fsinf(dlat/2) + fcosf(la1) * fcosf(la2) * fsinf(dlon/2) * fsinf(dlon/2);
    float c = 2 * atan2f(fsqrtf(a), fsqrtf(1-a));
    return EARTH_RADIUS * c;
}

double CBP(double la1, double lo1, double la2, double lo2)
{
    double d_lo = (lo2-lo1);
    double y = sin(d_lo) * cos(la1);
    double x = cos(la1) * sin(la2) - sin(la1) * cos(la2) * cos(d_lo);

    return atan2(y,x);
}

double fCBP(double la1, double lo1, double la2, double lo2)
{
    double d_lo = (lo2-lo1);
    double y = GPSSin(d_lo) * GPSCos(la1);
    double x = GPSCos(la1) * GPSSin(la2) - GPSSin(la1) * GPSCos(la2) * GPSCos(d_lo);

    return atan2(y,x);
}

float fCBPf(float la1, float lo1, float la2, float lo2)
{
    float d_lo = (lo2-lo1);
    float y = GPSSinf(d_lo) * GPSCosf(la1);
    float x = GPSCosf(la1) * GPSSinf(la2) - GPSSinf(la1) * GPSCosf(la2) * GPSCosf(d_lo);

    return atan2f(y,x);
}
