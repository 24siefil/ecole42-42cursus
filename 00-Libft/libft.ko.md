# page 0

나만의 첫 번째 라이브러리.



요약 : 본 프로젝트의 목적은 흔히 쓰이는 함수들을 재편성한 C 라이브러리를 구현하기 위한 것입니다. 그것은 다른 모든 프로젝트에서 사용할 수 있게 될 것입니다.

# page 2

Chapter 1

Introduction



매우 유용한 표준 함수들을 사용할 수 없을 때 C 프로그래밍이 매우 지루해질 수 있습니다.
본 프로젝트는 이런 함수들을 다시 쓰고, 그것들을 이해하고, 그 함수들의 사용법을 배울 기
회를 제공합니다. 이 라이브러리는 나중에 진행할 C 프로젝트에 도움이 될 것입니다.

본 프로젝트를 통해서, 우리는 여러분이 만든 함수 리스트를 확장할 수 있는 기회를 제공합니
다. 시간을 내서 일 년 내내 자신만의 libft를 확장해 보세요.

# Page 3

Chapter 2

Common Instructions



* 프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 있는 경우,해당 파일/함수
  들은 norm 검사에 포함되며, norm error가 있을 시, 0점을 받게 될것입니다.
* 함수들은 정의되지 않은 행동들을 제외하고 예기치 않게 중단되어서는 안 됩니다.(예를 들어,
  segmentation fault, bus error, double free 등.) 만약 이렇게 중단되면, 여러분의 프로젝트는 작동하지 않는 것으로 여겨지고 평가에서 0점을 받을 것입니다.
* 필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용
  납되지 않습니다.
* 해당 과제에서 요구한 경우 Makefile 을 제출해야하며, 해당 Makefile은 문제에서 제시된 결과물을 -Wall -Wextra -Werror 플래그과 함께 컴파일해야합니다. Makefile 은 relink 되어서는 안 됩니다.
* Makefile은 최소한 `$(NAME)`, `all`, `clean`, `fclean`, `re` 규칙을 포함해야 합니다.
* 프로젝트에 보너스를 제출하려면, Makefile에 `bonus` 규칙을 포함해야하며, 해당 규칙은 프로젝트의 메인 파트에서 금지되었던 모든 다양한 헤더, 라이브러리,또는 함수들을 Makefile에 추가할 수 있습니다. 보너스는 반드시 _bonus.{c/h} 라는 다른 파일에 있어야 합니다. 필수 파트와 보너스 파트는 개별적으로 평가될 것입니다.
* 프로젝트에서 libft 사용이 허가된 경우, 해당 소스들과 연관된 Makefile을 libft 폴더에 Makefile과 함께 복사해 넣어두어야 합니다. 프로젝트의 Makefile은 반드시 libft 의 Makefile을 사용하여 컴파일한 다음, 프로젝트 소스를 컴파일 해야만 합니다.
* 제출할 필요가 없고 채점되지 않더라도 우리는 여러분이 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 이 프로그램은 여러분의 과제물과 동료들의 과제물을 쉽게 검증할 기회를 제공할 것입니다. 평가하는 동안 이 테스트 프로그램들이 특히 유용하다는 것을 알게 될 것입니다. 평가 중에는 여러분의 테스트 프로그램과 평가 받는 동료의 테스트 프로그램들을 자유롭게 사용할 수 있습니다.
* 할당된 git 저장소에 과제물을 제출하세요. 오직 git 저장소에 있는 과제물만 채점 할 것입니다. Deepthought가 평가를 하게 된다면, 동료평가 이후에 수행됩니다. 만약 Deepthought가 평가 중 오류가 발생한다면, 그 즉시 평가는 중지될 것입니다.

# Page 4

Chpater 3

Mandatory part

```
Program name | libft.a
Turn in files | *.c, libft.h, Makefile
Makefile | Yes
External functs. | Detailed below
Libft authorized | Non-applicable
Description | 여러분의 교육과정에서 사용할 중요한 함수들이 들어있는 자신만의 라이브러리를 만드세요.
```

3.1 Technical considerations

* 전역 변수는 사용할 수 없습니다.
* 복잡한 함수를 작성하기 위해 하위 함수가 필요한 경우에는, 이러한 하위 함수를 라이브러리와
  함께 배포하지하지 않도록 static(정적)으로 정의해야 합니다. 이러한 습관은 이후 여러분이 프로젝트를 하는데 도움이 될 것입니다.

* 모든 파일을 저장소의 root 위치에 제출해주세요.

# Page 5

3.2 Part 1 - Libc functions

첫 번째 파트에서는, man에 정의되어 있는 대로 libc 함수들의 구성을 다시 구현해야합니다. 여러분의 함수들은 원본과 같은 형식의 프로토타입으로 선언해야하고 같은 방식으로 동작합니다. 함수의 이름 앞에는 “ft_”를 붙여야 합니다. 예를 들어 strlen은 다음과 같이 됩니다. ft_strlen.

