package id.posgram.belajar_kmp.di

import id.posgram.belajar_kmp.articles.ArticlesViewModel
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import org.koin.core.context.startKoin

fun initKoin() {

    val modules = applicationModule

    startKoin {
        modules(modules)
    }
}

class ArticlesInjector : KoinComponent {

    val articlesViewModel: ArticlesViewModel by inject()
}