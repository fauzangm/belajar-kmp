package id.posgram.belajar_kmp.articles.viewmodel

import dev.icerock.moko.mvvm.flow.cStateFlow
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import id.posgram.belajar_kmp.articles.usecase.ArticlesUseCase
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.launch

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