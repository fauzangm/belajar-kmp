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

class ArticlesViewModel : ViewModel() {

    private val _articlesState: MutableStateFlow<ArticlesState> =
        MutableStateFlow(ArticlesState(loading = true))
    val articlesState = _articlesState.asStateFlow().cStateFlow()
    val useCase: ArticlesUseCase
    init {
        val httpClient = HttpClient {
            install(ContentNegotiation){
                json(Json {
                    prettyPrint = true
                    isLenient = true
                    ignoreUnknownKeys = true
                })
            }
        }
        val service = ArticleService(httpClient = httpClient)
        useCase = ArticlesUseCase(service = service)
        getArticles()
    }

    fun getArticles() {
        viewModelScope.launch {
            val fetchArticle = useCase.getArticles()

            _articlesState.emit(ArticlesState(articles = fetchArticle))
        }
    }

}