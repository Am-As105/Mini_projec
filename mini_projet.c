#include <stdio.h>


int 	sort_small(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
    return tab[0];
}
int 	sort_big(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
    return tab[4];
}

int main()
{
    int note1, note2 , note3, note4 , note5;


    printf("ENTER NOTE 1 :");
    scanf("%d", &note1);

    printf("ENTER NOTE 2 :");
    scanf("%d", &note2);

    printf("ENTER NOTE 3 :");
    scanf("%d", &note3);

    printf("ENTER NOTE 4 :");
    scanf("%d", &note4);

    printf("ENTER NOTE 5 :");
    scanf("%d", &note5);

    int total = note1 + note2 + note3 + note4 + note5;
    printf("total des notes = %d \n",  total);
    printf("moyenne  notes = %d \n",  total / 5);
    
    int arr[5] = { note1  , note2 , note3 , note4 , note5};
    printf("la note la plus  haute = %d \n" , sort_big(arr, 5));
    printf("la note la pllus basse = %d \n " , sort_small(arr, 5));

}