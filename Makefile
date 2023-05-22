CXX = c++
CXXFLAGS = -std=c++11

NAME = a
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf
SRCS = main.cpp \
		Server.cpp \
		Member.cpp \
		ApplyInfo.cpp \
		CompanyMember.cpp \
		GeneralMember.cpp \
		RecruitInfo.cpp \
		Server.cpp \
		BasicUI.cpp \
		BasicController.cpp \
		RegisterMember.cpp \
		RegisterMemberUI.cpp \
		LoginUI.cpp \
		Login.cpp \
		LogoutUI.cpp \
		Logout.cpp \
		RegisterRecruitInfo.cpp \
		RegisterRecruitInfoUI.cpp \
		GetRecruitInfoList.cpp \
		GetRecruitInfoListUI.cpp \
		ApplyRecruitInfo.cpp \
		ApplyRecruitInfoUI.cpp \

all: ${NAME}

.c.o:
	${CXX} ${CXXFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CXX} -o $@ $^

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS}
	${RM} ${NAME}

re:
	make fclean
	make all

.PHONY: all clean fclean re