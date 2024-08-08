#pragma once
#include "basic_classes.h"

const std::array<Bitboard, SQUARE_NB> rook_magics = {
    108086665936900736ULL,  18014535949484104ULL,    324276767506300936ULL,   15132101345575700496ULL,
    9583662275189802240ULL, 72066407315079170ULL,    5044032716862425600ULL,  36032383317715072ULL,
    2603221323182252932ULL, 6825769261076489ULL,     140806209929600ULL,      5348162264957256ULL,
    9802507351326991360ULL, 59954178696415488ULL,    10394870907123795456ULL, 281479273087590ULL,
    4612390255696282144ULL, 4786175189614689ULL,     9007749561057664ULL,     565149514598464ULL,
    9277837994738320384ULL, 9148486566019584ULL,     9223373140661501956ULL,  11673332433234845825ULL,
    703835618197504ULL,     9982263760594681856ULL,  9800149467837497472ULL,  43982613643392ULL,
    120053477762662528ULL,  11601835598650282020ULL, 46189435510984712ULL,    281513632497858ULL,
    18084769426310182ULL,   2287542565093632ULL,     4649403774861844544ULL,  76565666882127872ULL,
    9223662310080390144ULL, 128387791066304576ULL,   5188288642426089506ULL,  649085697059192899ULL,
    35459258417152ULL,      159430259834912ULL,      4756102474838966336ULL,  288794770324193312ULL,
    2308108003301163136ULL, 9230870706189795456ULL,  153685440380141708ULL,   563500984434689ULL,
    149219142531580416ULL,  577077584907469056ULL,   722269739118764544ULL,   140806210454144ULL,
    2392554482434688ULL,    11819769789868441728ULL, 18577902648164864ULL,    576465152716587520ULL,
    1188950577057398805ULL, 2288085845950465ULL,     1179951967762513986ULL,  648799858362486785ULL,
    291046363013071874ULL,  23925409695662085ULL,    1810561403715719172ULL,  9223653523676500001ULL};

const std::array<Bitboard, SQUARE_NB> bishop_magics = {
    9368617541271824640ULL,  292738650995818560ULL,   2331000126317072ULL,    10204569078600200ULL,
    1143663891578896ULL,     54755816636416000ULL,    63903650200158720ULL,   1152940230833079296ULL,
    13849731072348161056ULL, 18016632030953537ULL,    4521245676732416ULL,    2449971683495510528ULL,
    27307488504201312ULL,    2233434898464ULL,        35468511297608ULL,      4504192467141632ULL,
    10133786424508928ULL,    5188711236943085708ULL,  38280601295650833ULL,   866943480205689348ULL,
    10133101386661888ULL,    4899987040483426305ULL,  158355477831696ULL,     2310427981295916033ULL,
    12763219006484252160ULL, 9800699479736195584ULL,  73184628923957504ULL,   2260604656156674ULL,
    285873056784640ULL,      4503741411854336ULL,     5633914810958344ULL,    352119437722624ULL,
    6197384233259376640ULL,  72638179128185352ULL,    631946678887252608ULL,  9232383651347956240ULL,
    306245051955347712ULL,   3386530978988288ULL,     2884581986251588096ULL, 594763536396321024ULL,
    73765153849483268ULL,    1300416595990021122ULL,  450922991207973890ULL,  112590128542648321ULL,
    478525061190388228ULL,   582811056604928ULL,      621638594192212512ULL,  2378183186875294208ULL,
    2314999776444153860ULL,  9241540374374383904ULL,  576496221285285952ULL,  36028811011719200ULL,
    189168084983808ULL,      1157470528081002560ULL,  1306066161746116933ULL, 595605588386381824ULL,
    1706994017779732ULL,     1152923746881831944ULL,  37109729857538ULL,      9259400868275684352ULL,
    13871087162075948032ULL, 11529215321047302912ULL, 109546585617335298ULL,  1724176050225408ULL};

