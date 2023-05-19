CXX = c++
CXXFLAGS = -std=c++11

NAME = a
OBJS = ${SRCS:.cpp=.o}
RM = rm -rf
SRCS = main.cpp \
		Member.cpp \
		ApplyInfo.cpp \
		CompanyMember.cpp \
		GeneralMember.cpp \
		RecruitInfo.cpp \

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