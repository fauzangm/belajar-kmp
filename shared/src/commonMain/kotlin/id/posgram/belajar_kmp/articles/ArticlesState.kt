package id.posgram.belajar_kmp.articles

import id.posgram.belajar_kmp.articles.model.Article

data class ArticlesState (
    val articles: List<Article> = listOf(),
    val loading : Boolean = false,
    val error:String? = null
)