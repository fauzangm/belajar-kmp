package id.posgram.belajar_kmp.articles.repository

import id.posgram.belajar_kmp.articles.local.ArticlesDataSource
import id.posgram.belajar_kmp.articles.model.ArticleRaw
import id.posgram.belajar_kmp.articles.service.ArticleService

class ArticleRepository(
    private val dataSource: ArticlesDataSource,
    private val service: ArticleService
) {

    suspend fun getArticles() : List<ArticleRaw>{
        val articlesDB =  dataSource.getAllArticles()

        if (articlesDB.isEmpty()){
            val fetch = service.fetchArticles()
            dataSource.insertArticles(fetch)
            return  fetch
        }
        return articlesDB
    }
}