const std::array<Bitboard, SQUARE_NB> rook_masks = {
    282578800148862ULL,     565157600297596ULL,     1130315200595066ULL,    2260630401190006ULL,
    4521260802379886ULL,    9042521604759646ULL,    18085043209519166ULL,   36170086419038334ULL,
    282578800180736ULL,     565157600328704ULL,     1130315200625152ULL,    2260630401218048ULL,
    4521260802403840ULL,    9042521604775424ULL,    18085043209518592ULL,   36170086419037696ULL,
    282578808340736ULL,     565157608292864ULL,     1130315208328192ULL,    2260630408398848ULL,
    4521260808540160ULL,    9042521608822784ULL,    18085043209388032ULL,   36170086418907136ULL,
    282580897300736ULL,     565159647117824ULL,     1130317180306432ULL,    2260632246683648ULL,
    4521262379438080ULL,    9042522644946944ULL,    18085043175964672ULL,   36170086385483776ULL,
    283115671060736ULL,     565681586307584ULL,     1130822006735872ULL,    2261102847592448ULL,
    4521664529305600ULL,    9042787892731904ULL,    18085034619584512ULL,   36170077829103616ULL,
    420017753620736ULL,     699298018886144ULL,     1260057572672512ULL,    2381576680245248ULL,
    4624614895390720ULL,    9110691325681664ULL,    18082844186263552ULL,   36167887395782656ULL,
    35466950888980736ULL,   34905104758997504ULL,   34344362452452352ULL,   33222877839362048ULL,
    30979908613181440ULL,   26493970160820224ULL,   17522093256097792ULL,   35607136465616896ULL,
    9079539427579068672ULL, 8935706818303361536ULL, 8792156787827803136ULL, 8505056726876686336ULL,
    7930856604974452736ULL, 6782456361169985536ULL, 4485655873561051136ULL, 9115426935197958144ULL};

const std::array<Bitboard, SQUARE_NB> bishop_masks = {
    18049651735527936ULL, 70506452091904ULL,    275415828992ULL,      1075975168ULL,        38021120ULL,
    8657588224ULL,        2216338399232ULL,     567382630219776ULL,   9024825867763712ULL,  18049651735527424ULL,
    70506452221952ULL,    275449643008ULL,      9733406720ULL,        2216342585344ULL,     567382630203392ULL,
    1134765260406784ULL,  4512412933816832ULL,  9024825867633664ULL,  18049651768822272ULL, 70515108615168ULL,
    2491752130560ULL,     567383701868544ULL,   1134765256220672ULL,  2269530512441344ULL,  2256206450263040ULL,
    4512412900526080ULL,  9024834391117824ULL,  18051867805491712ULL, 637888545440768ULL,   1135039602493440ULL,
    2269529440784384ULL,  4539058881568768ULL,  1128098963916800ULL,  2256197927833600ULL,  4514594912477184ULL,
    9592139778506752ULL,  19184279556981248ULL, 2339762086609920ULL,  4538784537380864ULL,  9077569074761728ULL,
    562958610993152ULL,   1125917221986304ULL,  2814792987328512ULL,  5629586008178688ULL,  11259172008099840ULL,
    22518341868716544ULL, 9007336962655232ULL,  18014673925310464ULL, 2216338399232ULL,     4432676798464ULL,
    11064376819712ULL,    22137335185408ULL,    44272556441600ULL,    87995357200384ULL,    35253226045952ULL,
    70506452091904ULL,    567382630219776ULL,   1134765260406784ULL,  2832480465846272ULL,  5667157807464448ULL,
    11333774449049600ULL, 22526811443298304ULL, 9024825867763712ULL,  18049651735527936ULL};