```
노랭이
다시 구현해야하는 함수의 프로토타입의 일부는 “restrict” 한정자를 사용합니다. 이 키
워드는 c99 표준의 일부분입니다.
그러므로 이 키워드를 프로토타입에 포함시키는 것과 -std=c99 플래그를 사용하여 컴파일 하는 것은 금지됩니다.
```

아래의 함수들을 다시 구현해야 합니다. 이 함수들은 외부 함수들을 필요로 않습니다.

```
memset, bzero ...
```

아래의 함수들 또한 “malloc” 함수를 사용하여, 다시 구현해야 합니다.

```
strdup, calloc
```

# Page 6

3.3 Part 2 - Addtional fuctions

두 번째 파트에서는, libc에 포함되있지 않거나 다른 형식으로 포함된 함수들의 구성을 코드
화해야 합니다. 이러한 함수 중 일부는 파트1의 함수들을 쓰는 데 유용할 수 있습니다.

```
Function name | ft_substr
Prototype | char *ft_substr(char const *s, unsigned int start,
size_t len);
Turn in files | -
Parameters | #1. 하위 문자열을 만들 문자열. #2. 문자열 's'에 있는 하위 문자열의 시작 인덱스. #3. 하위 문자열의 최대 길이.
Return value | 하위 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 문자열 's'에서 하위 문자열을 반환. 하위 문자열은 인덱스 'start'에서 시작되며 최대 크기는 'len'이다.
```

```
Function name | ft_strjoin
Prototype | char *ft_strjoin(char const *s1, char const *s2);
Turn in files | -
Parameters | #1. 앞에 올 문자열. #2. 뒤에 올 문자열.
Return value | 새로운 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 새로운 문자열을 반환. 새로운 문자열은 문자열 's1'과 문자열 's2'의 연결된 형태.
```

```
Function name | ft_strtrim
Prototype | char *ft_strtrim(char const *s1, char const *set);
Turn in files | -
Parameters | #1. 제거될 문자열. #2. 제거할 참조 문자 집합.
Return value | 문자가 제거된 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 문자열의 처음과 끝에서 'set'에 지정된 문자가 제거된 문자열 's1'의 사본을 반환.
```

# page 7

```
Function name | ft_split
Prototype | char **ft_split(char const *s, char c);
Turn in files | -
Parameters | #1. 분할할 문자열. #2. 구분 문자.
Return value | 분할로 인한 새 문자열 배열. 할당 실패시 NULL.
External functs. | malloc, free
Description | malloc(3)을 할당하고 구분 문자 'c'를 사용하여 문자열 's'을 분할하여 얻은 새로운 문자열 배열을 반환. 그 배열은 NULL로 끝나야 합니다.
```

```
Function name | ft_itoa
Prototype | char *ft_itoa(int n);
Turn in files | -
Parameters | #1. 변환할 정수.
Return value | 정수를 나타내는 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 인수로 받은 정수를 나타내는 문자열을 반환. 음수 처리는 필수.
```

```
Function name | ft_strmapi
Prototype | char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Turn in files | -
Parameters | #1. 반복할 문자열. #2. 각 문자에 적용할 함수.
Return value | 'f'함수를 연속적으로 적용시킨 문자열.  할당 실패시 NULL.
External functs. | malloc
Description | 문자열 's'의 각 문자에 'f'함수를 연속적으로 적용시킨 새로운 문자열을 만들기. 새로운 문자열은 malloc(3)을 할당.
```

# page 8

```
Function name | ft_putchar_fd
Prototype | void ft_putchar_fd(char c, int fd);
Turn in files | -
Parameters | #1. 출력할 문자. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 문자 'c'를 주어진 파일디스크립터로 출력.
```

```
Function name | ft_putstr_fd
Prototype | void ft_putstr_fd(char *s, int fd);
Turn in files | -
Parameters | #1. 출력할 문자열. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 문자열 's'을 주어진 파일디스크립터로 출력.
```

```
Function name | ft_putendl_fd
Prototype | void ft_putendl_fd(char *s, int fd);
Turn in files | -
Parameters | #1. 출력할 문자열. #2. 쓰여질 파일디스크립터
Return value | None
External functs. | write
Description | 문자열 's'을 주어진 파일디스크립터로 출력하고 newline으로 끝내기.
```

```
Function name | ft_putnbr_fd
Prototype | void ft_putnbr_fd(int n, int fd);
Turn in files | -
Parameters | #1. 출력할 정수. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 정수 'n'을 주어진 파일디스크립터로 출력.
```

# Page 9

Chpater 4

Bonus part



필수적으로 해야 하는 모든 것을 성공적으로 끝냈다면, 한 걸음 더 나아가보는 것도 즐거운 일이 될 것입니다. 이 마지막 섹션을 보너스 점수로 볼 수 있습니다.

