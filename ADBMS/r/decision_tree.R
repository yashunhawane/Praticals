install.packages("party")
library("party")
print(head(readingSkills))
input.dat<-readingSkills[c(1:105),]
png(file="decision_tree.png")
output.tree<-ctree(nativeSpeaker ~ age + shoeSize + score,data = input.dat)
plot(output.tree)
dev.off()