# page 0

### Minitalk
> (Summary: The purpose of this project is to code a small data exchange program using UNIX signals.)
#### 요약 : 이 프로젝트는 UNIX signal을 이용한 소규모 데이터 교환 프로그램을 작성하는 데에 있습니다.

# page 1

Contents
| Chapter | Contents | Page |
|:---:|:---|:---:|
| I | [__서문__]() | 2 |
| II | [__기본 지시사항__]() | 3 |
| III | [__필수 파트__]() |  5 |
| IV | [__보너스 파트__]() |  6 |
| V | [__제출 및 동료 평가__]() |  7 |


# page 2

> ### Chapter I
> #### Foreword
> The cis-3-Hexen-1-ol, also known as (Z)-3-hexen-1-ol and leaf alcohol, is a colorless oily liquid with an intense grassy-green odor of freshly cut green grass and leaves.
> It is produced in small amounts by most plants and it acts as an attractant to many predatory insects. cis-3-Hexen-1-ol is a very important aroma compound that is used in fruit and vegetable flavors and in perfumes.
> The yearly production is about 30 tonnes
### 챕터 1
#### 서문
`잎 알코올` 내지는 `(Z)-3-헥센-1-올`로도 잘 알려진 `시스-3-헥센-1-올`은 갓 잘라낸 푸른 잔디와 잎에서 나는 듯한 풀내음을 가진 무색 유성 액체입니다.
대부분의 식물에서 소량으로 만들어지는 이 액체는 많은 육식곤충을 끌어들이는 미끼이기도 합니다. `시스-3-헥센-1-올`은 과일이나 채소의 맛과 향을 내는 아주 중요한 역할을 하는 방향 화합물이기도 합니다.
이 물질의 연간 생산량은 약 30톤 입니다.

# page 3

> ### Chapter II
> ### Common Instructions

> - Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
> - Your functions should not quit unexpectedly `segmentation fault, bus error, double free, etc` apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
> - All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
> - If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags `-Wall, -Wextra and -Werror,` and your Makefile must not relink.
> - Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
> - To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h}. Mandatory and bonus part evaluation is done separately.
> - If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
> - We encourage you to create test programs for your project even though this work **won’t have to be submitted and won’t be graded.** It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
> - Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.
> - The executable files must be named client and server.

### 챕터 2
### 기본 지시사항

- 여러분의 프로젝트는 Norminette 기준에 따라 작성되어야 합니다. 보너스 파일이나 함수가 있는 경우, 해당 파일/함수도 Norminette 기준을 체크하는 데에 포함해야 하며, Norminette 에러가 발생할 시에는 여러분의 프로젝트는 0점을 받게 됩니다.
- 정의되지 않는 동작인 경우 이외에는 여러분이 작성하신 프로그램이 예기치 않게 종료되면 안됩니다 `segmentation fault, bus error, double free 등`. 만약 여러분의 프로그램이 예기치 않게 종료된다면, 작동하지 않은 것으로 간주되어 평가에서 0점을 받게 됩니다.
- 힙에 선언한 모든 메모리 영역은 free로 처리되어야 합니다. 메모리 누수는 용납되어서는 안됩니다.
- 서브젝트가 요구할 시 Makefile을 제출하여야 합니다. 여러분이 작성하신 Makefile은 `-Wall -Wextra and -Werror` 플래그에 따라 컴파일을 해야하며, 컴파일 이후에 다시 리링크되지 않아야 합니다.
- 여러분이 작성하신 Makefile 에서는 다음의 룰을 정의하고 있어야 합니다. `$(NAME), all, clean, fclean,s re`
- 프로젝트에 보너스를 제출하려면, Makefile에 `bonus` 규칙을 포함해야하며, 해당 규칙은 프로젝트의 메인 파트에서 금지되었던 모든 다양한 헤더, 라이브러리,또는 함수들을 Makefile에 추가할 수 있습니다. 보너스는 반드시 _bonus.{c/h} 라는 다른 파일에 있어야 합니다. 필수 파트와 보너스 파트는 개별적으로 평가될 것입니다.
- 해당 프로젝트에서 `libft`를 사용하는 경우, 해당 라이브러리의 소스와 Makefile을 `libft` 폴더에 복사해야 합니다. 프로젝트의 Makefile은 Makefile을 사용하여 라이브러리를 컴파일한 다음에 여러분이 작성하신 프로젝트를 컴파일 해야합니다.
- **제출할 필요가 없고 채점되지 않더라도** 우리는 여러분이 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 이 프로그램은 여러분의 과제물과 동료들의 과제물을 쉽게 검증할 기회를 제공할 것입니다. 평가하는 동안 이 테스트 프로그램들이 특히 유용하다는 것을 알게 될 것입니다. 평가 중에는 여러분의 테스트 프로그램과 평가 받는 동료의 테스트 프로그램들을 자유롭게 사용할 수 있습니다.
- 할당된 git 저장소에 과제물을 제출하세요. 오직 git 저장소에 있는 과제물만 채점 할 것입니다. Deepthought가 평가를 하게 된다면, 동료평가 이후에 수행됩니다. 만약 Deepthought가 평가 중 오류가 발생한다면, 그 즉시 평가는 중지될 것입니다.
- 실행파일은 각각 `client`와 `server`로 이름을 지어야 합니다.


