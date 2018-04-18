#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void Intro();
void Real_Intro();
void E_Real_Intro();
void Mode();
void Choices();
void K_choices();


void Menu();
void Start();
void Option();
void Explanation();
void End();
void developer();

void K_menu();
void K_start();
void K_option();
void K_explanation();
void K_developer();

char nInput[5] = { 0 };
char back[10] = { 0 };

void Intro()
{
	messagePrint("NULL", NULL, "\n  영진이의 모험(수정판)\n  Youngjin's adventure(modify a design version)\n\n");
	messagePrint("NULL", NULL, "\n  made by C.W.K\n\n");
	messagePrint("NULL", NULL, "\n  이 게임은 다소 불건전한 요소가 포함되어 있습니다.\n  This game contains some unwholesome constituent.\n\n");
	messagePrint("NULL", NULL, "\n  이 게임의 제작자는 영어를 잘 못합니다.\n  The creators of this game is not good at English.\n\n");
	messagePrint("NULL", NULL, "\n  이 게임의 개발자는 영어를 못하기에 한국어 판을 권장 드립니다.\n  The developers of this game are not good at English,\n  so I recommend the Korean version.\n\n");
}

void Real_Intro()
{
	messagePrint("NULL", NULL, "\n  역시 영진이의 러브코미디는 잘못 되었다.\n\n");
	messagePrint("NULL", NULL, "\n  made by C.W.K\n\n");
	messagePrint("NULL", NULL, "\n  시범용 게임입니다. 번역 혹은 다른 오류를 발견하시면 말씀해 주시길 바랍니다.\n\n");
	messagePrint("NULL", NULL, "\n  끝\n\n");
}

void E_Real_Intro()
{
	messagePrint("NULL", NULL, "\n  Youngjin's love comedy was wrong\n\n");
	messagePrint("NULL", NULL, "\n  made by C.W.K\n\n");
	messagePrint("NULL", NULL, "\n  It's a demonstration game. Please let me know if you find any translation or other error.\n\n");
	messagePrint("NULL", NULL, "\n  finish\n\n");
}

void Mode()
{
	system("cls");
	printf("\n  원하시는 모드를 선택해 주세요. \n  Please select the desired mode.\n\n");

	printf("  숫자를 입력하면 적용됩니다.\n  Enter a number to apply\n\n");
	printf("  1. 한국어\n");
	printf("  2. English\n\n");

	printf(" ⇒ ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		Menu();
	}
}

void Menu()
{
	printf("  ★YoungJin's Adventure★\n\n");

	printf(" 1. start\n");
	printf(" 2. explanation\n");
	printf(" 3. option\n");
	printf(" 4. developer\n");
	printf(" 5. Select language\n");
	printf(" 6. end\n\n");

	printf(" ⇒ ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		Start();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		Explanation();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		Option();
	}
	else if (strcmp(nInput, "4") == 0)
	{
		system("cls");
		developer();
	}
	else if (strcmp(nInput, "5") == 0)
	{
		system("cls");
		Mode();
	}
	else if (strcmp(nInput, "6") == 0)
	{
		system("cls");
		End();
	}
}

void Start()
{
	messagePrint("NULL", NULL, "XX. XX. 20XX (M/D/Y)\n");
	messagePrint("NULL", NULL, "Youngjin is running late for school today.\n");
	messagePrint("NULL", NULL, "Youngjin is running around with bread in his mouth like a main characterin a love comedy.");
	messagePrint("NULL", NULL, "And it was quite obvious that Youngjin bumped into someone at the corner.\n");
	messagePrint("NULL", NULL, "And the bread fell off.\n");
	messagePrint("NULL", NULL, "But like in many love comedies, no one begrudged the falling bread.\n");
	messagePrint("? ? ?", 12, "Auuuu.....\n");
	messagePrint("Youngjin", 12, "Oh! I'm Sorry!\n");
	messagePrint("Youngjin", 12, "Huh? How about you?\n");
	messagePrint("NULL", NULL, "Who was standing there was the same classmate Sim youngrae(♂).\n");
	messagePrint("NULL", NULL, "Yes. For him, love comedy is a comic story.\n");
	messagePrint("Sim youngrae", 12, "Ao, don't have Ssagbagaji man! (Koran bad world)\n");
	messagePrint("NULL", NULL, "The word that came out of his mouth was a word that I could not think of as someone who had said \"Auuuu...\" before.\n");
	messagePrint("NULL", NULL, "What shall I say??\n\n");

	Choices();
}

void Explanation()
{
	printf("  manual: Enter a number to select an choices.\n\n");

	printf("  Game description: This game is a story of two boy Park youngjin and Kim youngrae, all of which are fictional and have nothing to do with the real person.\n\n");
	printf("  Both Park youngjin, Kim youngrae and developer used aliases.\n\n");

	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" ⇒ ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		Menu();
	}
	else
	{
		printf("  Please enter the correct number.\n");
		_getch();
		Explanation();
	}
}

void Option()
{
	printf("     404\n\n  Unable to set.\n\n");

	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" ⇒ ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		Menu();
	}
	else
	{
		printf("  Please enter the correct number.\n");
		_getch();
		Option();
	}
}

