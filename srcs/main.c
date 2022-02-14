#include "../includes/cub3d.h"

char	**new_text(void)
{
	char **tex;
	int		i;

	tex = malloc(sizeof(char *) * 122);
	i = -1;
	while (++i < 95)
		tex[i] = malloc(sizeof(char) * 65);
	tex[0] = "64 64 56 1 ";
	tex[1] = "  c #202020";
	tex[2] = ". c #2C2C2C";
	tex[3] = "X c gray19";
	tex[4] = "o c gray22";
	tex[5] = "O c #400000";
	tex[6] = "+ c #4C0000";
	tex[7] = "@ c #580000";
	tex[8] = "# c #640000";
	tex[9] = "$ c #700000";
	tex[10] = "% c #7C0000";
	tex[11] = "& c #543C1C";
	tex[12] = "* c #585400";
	tex[13] = "= c #706C00";
	tex[14] = "- c #744C28";
	tex[15] = "; c #400040";
	tex[16] = ": c #480048";
	tex[17] = "> c #500050";
	tex[18] = ", c #580058";
	tex[19] = "< c #600064";
	tex[20] = "1 c #6C0070";
	tex[21] = "2 c gray25";
	tex[22] = "3 c #484848";
	tex[23] = "4 c gray33";
	tex[24] = "5 c #646464";
	tex[25] = "6 c gray44";
	tex[26] = "7 c #7C7C7C";
	tex[27] = "8 c #880000";
	tex[28] = "9 c #980000";
	tex[29] = "0 c #A40000";
	tex[30] = "q c #B00000";
	tex[32] = "w c #BC0000";
	tex[32] = "e c #C80000";
	tex[33] = "r c #D40000";
	tex[34] = "t c #E00000";
	tex[35] = "y c #EC0000";
	tex[36] = "u c #FC0000";
	tex[37] = "i c #FC2020";
	tex[38] = "p c #B45400";
	tex[39] = "a c #CC6000";
	tex[40] = "s c #FC7800";
	tex[41] = "d c #A86840";
	tex[42] = "f c #848400";
	tex[43] = "g c #9C9C00";
	tex[44] = "h c #FC8820";
	tex[45] = "j c #CCC400";
	tex[46] = "k c #E4D800";
	tex[47] = "l c #FCF400";
	tex[48] = "z c #E88C58";
	tex[49] = "x c #840084";
	tex[50] = "c c #9C009C";
	tex[51] = "v c gray55";
	tex[52] = "b c #989898";
	tex[53] = "n c gray66";
	tex[54] = "m c #B4B4B4";
	tex[55] = "M c #C0C0C0";
	tex[56] = "N c #D0D0D0";
	tex[57] = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
	tex[58] = "4o433333433333343o333333344444433333333344444443333ooo334433333o";
	tex[59] = "oyyrrrrrrrrr0334yyrrrrrrrrrrrrrrrrrr03o4yyyyttttttrrrrreeeewww03";
	tex[60] = "3leqqr80r8e0#.34yw8w8w8w%w9w9w%w%we0$.3or0eqeqqe$e%eqe8q0%e9e0l.";
	tex[61] = "kjfmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmjj=";
	tex[62] = "dg*6677777777777777777777777777777777777777777777777777777666=z*";
	tex[63] = "3&07777bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb7677@d.";
	tex[64] = "3w%b7i0OO4$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$0qut7OOO7M6@O.";
	tex[65] = "3w0n70Mb6O7nMNMMmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmMMMMM7O76bi76@O.";
	tex[66] = "3%#mbObMb7vbnnv7nNMmmmmmmmmmmmmmmmmmmmmmmmmmmmmv15Mmnnn6nN067OO.";
	tex[67] = "33.NnObnMb77bb4,6nNNMMmmmmmmmmmmmmmmmmmmmmmmMMv5<>bnnbbnN7O7b  .";
	tex[68] = "4ooNm46bmMb77v>,,,7nNMMMMMmm>64>>>>pasmmmmMMv5<,>>bbbbnNM54vn ..";
	tex[69] = "yrrmNO7bnmMb653:>>,,7nmmmmmm>>>>>7>ppahmmmv5<,>>>3bbbnMMn7Obn@@r";
	tex[70] = "q88mN$bvbnm5,653::>>,,,7vmmm6>>>>>>pvmmv5<<,,>>>366>5nMnv7Onm@@q";
	tex[71] = "808mNqnbvb51<3653::::x,,,6vmm>>>>>>vmv5<<,x>>>:3641<<5nb7v$nm@@9";
	tex[72] = "$00mm9mbvv:<1<,353o::1:,,,,mm>>>>>>mm,<<,>1::o353><<11bv7v$nm@@%";
	tex[73] = "088mm8Mnbv::<1<<,34o;;:::,4mm>>>>>>mm4::::::o33:>,<111v7vv$nm@@%";
	tex[74] = "$0#mm$Nmnb3::<11<,:;;;;::vmm6>>>>>>6mmv:::;;;::>,<1114v7vb$mm@@8";
	tex[75] = "$q#mm$NMmb53:,<<1<,1;;;:v>6m>>>>>>>>m6:v:;;:,::,<111477vvn$mm@@$";
	tex[76] = "O++mm$NN5>6443,<<1,x>;;:>:>mm>>>>>>mm::::::,1>,<<1475335bn$mmO@O";
	tex[77] = "...mm$mN,>:34443<<1,x>>>:>:75>>>>>>57::::::1,,<<4v753;;:bn$mm  .";
	tex[78] = "443mm$mN<,>::;o3345,,,,:::>>>>>>>>>>::::::>>,45v74>:;;;:nn$mm ..";
	tex[79] = "4yyMM%Mm<<>>:;;;::,c,,,::>>>>>>>>>>>:::::>,,c,,,>>:;;;;,nn$mm@@.";
	tex[80] = "4y8NN9NM,<,>::;;;::x,,,>>>>>>>>>>>>>>::>>,,,c,,,>::;;;:,bn%mm@O.";
	tex[81] = "oyqMM8Mb6,<>>:;;:;:1,,>>>>>>44566544>>>,,,,,x,,>::;;;;:6bn%mm@O.";
	tex[82] = "3w#mm%mbb63,>:::>:>,1>>>>>>>51c11c15>>,,,,,x,,>:::;;;36bbm8mm@O.";
	tex[83] = "3wqmm$m>,356655432X:>,x,>>>>7c1111c7>,>,,x,,,4432o23453<1M9MM@O.";
	tex[84] = "4w$nn$n>>,,,,>:>:>:>:>,x1>>>41111114>>,1x,,,,>::::;::>,<1N9NN@O.";
	tex[85] = "3e0nn#n>>>,,,>>:>:>:>>>>>>>>7c1111c7>,>,>,,,>:::::::>,,<<M9MM@O.";
	tex[86] = "309bb+b>>,>,>,>>>>>>>>>>>>>>41c31c14>>,>,,,>>:::::::>><1<M8MM@O.";
	tex[87] = "33onn@n>>>,>,>>>>>>4>>>>4>>>74131147>,>4,>>>4:::::::>><<>m%mm  .";
	tex[88] = "444nn#n5>>>>>>>>36>>>>>4>>>>47744774>>>,4>>:>:63:::>>,<,5m$mm ..";
	tex[89] = "wwwmm$mb5>>>>366>>>>>>6>>>>>>>4774>>>>,>>6>>:::>663>>,,5bm$mm@@w";
	tex[90] = "0q0mm$mmmbbbb6>>>>>>>6>>>>>>>>>>>>>>>>>>>>6:>::::>6bbbbmnn#nn@@0";
	tex[91] = "0%8mm$mmbb6>>>>>>>>>6>>>>>>>>>>>>>>>>>>>>>>6:>:>:>,,,6bbbb@bb@@$";
	tex[92] = "8%0mm$mm>>>>>>>>>>>6>>>>6>6>>>>>>>>>>6>6>>>>6:>:>,,,,,>>vv+vv@@$";
	tex[93] = "08%mm$mm>>>>>>>>>>6>>>>5b6>>>>>>>>>>>>6b5>>>>6>>>>,,,,>>bb@bb@@8";
	tex[94] = "08%mm%mm6>>>>>>>>6>>>>>b>>>>>>>>>>>>>>>>b>>>>>6>>,,,,,>6bb#bb@@$";
	tex[95] = "$$8mm%mmb>>>>>>>6>>>>>b>>>>>>>>>>>>>>>>>>b>>>>>6>>,>,>>bnn#nn@@$";
	tex[96] = "OO+mm8mmm6>>>>>6>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>6>>>,>6mmm#mm@@O";
	tex[97] = "...MM8MMMm6>>>6>>>>>>b>>>>>>>>>>>>>>>>>>>>b>>>>>>6>>>6mmmm$mm  .";
	tex[98] = "434NN0NNNmmbbbb>>>>>bmc>>>>>>6>>>>6>>>>>>cmb>>>>>bbbbmmmmm$mm ..";
	tex[99] = "oyrMM9MMMmmmmmbb>>>bmmm6>>>>>>>>>>>>>>>>6mmmb>>>bbmmmmmmMM8MM@@.";
	tex[100] = "4r0mm9mmmmmmm7pp7mmmm7p>>>>>>>>>>>>>>>>>>p7mmmm7pp7mmMMMMM8MM@O.";
	tex[101] = "3r0mm8mmmmmmmpppppppppp-->>6m>>>>>>m6>>--ppppppppppMMMMNNN9NN@O.";
	tex[102] = "3r8mm8mmmmmmmm75-pppp--7mmmm>>>>>>>>mmmm7--pppp-57mmmMMMMM9MM@O.";
	tex[103] = "or0mm%mmmmmmmvppppppppppmmm>>>>>>>>>>mmmppppppppppvmmmmmMM8MM@O.";
	tex[104] = "4r0nn$nnnnmmmp--vpp-mv-pm7>>>>>>>>>>>>7mp-vm-ppv--pmmmmmmm$mm@O.";
	tex[105] = "oe0nn$nnnnnnm-7vmp-mmmm74>>>>>>>>>>>>>>47mmmm-pmv7-mmmmmmm$mm@O.";
	tex[106] = "40#mm$mmmmmmmmmmmp-mm74>>>>>>>>>>>>>>>>>>47mm-pmmmmmmmmmmm$mmOO.";
	tex[107] = "o3.mm$bmmmmmmmmmmvpm>>>>>>>>>7>>>>7>>>>>>>>>mpvmmmmmmmmmmb$mm  .";
	tex[108] = "4o4mm$7mmmmmmmmmmmmm74>>>>>5m>>>>>>m5>>>>>47mmmmmmmmmmmmm7$mm ..";
	tex[109] = "rrrmm7$7bmmmmmmmmmmmmm74>>5m7>>>>>>7m5>>47mmmmmmmmmmmmmb7$7mm@@w";
	tex[110] = "%0@7mm7$$$7bmmmmmmmmmmmmmmmm>>>>>>>>mmmmmmmmmmmmmmmmbv$$$7bm7@@$";
	tex[111] = "0%%@7mmmb7$$$$7bmmmmmmmmmmmm5>>>>>>5mmmmmmmmmmmmb7$$$$vbmmm7@@@+";
	tex[112] = "0%@@@47mmmmmb7$$$7bmmmmmmmmmm5>>>>5mmmmmmmmmmb7$$$7bmmmmm74@@@$8";
	tex[113] = "%9@@@@@47mmmmmmb7$$$7bmmmmmmmm5>>5mmmmmmmmb7$$$7bmmmmm74@@@@@#$0";
	tex[114] = "#0%0#@#@@@@47mmmmmb7$$$7bmmmmmm55mmmmmmb7$$$7bmmmmm74@@@@@@$@0$0";
	tex[115] = "#0%%#99#@@@@@@47mmmmmb7$$$$7bmmmmmmb7$$$$7bmmmmm74@@@@@@@$0$@#0+";
	tex[116] = "%9@0##8#%%0@@@@@@O47mmmmmb7$$$7bb7$$$7bmmmmm74O...@@@@0@0$0$0#0$";
	tex[117] = "++++++++++++++++OO  .47mmmmmb7$$$$7bmmmm74+++OO ..@OO+++++++++++";
	tex[118] = "...................     .47mmmmmmmmmm74     .   .........     ..";
	tex[119] = "o4o4ooo333334oooo.......     47mm74.     ........oo33433332o2333";
	tex[120] = "44444444444444444443ooo..                 .ooo334444444444444444";
	tex[121] = NULL;
	return (tex);
}

