package id.posgram.belajar_kmp.di

import id.posgram.belajar_kmp.articles.viewmodel.ArticlesViewModel
import id.posgram.belajar_kmp.articles.viewmodel.SourcesViewModel
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import org.koin.core.context.startKoin

fun initKoin() {

    val modules = applicationModule + databaseModule

    startKoin {
        modules(modules)
    }
}

class ArticlesInjector : KoinComponent {

    val articlesViewModel: ArticlesViewModel by inject()
}

class SourcesInjector : KoinComponent {

    val sourcesViewModel: SourcesViewModel by inject()
}