void developer()
{
	printf("  [administrator]\n  Seo dongyoung\n\n");
	printf("  [story]\n  Seo dongyoung\n\n");
	printf("  [help]\n  Jeong jihyeon\n  Seong gihyeon\n  Kim dohun\n  Kim youngrae\n\n");
	printf("  [cast]\n  Kim youngrae\n  Park youngjin\n  Seodongyoung\n\n");
	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" ⇒ ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		Menu();
	}
	else
	{
		printf("  Please enter the correct number.\n");
		_getch();
		developer();
	}
}

void End()
{
	exit(0);
}

void Choices()
{
	printf("  1. Fucking bitch, you are dead today.\n");
	printf("  2. Don't have Ssagbagaji bitch, you are dead today.\n");
	printf("  3. Oh, my God. I'm right about my mistake, but don't you think that's too harsh??\n\n");

	printf(" ⇒ ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		
		messagePrint("NULL", NULL, "On that day, youngjin lost to youngrae and could not lift his face.\n");
		messagePrint("NULL", NULL, "BAD END1\n  It was stronger than I thought.\n\n\n");
		system("cls");
		Menu();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		messagePrint("NULL", NULL, "On that day, youngjin lost to youngrae and could not lift his face.\n");
		messagePrint("NULL", NULL, "BAD END2\n  Don't have Ssagbagaji man.\n\n");
		system("cls");
		Menu();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		messagePrint("Sim youngrae", 12, "Auuuu... I'm the only bad guy if you say that blockhead...\n");
		messagePrint("NULL", NULL, "Youngrae was blushing somewhere.\n");
		messagePrint("NULL", NULL, "But our protagonist, Sim youngjin, who is so insensitive ...\n");
		messagePrint("NULL", NULL, "What he said after much thought....\n");
		messagePrint("NULL", NULL, ".....\n");
		messagePrint("Youngjin", 12, "Well, Is it going to be like that?\n");
		messagePrint("Sim youngrae", 12, "EHyu...\n");
		messagePrint("Youngjin", 12, "Why? What are you worried about?\n");
		messagePrint("NULL", NULL, "youngjin, who has the tendency of a male protagonist of a common love comedy...\n");
		messagePrint("NULL", NULL, "Now the Love Comedies standard...\n");
		messagePrint("NULL", NULL, "The advent of new rivals!\n");
		messagePrint("???", 12, "What are you doing with youngjin??\n");
		messagePrint("Youngjin", 12, "Youngjin: Oh...? simyoung..?\n");
		messagePrint("Seo simyoung", 12, "What are you doing with Youngjin?!\n");
		messagePrint("NULL", NULL, "A boy who seems to have something to do with youngjin...\n");
		messagePrint("Sim youngrae", 12, "It's you. youngjin's boyfriend...\n");
		messagePrint("Youngjin", 12, "???\n");
		messagePrint("Seo simyoung", 12, "I'm sorry, but Youngjin is mine. Don't even look at it.\n");
		messagePrint("Youngjin", 12, "??????\n");
		messagePrint("NULL", NULL, "I don't think Youngjin understood it alone..\n");
		messagePrint("NULL", NULL, "The two boys around Youngjin ... What is their fate??\n");
		_getch();
		E_Real_Intro();
	}
}

void K_menu()
{
	printf("  ★영진이의 모험★\n\n");

	printf(" 1. 시작\n");
	printf(" 2. 설명\n");
	printf(" 3. 설정\n");
	printf(" 4. 제작자\n");
	printf(" 5. 언어 선택\n");
	printf(" 6. 끝내기\n\n");

	printf(" ⇒ ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		K_start();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		K_explanation();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		K_option();
	}
	else if (strcmp(nInput, "4") == 0)
	{
		system("cls");
		K_developer();
	}
	else if (strcmp(nInput, "5") == 0)
	{
		system("cls");
		Mode();
	}
	else if (strcmp(nInput, "6") == 0)
	{
		system("cls");
		_getch();
		End();
	}
	else
	{
		printf("  올바른 수를 입력해 주세요.\n\n");
		K_menu();
	}
}

void K_start()
{
	messagePrint("NULL", NULL, "20XX년 XX월 XX일\n");
	messagePrint("NULL", NULL, "영진이는 오늘도 학교에 늦어서 달리고 있다.\n");
	messagePrint("NULL", NULL, "영진이는 러브 코미디의 주인공처럼 입에는 식빵을 물고 달리고 있다.\n");
	messagePrint("NULL", NULL, "그리고 정말 뻔하게도 영진이는 뛰다가 코너에서 누군가와 부딪혔다.\n");
	messagePrint("NULL", NULL, "그리고 식빵은 떨어졌다.\n");
	messagePrint("NULL", NULL, "하지만 많은 러브 코미디에서 그렇듯 누구도 떨어진 식빵은 아까워 하지 않았다.\n");
	messagePrint("???", 12, "아야야.....\n");
	messagePrint("영진", 12, "아!죄송합니다!\n");
	messagePrint("영진", 12, "어? 너는?\n");
	messagePrint("NULL", NULL, "그곳에 서 있던 것은 같은 반 친구 심영래(♂).\n");
	messagePrint("NULL", NULL, "그렇다. 그에게 러브 코미디란 만화속 이야기이다.\n");
	messagePrint("심영래", 12, "아오 이런 싹바가지 없는 새끼.\n");
	messagePrint("NULL", NULL, "그에 입에서 나온 말은 아까전 \"아야야...\"라고 했던 사람이라고 생각할 수 없는 말이었다.\n");
	messagePrint("NULL", NULL, "무슨 말을 할까?\n\n", 10);

	K_choices();
}