# page 4

> You have to handle errors sensitively. In no way can your program quit unexpectedly (Segmentation fault, bus error, double free, etc).
> Your program cannot have memory leaks.
> On the mandatory part you are allowed to use the following functions:
> 
- 여러분은 세심하게 에러를 처리하셔야 하며, 여러분이 작성하신 프로그램이 예기치 않게 종료되면 안됩니다 (Segmentation fault, bus error, double free, 등).
- 여러분이 작성하신 프로그램에서 메모리 누수가 발생하면 안됩니다.
- 필수파트를 위해서 다음의 함수만을 사용하실 수 있습니다. :
    - write
    - signal
    - sigemptyset
    - sigaddset
    - sigaction
    - kill
    - getpid
    - malloc 
    - free
    - pause
    - sleep
    - usleep
    - exit

# page 5

> ### Chapter III
> #### Mandatory Part
> - You must create a communication program in the form of a client and server.
> - The server must be launched first, and after being launched it must display its PID.
> - The client will take as parameters:
    - The server PID.
    - The string that should be sent.
> - The client must communicate the string passed as a parameter to the server. Once the string has been received, the server must display it.
> - Communication between your programs should **ONLY** be done using **UNIX signals**.
> - The server must be able to display the string pretty quickly. By quickly we mean that if you think it is too long, then it is probably too long (hint: 1 second for 100 characters is **COLOSSAL**)
> - Your server should be able to receive strings from several clients in a row, without needing to be restarted.
> - You can only use the two signals **SIGUSR1 and SIGUSR2**.

### 챕터 3
#### 필수 파트
- 여러분께서는 클라이언트와 서버가 서로 통신하는 프로그램을 작성하셔야 합니다.
- 서버와 클라이언트 중 서버가 먼저 실행되어야 하며, 클라이언트가 런치가 될 때에  PID를 표시해야 합니다.
- 클라이언트가 실행될 때 다음의 매개변수를 받습니다 :
    - 서버 PID
    - 전송할 문자열
-  클라이언트는 매개변수로 전달한 문자열을 서버로 통신해야 합니다. 서버는 문자열이 수신되면 해당 문자열을 표시해야 합니다.
- 여러분이 작성하신 서버와 클라이언트의 통신은 **오직 UNIX signal**을 이용하여야만 합니다.
-  서버는 문자열을 매우 빠른 속도로 표시할 수 있어야 합니다. 즉, 표시되는 시간이 너무 길다고 생각된다면, 그건 너무 길다고 여겨야 합니다. (힌트 : 100개의 문자로 이루어진 문자열을 표시하는 데 1초가 걸린다면 그건 **어마어마하게 긴 것**입니다.)
-  서버가 재시작할 필요없이 여러 클라이언트로부터 문자열을 연속으로 수신할 수 있어야 합니다.
-  **SIGUSR1**과 **SIGUSR2** 두 신호만 사용할 수 있습니다.

# page 6

> ### Chapter IV
> #### Bonus
> - Add a small reception acknowledgment system.
> - support Unicode characters!
### 챕터 4
#### 보너스
- 소규모 수신 확인 시스템을 추가해보세요.
- 유니코드 문자도 지원하도록 해보세요.

# page 7

> ### Chapter V
> #### Submission and peer correction
> Submit your work on your GiT repository as usual. Only the work on your repository will be graded.

### 챕터 5
#### 제출 및 동료평가
평소처럼 여러분의 GIT 레포지토리에 작업물을 제출하시면 됩니다. 제출하신 작업물만 평가에 반영될 것입니다.
