package id.posgram.belajar_kmp.articles.usecase

import id.posgram.belajar_kmp.articles.model.Article
import id.posgram.belajar_kmp.articles.model.ArticleRaw
import id.posgram.belajar_kmp.articles.service.ArticleService

class ArticlesUseCase(private val service: ArticleService) {

    suspend fun getArticles(): List<Article> {
        val articleRaw = service.fetchArticles()
        return mapArticles(articleRaw)
    }

    private fun mapArticles(articleRaw: List<ArticleRaw>): List<Article> = articleRaw.map { raw ->
        Article(
            raw.title,
            raw.desc ?: "Click to find out more",
            raw.date,
            raw.imageUrl
                ?: "https://image.cnbcfm.com/api/v1/image/107326078-1698758530118-gettyimages-1765623456-wall26362_igj6ehhp.jpeg?v=1698758587&w=1920&h=1080"
        )
    }
}