void K_explanation()
{
	printf("  조작법: 숫자를 입력하여 선택지를 선택합니다.\n\n");

	printf("  게임 설명: 이 게임은 박영진이라는 소년과 김영래라는 사람의 이야기로 이 게임에 나온 내용은 모두 허구이며,실제 인물과는 관계가 없습니다.\n\n");
	printf("  박영진과 김영래 모두 가명을 사용했습니다.\n\n");

	printf("  뒤로 가고 싶으면 \"1\"을 입력하세요.\n\n");
	printf(" ⇒ ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else
	{
		printf("  올바른 수를 입력하여 주세요.\n");
		_getch();
		K_explanation();
	}
}

void K_option()
{
	printf("        404\n\n  설정할 수 없습니다.\n\n");

	printf("  뒤로 가고 싶으면 \"1\"을 입력하세요.\n\n");
	printf(" ⇒ ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else
	{
		printf("  올바른 수를 입력하여 주세요.\n");
		_getch();
		K_option();
	}
}

void K_developer()
{
	printf("  [총괄]\n  서동영\n\n");
	printf("  [스토리]\n  서동영\n\n");
	printf("  [도움을 준 사람]\n  정지현\n  성기현\n  김도훈\n  김영래\n\n");
	printf("  [출연]\n  서동영\n  김영래\n  박영진\n\n");
	printf("  뒤로 가고 싶으면 \"1\"을 입력하세요.\n\n");
	printf(" ⇒ ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else
	{
		printf("  올바른 수를 입력하여 주세요.\n");
		_getch();
		K_developer();
	}
}

void K_choices()
{
	printf("  1. 이 미친놈이 넌 오늘 뒤졌다\n");
	printf("  2. 이런 싹바가지 없는 새끼 넌 오늘 뒤졌다\n");
	printf("  3. 어머 영래야 내가 잘못한 것은 맞지만 그 말은 너무 심하지 않니?\n\n");

	printf(" ⇒ ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		messagePrint("NULL", NULL, "그날 영진이는 영래한테 발리고 얼굴을 못 들고 다녔다.\n");
		messagePrint("NULL", NULL, "BAD END1\n  생각보다 강했다.\n\n");
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		messagePrint("NULL", NULL, "그날 영진이는 영래한테 처참히 발리고 얼굴을 못 들고 다녔다.\n");
		messagePrint("NULL", NULL, "BAD END2\n  싸가지 없는 놈.\n\n");
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		messagePrint("심영래", 12, "아니 니가 그렇게 말하면 나만 나쁜놈 되잖아 이 싹바가지 없는 놈아...\n");
		messagePrint("NULL", NULL, "영래는 어딘가 모르게 볼이 빨개져 있었다.\n");
		messagePrint("NULL", NULL, "하지만 눈치 없는 우리의 주인공 심영진...\n");
		messagePrint("NULL", NULL, "그가 고민 끝에 꺼낸말은....\n");
		messagePrint("NULL", NULL, ".....\n");
		messagePrint("NULL", NULL, "\n");
		messagePrint("심영진", 12, "뭐... 그렇게 되는 건가?\n");
		messagePrint("심영래", 12, "에휴.....\n");
		messagePrint("심영진", 12, "왜? 무슨 고민있어?\n");
		messagePrint("NULL", NULL, "흔한 러브 코메디의 남자 주인공의 성향을 빼다 박은 영진...\n");
		messagePrint("NULL", NULL, "이제 러브 코메디의 정석...\n");
		messagePrint("NULL", NULL, "새로운 라이벌 등장\n");
		messagePrint("???", 12, "너 지금 영진이랑 뭐하는 거야?\n");
		messagePrint("심영진", 12, "어...? 심영아...\n");
		messagePrint("서심영", 12, "너 지금 영진이랑 뭐하는 거야!\n");
		messagePrint("NULL", NULL, "무언가 영진이랑 관계 있어 보이는 소년 등장...\n");
		messagePrint("심영래", 12, "너구나 영진이의 남자친구...\n");
		messagePrint("심영진", 12, "???\n");
		messagePrint("서심영", 12, "미안하지만 영진이는 내꺼야 눈독 들이지마\n");
		messagePrint("심영진", 12, "??????\n");
		messagePrint("NULL", NULL, "아무래도 영진이 혼자 이해 못 한것 같다.\n");
		messagePrint("NULL", NULL, "영진이를 둘러싼 두 명의 소년들... 그 들의 운명은?\n");
		_getch();
		system("cls");
		Real_Intro();
	}
}

int main()
{
	Intro();
	Mode();
}