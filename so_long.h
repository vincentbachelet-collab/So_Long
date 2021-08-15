/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:45:17 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 18:10:21 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define	SO_LONG_H

# include "so_long.h"
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include "mlx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
//# include <X11/keysym.h>
//# include <X11/X.h>

# define WINDOW_WIDTH 1200
# define WINDOW_HEIGHT 1200
# define MLX_ERROR 1
# define A 0
# define W 13
# define D 2
# define S 1
# define ESC 53
# define K 40
# define XK_Right 124
# define XK_Left 123
# define XK_Down 125
# define XK_Up 126

typedef struct s_list
{
	char			*line;
	struct s_list	*previous;	
	struct s_list	*next;
}	t_list;

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_sprites
{
	void		*Bomberman;
	void		*Bomb;
	void		*Wall;
	void		*Exit;
	void		*Floor;
	void		*Songoku_Droite;
	void		*Songoku_Up;
	void		*Ennemy;
	void		*Songoku_Down1;
	void		*Songoku_Down2;
	void		*Songoku_Down3;
	void		*Songoku_Gauche2;
	void		*Songoku_Droite2;
	void		*Songoku_Up2;
	void		*Ennemy2;
	void		*Defaite1;
	void		*Defaite2;
	void		*Defaite3;
	void		*Defaite4;
	void		*Kamehameha1;
	void		*Kamehameha2;
	void		*Kamehameha3;
	void		*Kamehameha4;
	void		*Kamehameha5;
	void		*Kamehameha6;
	void		*Kamehameha7;
	void		*Rayon_Kamehameha1;
	void		*Rayon_Kamehameha2;
}	t_sprites;

typedef struct s_data
{
	void		*mlx_ptr;
	void		*win_ptr;
	int			width;
	int			height;
	int			i;
	int			j;
	int			x;
	int			y;
	int			s;
	int			player_x;
	int			player_y;
	int			Ennemy_x;
	int			Ennemy_y;
	int			Nombre_Pas;
	int			Collectibles;
	char		**map;
	t_img		img;
	t_sprites	*sprites;
	t_list		*lst;
	int			cur_img;
}	t_data;

int		get_next_line(int fd, char **line);
void	Initialisation_Structure(t_data *data);
int		Calcul_Tableau_Map(t_data *data, char **argv, t_list **lst);
int		main(int argc, char **argv);
int		Calcul_Len_x(t_data *tab, char **argv);
int		check_Errors(t_data *data, t_list **lst);
int		handle_keypress(int keysym, t_data *data);
int		render(t_data *data);
int		main(int argc, char **argv);
int		check_1_Around_Rectangle(t_data *data, t_list **lst);
int		check_If_1_Everywhere(t_data *data, t_list **lst);
int		Check_All_Letters(t_data *data, t_list **lst);
int		is_charset(t_list *tmp, char c);
int		Check_All_Letters2(t_data *data, t_list *tmp, int j);
int		check_Other_Letters(t_data *data, t_list **lst);
int		check_If_Ber(char **argv);
void	Affichage_Game(t_data *data);
int		affichage_Sprites(t_data *data);
void	creation_Sprites(t_data *data);
void	affichage_Sprites_Screen(t_data *data);
void	Calcul_Width_Height(t_data *data);
void	Deplacement_Personnage(t_data *data, t_list **lst);
void	Deplacement_Personnage_Droite(t_data *data);
void	Deplacement_Personnage_Gauche(t_data *data);
void	Deplacement_Personnage_Up(t_data *data);
void	Deplacement_Personnage_Down(t_data *data);
void	Calcul_Tableau_2_Dimensions(t_data *data, t_list *tmp);
void	Coordonnees_Personnages(t_data *data);
void	Affichage_Deplacement_Image_Droite(t_data *data);
void	Affichage_Deplacement_Image_Gauche(t_data *data);
void	Affichage_Deplacement_Image_Down(t_data *data);
void	Affichage_Deplacement_Image_Up(t_data *data);
int		Check_If_P_Superieur_Zero(t_list *tmp, t_data *data, int i);
int		Check_1_Around_Rectangle2(t_list *tmp2,
			t_list *tmp, t_data *data, int i);
int		Check_1st_Line(t_list *tmp, int i);
int		Check_Last_Line(t_list *tmp);
int		Check_If_Other_Letters(int C, int E, int P, int Zero);
void	Affichage_Sprites_Screen2(t_data *data);
void	Calcul_Nombre_Collectible(t_data *data);
int		Free_All_Fonctions(t_data *data);
void	Free_Double_Tableau(t_data *data);
void	Collectibles_Found_Exit_Found(t_data *data);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	*ft_calloc(size_t count, size_t size);
t_list	*ft_lstnew(char *content);
t_list	*ft_lstlast(t_list *lst);
void	*ft_memset(void *ptr, int value, size_t num);
size_t	ft_strlen(const char *str);
void	Display_Map(t_data *data);
void	Coordonnees_Ennemy(t_data *data);
void	Deplacements_Ennemie1_Droite(t_data *data);
void	Deplacements_Ennemie1_Down(t_data *data);
void	Deplacements_Ennemie1_Up(t_data *data);
void	Deplacements_Ennemie1_Gauche(t_data *data);
void	creation_Sprites2(t_data *data, int img_height, int img_width);
void	Animation_Personnage_Down_Launch(t_data *data);
void	Animation_Personnage_Gauche(t_data *data);
void	Animation_Personnage_Down(t_data *data);
void	Animation_Personnage_Droite(t_data *data);
void	Animation_Personnage_Up(t_data *data);
void	Animation_Ennemy_Gauche(t_data *data);
void	Animation_Ennemy_Droite(t_data *data);
void	Animation_Ennemy_Up(t_data *data);
void	Animation_Personnage_Ennemy_Launch(t_data *data);
void	Animation_Ennemy_Down(t_data *data);
void	Animation_Defaite(t_data *data);
void	Animation_Defaite2(t_data *data, int i);
void	Creation_Sprites3(t_data *data, int img_height, int img_width);
void	Animation_Kamehameha(t_data *data);
int		Animation_Kamehameha2(t_data *data, int i);
int		Animation_Kamehameha3(t_data *data, int i);
void	Animation_Kamehameha4(t_data *data, int i); 

#endif