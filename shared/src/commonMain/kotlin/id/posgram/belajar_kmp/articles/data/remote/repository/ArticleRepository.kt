package id.posgram.belajar_kmp.articles.data.remote.repository

import id.posgram.belajar_kmp.articles.data.local.ArticlesDataSource
import id.posgram.belajar_kmp.articles.data.model.ArticleRaw
import id.posgram.belajar_kmp.articles.data.remote.service.ArticleService

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
