{r Agglomerative}
head(iris)
clusters<-hclust(iris[,3:4])
plot(clusters)
clusterCut<-hclust(dist(iris[,3:4]),method="average")
plot(clusters)
clusterCut<-cutree(clusters,3)
table(clusterCut,iris$Species)
clusters<-hclust