char	**new_map(void)
{
	char **tmp;
	int i;

	tmp = malloc(sizeof(char*) * 18);
	i = 0;
	while (i < 17)
	{
		tmp[i] = malloc(sizeof(char) * 50);
		i++;
	}
	tmp[17] = NULL;
	tmp[0]  = "111111111111111111111111111";
	tmp[1]  = "100000000000111000000111111";
	tmp[2]  = "100000000000000000000000011";
	tmp[3]  = "100000000000000000000000011";
	tmp[4]  = "111111111111000111111000001";
	tmp[5]  = "110000011000000000000000011";
	tmp[6]  = "100000010000000000000000011";
	tmp[7]  = "100000000000000000011000001";
	tmp[8]  = "100000000000000000100000001";
	tmp[9]  = "100000000000000000000000001";
	tmp[10] = "110000000000000000011111111";
	tmp[11] = "110100000000000000011111111";
	tmp[12] = "111100000000000000111111111";
	tmp[13] = "111100000000000000000111111";
	tmp[14] = "111110000000000000000111111";
	tmp[15] = "111100000000000000000011111";
	tmp[16] = "111111111111111111111111111";

	return (tmp);
}

void	data_init(t_data *data)
{
	data->so = "./textures/crypto.xpm";
	data->no = "./textures/eagle.xpm";
	data->we = "./textures/greystone.xpm";
	data->ea = "./textures/purplestone.xpm";
	data->w = 0;
	data->a = 0;
	data->s = 0;
	data->d = 0;
	data->gau = 0;
	data->dro = 0;
	data->disth = -1;
	data->distv = -1;
	data->mh = WIN_H;
	data->ml = WIN_L;
	data->mapx = ft_strlen(data->map[5]);		// jsp pourquoi mais x et y inverser 
	data->mapy = 17;	// map[mapy][mapx]
	data->resx = 64;					// init resolution of each square of the map
	data->resy = 64;					// here 60 is the resolution of each square of the map
	data->posx = 8 * data->resx;	// init player position in the map.
	data->posy = 10 * data->resy;	// here 4 is the initial pos
	data->pa = P3;
	data->pdx = cos(data->pa) * 1.5;
	data->pdy = sin(data->pa) * 1.5;
}

int		ft_exit(t_data *data)
{
	mlx_destroy_image(data->mlx, data->img);
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
	return (1);
}

int main(void)
{
	t_data	data;
	// char	*color;

	data.map = new_map();
	data_init(&data);
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, data.ml, data.mh, "cub3d");
	data.img = mlx_new_image(data.mlx, data.ml, data.mh);
	data.addr = mlx_get_data_addr(data.img, &data.bits_per_pixels, &data.line_length,
								&data.endian);
	draw_rays3d(&data);
	draw_map_2d(&data, data.map);
	put_player(&data, data.posx / 6, data.posy / 6);
	mlx_put_image_to_window(data.mlx, data.win, data.img, 0, 0);
	mlx_hook(data.win, 2, HOOK_KEY_PRESSED, &hook_pressed, &data);
	mlx_hook(data.win, 3, HOOK_KEY_RELEASED, &hook_released, &data);
	mlx_hook(data.win, 33, 1L<<17, &ft_exit, &data);
	mlx_loop_hook(data.mlx, &next_frame, &data);
	mlx_loop(data.mlx);
}