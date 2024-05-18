package id.posgram.belajar_kmp.articles.local

import id.posgram.belajar_kmp.articles.model.ArticleRaw
import posgram.belajar_kmp.db.ArticleDB


class ArticlesDataSource(private val database: ArticleDB) {

    fun getAllArticles(): List<ArticleRaw> =
        database.articleDBQueries.selectAllArticle(::mapToArticleRaw).executeAsList()

    fun insertArticles(articles: List<ArticleRaw>) {
        database.articleDBQueries.transaction {
            articles.forEach { articleRaw ->
                insertArticle(articleRaw)
            }
        }
    }

    fun clearArticles() =
        database.articleDBQueries.removeAllArticle()

    private fun insertArticle(articleRaw: ArticleRaw) {
        database.articleDBQueries.insertArticle(
            articleRaw.title,
            articleRaw.desc,
            articleRaw.date,
            articleRaw.imageUrl
        )
    }

    private fun mapToArticleRaw(
        title: String,
        desc: String?,
        date: String,
        url: String?
    ): ArticleRaw =
        ArticleRaw(
            title,
            desc,
            date,
            url
        )
}