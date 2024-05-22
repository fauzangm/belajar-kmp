package id.posgram.belajar_kmp.articles.repository

import id.posgram.belajar_kmp.articles.local.ArticlesDataSource
import id.posgram.belajar_kmp.articles.model.ArticleRaw
import id.posgram.belajar_kmp.articles.service.ArticleService

class ArticleRepository(
    private val dataSource: ArticlesDataSource,
    private val service: ArticleService
) {

    suspend fun getArticles(fetch: Boolean): List<ArticleRaw> {
        if (fetch) {
            dataSource.clearArticles()
            return fetchArticle()
        }
        val articlesDB = dataSource.getAllArticles()
        println("Size article ${articlesDB.size}")
        if (articlesDB.isEmpty()) {
            return fetchArticle()
        }
        return articlesDB
    }

    private suspend fun fetchArticle(): List<ArticleRaw> {
        val fetch = service.fetchArticles()
        dataSource.insertArticles(fetch)
        return fetch
    }
}
