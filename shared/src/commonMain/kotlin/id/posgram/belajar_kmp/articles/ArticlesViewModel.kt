package id.posgram.belajar_kmp.articles

import dev.icerock.moko.mvvm.flow.cStateFlow
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import id.posgram.belajar_kmp.articles.model.Article
import id.posgram.belajar_kmp.articles.service.ArticleService
import id.posgram.belajar_kmp.articles.usecase.ArticlesUseCase
import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.launch
import kotlinx.serialization.json.Json

class ArticlesViewModel(
    private val useCase: ArticlesUseCase
) : ViewModel() {

    private val _articlesState: MutableStateFlow<ArticlesState> =
        MutableStateFlow(ArticlesState(loading = true))
    val articlesState = _articlesState.asStateFlow().cStateFlow()

    init {
        getArticles()
    }

    fun getArticles(fetch: Boolean = false) {
        viewModelScope.launch {
            _articlesState.emit(
                ArticlesState(
                    loading = true,
                    articles = _articlesState.value.articles
                )
            )

            val fetchArticle = useCase.getArticles(fetch)

            _articlesState.emit(ArticlesState(articles = fetchArticle))
        }
    }

}