const std::array<Bitboard, SQUARE_NB> knight_masks = {
    132096ULL, 329728ULL, 659712ULL, 1319424ULL, 
    2638848ULL, 5277696ULL, 10489856ULL, 4202496ULL, 
    33816580ULL, 84410376ULL, 168886289ULL, 337772578ULL, 
    675545156ULL, 1351090312ULL, 2685403152ULL, 1075839008ULL, 
    8657044482ULL, 21609056261ULL, 43234889994ULL, 86469779988ULL, 
    172939559976ULL, 345879119952ULL, 687463207072ULL, 275414786112ULL, 
    2216203387392ULL, 5531918402816ULL, 11068131838464ULL, 22136263676928ULL, 
    44272527353856ULL, 88545054707712ULL, 175990581010432ULL, 70506185244672ULL, 
    567348067172352ULL, 1416171111120896ULL, 2833441750646784ULL, 5666883501293568ULL, 
    11333767002587136ULL, 22667534005174272ULL, 45053588738670592ULL, 18049583422636032ULL, 
    145241105196122112ULL, 362539804446949376ULL, 725361088165576704ULL, 1450722176331153408ULL, 
    2901444352662306816ULL, 5802888705324613632ULL, 11533718717099671552ULL, 4620693356194824192ULL, 
    288234782788157440ULL, 576469569871282176ULL, 1224997833292120064ULL, 2449995666584240128ULL, 
    4899991333168480256ULL, 9799982666336960512ULL, 1152939783987658752ULL, 2305878468463689728ULL, 
    1128098930098176ULL, 2257297371824128ULL, 4796069720358912ULL, 9592139440717824ULL, 
    19184278881435648ULL, 38368557762871296ULL, 4679521487814656ULL, 9077567998918656ULL};

const std::array<Bitboard, SQUARE_NB> king_masks = {
    770ULL, 1797ULL, 3594ULL, 7188ULL, 
    14376ULL, 28752ULL, 57504ULL, 49216ULL, 
    197123ULL, 460039ULL, 920078ULL, 1840156ULL, 
    3680312ULL, 7360624ULL, 14721248ULL, 12599488ULL, 
    50463488ULL, 117769984ULL, 235539968ULL, 471079936ULL, 
    942159872ULL, 1884319744ULL, 3768639488ULL, 3225468928ULL, 
    12918652928ULL, 30149115904ULL, 60298231808ULL, 120596463616ULL, 
    241192927232ULL, 482385854464ULL, 964771708928ULL, 825720045568ULL, 
    3307175149568ULL, 7718173671424ULL, 15436347342848ULL, 30872694685696ULL, 
    61745389371392ULL, 123490778742784ULL, 246981557485568ULL, 211384331665408ULL, 
    846636838289408ULL, 1975852459884544ULL, 3951704919769088ULL, 7903409839538176ULL, 
    15806819679076352ULL, 31613639358152704ULL, 63227278716305408ULL, 54114388906344448ULL, 
    216739030602088448ULL, 505818229730443264ULL, 1011636459460886528ULL, 2023272918921773056ULL, 
    4046545837843546112ULL, 8093091675687092224ULL, 16186183351374184448ULL, 13853283560024178688ULL, 
    144959613005987840ULL, 362258295026614272ULL, 724516590053228544ULL, 1449033180106457088ULL, 
    2898066360212914176ULL, 5796132720425828352ULL, 11592265440851656704ULL, 4665729213955833856ULL};

const std::array<int, SQUARE_NB> rook_shifts = {52, 53, 53, 53, 53, 53, 53, 52, 53, 54, 54, 54, 54, 54, 54, 53,
                                                53, 54, 54, 54, 54, 54, 54, 53, 53, 54, 54, 54, 54, 54, 54, 53,
                                                53, 54, 54, 54, 54, 54, 54, 53, 53, 54, 54, 54, 54, 54, 54, 53,
                                                53, 54, 54, 54, 54, 54, 54, 53, 52, 53, 53, 53, 53, 53, 53, 52};

const std::array<int, SQUARE_NB> bishop_shifts = {58, 59, 59, 59, 59, 59, 59, 58, 59, 59, 59, 59, 59, 59, 59, 59,
                                                  59, 59, 57, 57, 57, 57, 59, 59, 59, 59, 57, 55, 55, 57, 59, 59,
                                                  59, 59, 57, 55, 55, 57, 59, 59, 59, 59, 57, 57, 57, 57, 59, 59,
                                                  59, 59, 59, 59, 59, 59, 59, 59, 58, 59, 59, 59, 59, 59, 59, 58};

// const std::array<std::vector<Bitboard>, SQUARE_NB> rook_move_table = {