메모리와 문자열을 조작하는 함수를 갖는 것은 매우 유용하지만, 곧 리스트를 조작하는 함
수를 갖는 것이 훨씬 더 유용하다는 것을 알게 될 것입니다.

다음의 구조를 사용하여 리스트의 요소들을 표현하세요. 이 구조를 libft.h 파일에 추가해야
합니다.

​	make bonus 는 libft.a에 보너스 함수들을 추가할 것입니다.

이 파트의 헤더와 .c파일에 `_bonus` 를 추가할 필요는 없습니다. 자신의 보너스 함수들이 포함된 파일에만 `_bonus`를 추가하세요

```
typedef struct s_list
{
	void 			*content;
	struct s_list 	*next;
}				 	t_list;
```

여기 t_list 구조체의 필드에 대한 설명이 있습니다.

• content : 요소에 포함된 데이터. void 포인터는 어떠한 종류의 자료형이든 저장할 수
있습니다.
• next : 마지막 요소인 경우에는 NULL. 또는 다음 요소의 주소.

# Page 10

아래의 함수들은 리스트를 쉽게 사용할 수 있게 해줄 것입니다.

```
Function name | ft_lstnew
Prototype | t_list *ft_lstnew(void *content);
Turn in files | -
Parameters | #1. 새로운 요소를 만들 content.
Return value | 새로운 요소.
External functs. | malloc
Description | malloc(3)을 할당하고 새로운 요소를 반환. 변수 'content'는 매개변수 'content'의 값에 따라 초기화된다. 변수 'next'는 NULL로 초기화된다.
```

```
Function name | ft_lstadd_front
Prototype | void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files | -
Parameters | #1. 첫 번째 링크 리스트의 포인터 주소. #2. 리스트에 추가되기 위한 요소의 포인터 주소.
Return value | None
External functs. | None
Description | 리스트의 시작부분에 요소 'new'를 추가.
```

```
Function name | ft_lstsize
Prototype | int ft_lstsize(t_list *lst);
Turn in files | -
Parameters | #1. 리스트의 시작.
Return value | 리스트의 길이.
External functs. | None
Description | 리스트의 요소의 갯수를 셈.
```

```
Function name | ft_lstlast
Prototype | t_list *ft_lstlast(t_list *lst);
Turn in files | -
Parameters | #1. 리스트의 시작
Return value | 리스트의 마지막 요소.
External functs. | None
Description | 리스트의 마지막 요소를 반환.
```

# page 11

```
Function name | ft_lstadd_back
Prototype | void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files | -
Parameters | #1. 첫 번째 연결리스트의 포인터 주소 #2. 요소가 될 포인터 주소
Return value | None
External functs. | None
Description | 리스트의 끝에 'new' 요소를 추가.
```

```
Function name | ft_lstdelone
Prototype | void ft_lstdelone(t_list *lst, void (*del)(void *));
Turn in files | -
Parameters | #1. free할 요소 #2. content를 삭제하는데 사용되는 함수의 주소
Return value | None
External functs. | free
Description | 매개변수로 요소를 가져오고 매개변수로 주어진 함수 'del'을 적용시켜 요소의 content의 주소를 free하고 난 뒤 요소를 free. 'next'의 주소는 free되지 않아야함.
```

```
Function name | ft_lstclear
Prototype | void ft_lstclear(t_list **lst, void (*del)(void *));
Turn in files | -
Parameters | #1. 요소의 포인터 주소 #2. 요소의 content를 삭제하는데 사용되는 함수의 주소.
Return value | None
External functs. | free
Description | 함수 'del'과 free(3)을 사용하여, 주어진 요소와 해당 요소의 모든 후속 요소를 삭제하고 free함.
```

# Page 12

```
Function name | ft_lstiter
Prototype | void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files | -
Parameters | #1. 요소의 포인터 주소 #2. 리스트에 반복적으로 사용되는 함수의 주소
Return value | None
External functs. | None
Description | 리스트 'lst'를 반복하여 각 요소의 content에 함수 'f'를 적용시킴.
```

```
Function name | ft_lstmap
Prototype | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
Turn in files | -
Parameters | #1. 요소의 포인터 주소 #2. 리스트에 반복적으로 사용되는 함수의 주소 #3. 필요한 경우 요소의 content를 삭제하기위해 사용되는 함수의 주소
Return value | 새로운 리스트. 할당 실패시 NULL.
External functs. | malloc, free
Description | 리스트 'lst'를 반복하여 각 요소의 content에 함수 'f'를 적용. 함수 'f'를 연속적으로 적용시켜 새로운 리스트를 만듬. 필요한 경우 함수 'del'은 요소의 content를 삭제하는데 사용됨.
```

적합하다고 생각한다면, 자신의 libft에 어떠한 함수들도 자유롭게 추가시킬 수 있습니다.
