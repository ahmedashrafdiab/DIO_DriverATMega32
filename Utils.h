#ifndef UTILS_H_
#define UTILS_H_

#define  SET_BIT(REG,BIT)   (REG=REG|(1<<BIT))
#define  CLR_BIT(REG,BIT)   (REG=REG&(~(1<<BIT)))
#define  GET_BIT(REG,BIT)   ((REG>>BIT)&1)
#define  TOGGLE_BIT(REG,BIT)   (REG = REG ^ (1<<BIT))



#endif /* UTILS_H_ */