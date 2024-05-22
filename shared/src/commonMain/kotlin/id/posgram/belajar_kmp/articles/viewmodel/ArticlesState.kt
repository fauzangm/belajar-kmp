package id.posgram.belajar_kmp.articles.viewmodel

import id.posgram.belajar_kmp.articles.data.model.Article

data class ArticlesState (
    val articles: List<Article> = listOf(),
    val loading : Boolean = false,
    val error:String? = null
)